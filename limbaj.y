%{
    #include "AST.h"
    #include <cstring>
    #include <iostream>
    #include <vector>
    using namespace std;
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
    extern int yylex();
    void yyerror(const char * s);
    class SymTable* current;
    int errorCount = 0;

    SymTable globalSymTable("global");
    SymTable* currentSymTable = &globalSymTable;

    void printSymbolTables() 
    {
        globalSymTable.printAskedScopes(); //cele cerute
        globalSymTable.printAllScopes(); //toate
    }
%}

%right '='
%left '+' '-'
%left '*' '/' '%'
%right '^'
%right UMINUS

%left OR
%left AND
%right '!'
%left '>' '<' GE LE EQ NEQ
%left '(' ')'

%union {
    char* valtype;
    class ASTNode* node;
    int intval;
    float floatval;
    bool boolval;
    char charval;
    char* string;
}

%token BGIN END ASSIGN
%token EQ NEQ AND OR LE GE
%token<string> ID CLASS MAIN IF ELSE WHILE FOR PRINT TYPEOF FUNC RETURN
%token<valtype> TYPE

%token<intval> INT
%token<floatval> FLOAT
%token<charval> CHAR
%token<string> STRING
%token<boolval> TRUE FALSE
%type<node> expression boolean_expression


%start PROGRAM

%%

PROGRAM : {
            currentSymTable->enterScope("Global", "global");
        }
        class_section var_section func_section main_function
        {
            if (errorCount == 0) 
            {
                currentSymTable->leaveScope();
                cout << "The program is correct!" << endl;
                printSymbolTables();
            }
        }
        ;

 /* 1) Global Variable Section_______________________________________________________________________________*/
var_section : var_declarations
            | /* epsilon */
            ;

var_declarations : var_declarations var_declaration
                 | var_declaration
                 ;

var_declaration : TYPE ID ';' 
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        currentSymTable->addVar($1, $2);
                    }
                }
                | TYPE ID '[' expression ']' ';'
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=$4->evaluate(*currentSymTable);
                        if($4->getType() == "int")
                        {
                            currentSymTable->addVector($1, $2, get<int>(result));
                        }else{
                            cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        }
                    }
                }
                | TYPE ID '[' expression ']' ASSIGN expression ';'
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=$4->evaluate(*currentSymTable);
                        auto valueResult = $7->evaluate(*currentSymTable);
                        if($4->getType() == "int")
                        {
                            currentSymTable->addVector($1, $2, get<int>(result), valueResult);
                        }else{
                            cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        }
                    }
                }
                | TYPE ID ASSIGN expression ';'
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        currentSymTable->addVar($1, $2, 101);
                    }
                }
                | TYPE ID ASSIGN boolean_expression ';'
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        currentSymTable->addVar($1, $2, 1);
                    }
                }
                | TYPE ID ASSIGN CHAR ';'
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else
                    {
                        currentSymTable->addVar($1, $2, $4);
                    }
                }
                | TYPE ID ASSIGN STRING ';'
                {
                    if (currentSymTable->isDefined($2)) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        currentSymTable->addVar($1, $2, $4);
                    }
                }
                ;

 /* 2) Function Definitions Section___________________________________________________________________________*/
func_section : func_definitions
             | /* epsilon */
             ;

func_definitions : func_definitions func_definition
                 | func_definition
                 ;

func_definition:
    FUNC TYPE ID '(' parameter_list ')' 
    {
        if (currentSymTable->isDefined($3)) 
        {
            cout << "Error: Function '" << $3 << "' already defined in this scope or previous ones." << endl;
            errorCount++;
        }
        else 
        {
             /* currentSymTable->addFunc($2, $3); */
            currentSymTable->enterScope($3,"function");
        }
    }
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    ;

 //_________________________________________________

method_definition:
    FUNC TYPE ID '(' parameter_list ')' 
    {
        currentSymTable->addMethod($2, $3);
        currentSymTable->enterScope($3,"method");
    }
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    ;


 /* 3) Class Section _______________________________________________________________________________________*/
class_section : class_definitions
              | /* epsilon */
              ;

class_definitions : class_definitions class_definition
                  | class_definition
                  ;

class_definition:
    CLASS ID 
    {
        currentSymTable->addClass($2);
        currentSymTable->enterScope($2, "class");
    }
    BGIN
    class_body 
    END
    {
        currentSymTable->leaveScope();
    }
    ;


class_body : class_body class_member
           | class_member
           ;

class_member : var_declaration
             | method_definition
             | constructor_definition
             ;

constructor_definition: 
    ID '(' parameter_list ')' 
    {
        currentSymTable->addConstructor($1);
        currentSymTable->enterScope($1, "constructor"); 
    }
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    ;


 /*__________________________________________*/
parameter_list : parameter
               | parameter_list ',' parameter
               | /* epsilon */
               ;

parameter : TYPE ID
          ;

 /* 4) Entry Point Main Function______________________________________________________________________________*/
main_function:
    MAIN BGIN
    {
        currentSymTable->enterScope("main", "main");
    }
    statement_list END
    {
        currentSymTable->leaveScope();
    }
    ;

 /* Statements and Control Flow______________________________________________________________________________*/
statement_list : statement_list statement_with_semicolon ';'
               | statement_with_semicolon ';'
               | statement_list statement_without_semicolon
               | statement_without_semicolon
               ;

statement_with_semicolon:
                        assignment
                        | predefined_function_call
                        | function_call
                        | return_statement
                        | object_access
                        ;

statement_without_semicolon :
                            var_declaration
                            | if_statement
                            | while_statement
                            | for_statement
                            ;

assignment : left_value ASSIGN expression
           | left_value ASSIGN boolean_expression
           ;

left_value : ID
           {
               if (!currentSymTable->isUsedBeforeDefined($1, "variable")) {
                   cout << "Error: Variable '" << $1 << "' used before being defined." << endl;
                   errorCount++;
               }
           }
           | ID '[' expression ']'
           {
               if (!currentSymTable->isUsedBeforeDefined($1, "variable")) {
                   cout << "Error: Variable '" << $1 << "' used before being defined." << endl;
                   errorCount++;
               }
           }
           | object_access
           | CHAR
           | STRING
           ;

object_access : ID '.' ID
              | ID '.' ID '(' argument_list ')'
              ;

if_statement:
    IF '(' boolean_expression ')' 
    {
        currentSymTable->enterScope("IF","block");
    } 
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    else_statement
    ;

else_statement : 
    /* epsilon */
    | ELSE 
    {
        currentSymTable->enterScope("ELSE","block");                
    }
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    ;

while_statement:
    WHILE '(' boolean_expression ')' 
    {
        currentSymTable->enterScope("WHILE","block");
    }
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    ;

for_statement:
    FOR '(' var_declaration boolean_expression ';' assignment ')' 
    {
        currentSymTable->enterScope("FOR","block");
    }
    BGIN statement_list END 
    {
        currentSymTable->leaveScope();
    }
    ;


predefined_function_call : print_statement
                         | type_of_statement
                         ;

function_call : ID '(' argument_list ')'
              {
                  if (!currentSymTable->isUsedBeforeDefined($1, "function")) {
                      cout << "Error: Function '" << $1 << "' called before being defined." << endl;
                      errorCount++;
                  }
              }
              ;

print_statement : PRINT '(' CHAR ')'{
                    cout << "Print (char): " << $3 << endl;
                }
                | PRINT '(' STRING ')'{
                    cout << "Print (string): " << $3 << endl;
                }
                | PRINT '(' expression ')'{
                    $3->evaluate(*currentSymTable);
                    $3->printResult();
                }
                | PRINT '(' boolean_expression ')'{
                    $3->evaluate(*currentSymTable);
                    $3->printResult();
                }
                | PRINT '(' object_access ')'{
                    cout<<"Print (object access): 0\n";
                }
                ;

type_of_statement : TYPEOF '(' expression ')'{
                        $3->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<$3->getType()<<endl;
                  }
                  | TYPEOF '(' boolean_expression ')'{\
                        $3->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<$3->getType()<<endl;
                  }
                  | TYPEOF '(' object_access ')'
                  ;

return_statement : RETURN expression
                 ;

argument_list : argument_list ',' expression
              | expression
              | argument_list ',' boolean_expression
              | boolean_expression
              | /* epsilon */
              ;

 /* Expressions_____________________________________________________________________________________________*/
expression : expression '+' expression {
               $$ = new ASTNode(ASTNode::Operator::ADD, $1, $3);
           }
           | expression '-' expression {
               $$ = new ASTNode(ASTNode::Operator::SUBTRACT, $1, $3);
           }
           | expression '*' expression {
               $$ = new ASTNode(ASTNode::Operator::MULTIPLY, $1, $3);
           }
           | expression '/' expression {
               $$ = new ASTNode(ASTNode::Operator::DIVIDE, $1, $3);
           }
           | expression '%' expression {
               $$ = new ASTNode(ASTNode::Operator::MODULO, $1, $3);
           }
           | expression '^' expression {
               $$ = new ASTNode(ASTNode::Operator::POWER, $1, $3);
           }
           | '-' expression %prec UMINUS {
               $$ = new ASTNode(ASTNode::Operator::UMINUS, $2, nullptr);
           }
           | '(' expression ')' {
               $$ = $2;
           }
           | ID {
                if (!currentSymTable->existsId($1)) 
                {
                    cout << "Error: Identifier '" << $1 << "' not defined." << endl;
                    errorCount++;
                }
               $$ = new ASTNode($1, true);
           }
           | INT {
               $$ = new ASTNode($1);
           }
           | FLOAT {
               $$ = new ASTNode($1);
           }
           | function_call{
                $$ = nullptr; //tmp
           }
           ;

boolean_expression : TRUE {
                       $$ = new ASTNode(true);
                   }
                   | FALSE {
                       $$ = new ASTNode(false);
                   }
                   | '(' boolean_expression ')' {
                       $$ = $2;
                   }
                   | expression '>' expression {
                       $$ = new ASTNode(ASTNode::Operator::GT, $1, $3);
                   }
                   | expression '<' expression {
                       $$ = new ASTNode(ASTNode::Operator::LT, $1, $3);
                   }
                   | expression GE expression {
                       $$ = new ASTNode(ASTNode::Operator::GE, $1, $3);
                   }
                   | expression LE expression {
                       $$ = new ASTNode(ASTNode::Operator::LE, $1, $3);
                   }
                   | expression EQ expression {
                       $$ = new ASTNode(ASTNode::Operator::EQ, $1, $3);
                   }
                   | expression NEQ expression {
                       $$ = new ASTNode(ASTNode::Operator::NEQ, $1, $3);
                   }
                   | boolean_expression AND boolean_expression {
                       $$ = new ASTNode(ASTNode::Operator::AND, $1, $3);
                   }
                   | boolean_expression OR boolean_expression {
                       $$ = new ASTNode(ASTNode::Operator::OR, $1, $3);
                   }
                   | '!' boolean_expression {
                      $$ = new ASTNode(ASTNode::Operator::NOT, $2, nullptr);
                   }
                   ;

%%
 /*____________________________________________________________________________________________________________*/

void yyerror(const char * s) {
    cout << "Error: " << s << " at line: " << yylineno <<endl;
    errorCount++;
}

int main(int argc, char** argv) {
    current = new SymTable("Global");
    yyin = fopen(argv[1], "r");

    currentSymTable = &globalSymTable;
    
    yyparse();
    delete current;
    return 0;
}

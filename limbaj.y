%{
    #include <iostream>
    #include <vector>
    #include "SymTable.h"
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
        cout<<"\nPrinting all scopes:\n";
        globalSymTable.printAllScopes();
    }
%}  

%left '+' '-'
%left '*' '/' '%'
%right '^'
%right '='
%left OR
%left AND

%union {
    int intval;
    float floatval;
    bool boolval;
    char charval;
    char* string;
}

%token BGIN END ASSIGN
%token EQ NEQ AND OR LE GE
%token<string> ID TYPE CLASS MAIN IF ELSE WHILE FOR PRINT TYPEOF FUNC RETURN

%token<intval> NR
%token<charval> CHAR
%token<string> STRING
%token<boolval> TRUE FALSE


%start PROGRAM

%%

PROGRAM : class_section var_section func_section main_function {
            if (errorCount == 0) 
            {
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

 var_declaration : TYPE ID ';' {
                    cout << "Adding var: " << $2 << " of type: " << $1 <<endl;
                    currentSymTable->addVar($1, $2);
                }
                | TYPE ID '[' expression ']' ';'
                {
                    cout << "Adding var: " << $2 << " of type: " << $1 <<endl;
                    vector<int> tmp = {0, 0, 0, 0, 0}; //example vector size 5
                    currentSymTable->addVar($1, $2, tmp);
                }
                | TYPE ID '[' expression ']' ASSIGN expression ';'
                {
                    cout << "Adding var: " << $2 << " of type: " << $1 <<endl;
                    vector<int> tmp = {100, 100, 100}; // example vector size 3 = 100;
                    currentSymTable->addVar($1, $2, tmp);
                }
                | TYPE ID ASSIGN expression ';'
                {
                    cout << "Adding var: " << $2 << " of type: " << $1 << " with TEMP TEST value: 101" <<endl;
                    currentSymTable->addVar($1, $2, 101);
                }
                | TYPE ID ASSIGN boolean_expression ';'
                {
                    cout << "Adding var: " << $2 << " of type: " << $1 << " with TEMP TEST value: 1" <<endl;
                    currentSymTable->addVar($1, $2, 1);
                }
                | TYPE ID ASSIGN CHAR ';'
                {
                    cout << "Adding var: " << $2 << " of type: " << $1 << " with value: " << $4 <<endl;
                    currentSymTable->addVar($1, $2, $4);
                }
                | TYPE ID ASSIGN STRING ';'
                {
                    cout << "Adding var: " << $2 << " of type: " << $1 << " with value: " << $4 <<endl;
                    currentSymTable->addVar($1, $2, $4);
                }
                ;

 /* 2) Function Definitions Section___________________________________________________________________________*/
func_section : func_definitions
             | /* epsilon */
             ;

func_definitions : func_definitions func_definition
                 | func_definition
                 ;

func_definition : FUNC TYPE ID '(' parameter_list ')' BGIN statement_list END
                {
                    cout << "Function " << $3 << " defined with return type: " << $2 << endl;
                    currentSymTable->addFunc($2, $3);
                    currentSymTable->enterScope($3);
                }
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

class_definition : CLASS ID BGIN class_body END
                 {
                    cout << "Class " << $2 << " defined." << endl;
                    currentSymTable->addClass($2);
                    currentSymTable->enterScope($2);
                 }
                 {
                    currentSymTable->leaveScope();
                 }
                 ;

class_body : class_body class_member
           | class_member
           ;

class_member : var_declaration
             | func_definition
             | constructor_definition
             ;

constructor_definition : ID '(' parameter_list ')' BGIN statement_list END
                       ;

 /*__________________________________________*/
parameter_list : parameter
               | parameter_list ',' parameter
               | /* epsilon */
               ;

parameter : TYPE ID
          ;

 /* 4) Entry Point Main Function______________________________________________________________________________*/
main_function : MAIN BGIN statement_list END
              ;

 /* Statements and Control Flow______________________________________________________________________________*/
statement_list : statement_list statement_with_semicolon ';'
               | statement_with_semicolon ';'
               | statement_list statement_without_semicolon
               | statement_without_semicolon
               ;

statement_with_semicolon : assignment
                         | function_call
                         | predefined_function_call
                         | return_statement
                         | object_access
                         ;

statement_without_semicolon : if_statement
                            | while_statement
                            | for_statement
                            ;

assignment : left_value ASSIGN expression
           | left_value ASSIGN boolean_expression
           ;

left_value : ID
           | ID '[' expression ']'
           | TYPE ID
           | TYPE ID '[' expression ']'
           | object_access
           | CHAR
           | STRING
           ;

object_access : ID '.' ID
              | ID '.' ID '(' argument_list ')'
              ;

if_statement : IF '(' boolean_expression ')' BGIN statement_list END 
             {
                currentSymTable->enterScope("IF");
             }
             {
                currentSymTable->leaveScope();
             }
             | IF '(' boolean_expression ')' BGIN statement_list END ELSE BGIN statement_list END
             {
                currentSymTable->enterScope("IF-ELSE"); //aici probabil trb 2 scopuri separate pt if/else
             }
             {
                currentSymTable->leaveScope();
             }
             ;

while_statement : WHILE '(' boolean_expression ')' BGIN statement_list END
                {
                    currentSymTable->enterScope("WHILE");
                }
                {
                    currentSymTable->leaveScope();
                }
                ;

for_statement : FOR '(' assignment ';' boolean_expression ';' assignment ')' BGIN statement_list END
              {
                    currentSymTable->enterScope("FOR");
              }
              {
                    currentSymTable->leaveScope();
              }

predefined_function_call : print_statement
                         | type_of_statement
                         ;

function_call : ID '(' argument_list ')'
              ;

print_statement : PRINT '(' CHAR ')'
                | PRINT '(' STRING ')'
                | PRINT '(' expression ')'
                | PRINT '(' boolean_expression ')'
                | PRINT '(' object_access ')'
                | PRINT '(' type_of_statement ')'
                ;

type_of_statement : TYPEOF '(' expression ')'
                  | TYPEOF '(' boolean_expression ')'
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
expression : expression '+' expression
           | expression '-' expression
           | expression '*' expression
           | expression '/' expression
           | expression '%' expression
           | expression '^' expression
           | '-' expression %prec '-'
           | '(' expression ')'
           | ID
           | NR
           | function_call
           ;

boolean_expression : TRUE
                   | FALSE
                   | '(' boolean_expression ')'
                   | expression '>' expression
                   | expression '<' expression
                   | expression GE expression
                   | expression LE expression
                   | expression EQ expression
                   | expression NEQ expression
                   | boolean_expression AND boolean_expression
                   | boolean_expression OR boolean_expression
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

    // Initialize global scope
    currentSymTable = &globalSymTable;

    yyparse();
    delete current;
    return 0;
}

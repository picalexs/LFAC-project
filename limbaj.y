%{
    #include "AST.h"
    #include <cstring>
    #include <iostream>
    #include <vector>
    #include <utility>
    using namespace std;
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
    extern int yylex();
    void yyerror(const char * s);
    class SymTable* current;

    SymTable globalSymTable("global");
    SymTable* currentSymTable = &globalSymTable;

    void printSymbolTables() 
    {
        globalSymTable.printAskedScopes(); //cele cerute
        globalSymTable.printAllScopes(); //toate
    }

    struct Param {
        char* type;
        char* name;
        int size;// daca e vector
    };

    struct ParamListNonSTL {
        Param* params;
        int count;
    };
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
%left ';'


%union {
    char* valtype;
    class ASTNode* node;
    int intval;
    float floatval;
    bool boolval;
    char charval;
    char* string;

    struct Param* param;
    struct ParamListNonSTL* params;
}

%token BGIN END ASSIGN
%token EQ NEQ AND OR LE GE
%token<string> ID BOOLID CLASS MAIN IF ELSE WHILE FOR PRINT TYPEOF FUNC RETURN 
%token<valtype> TYPE

%token<intval> INT
%token<floatval> FLOAT
%token<charval> CHAR
%token<string> STRING
%token<boolval> TRUE FALSE BOOL
%type<node> boolean_expression expression assignment left_value
%type<string>  object_access function_call

%type <params> parameter_list
%type <param> parameter

%start PROGRAM

%%

PROGRAM : {
            currentSymTable->enterScope("Global", "global");
        }
        class_section var_section func_section main_function
        {
            currentSymTable->leaveScope();
            cout << "The program is correct!" << endl;
            printSymbolTables();
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
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar($1, $2);
                }
                | TYPE ID ASSIGN expression ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    
                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }

                    string rtype=$4->getType();
                    if(strcmp($1,rtype.c_str())!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got "<<rtype<<". Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar($1, $2, result);
                }
                | BOOL BOOLID ASSIGN boolean_expression ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    string rtype=$4->getType();
                    currentSymTable->addVar("bool", $2, result);
                }
                | TYPE ID '[' expression ']' ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if($4->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector($1, $2, get<int>(result));
                }
                | TYPE ID '[' expression ']' ASSIGN expression ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if($4->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }

                    auto valueResult = $7->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(valueResult)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    string rtype=$7->getType();

                    if(strcmp($1,rtype.c_str())!=0 || strcmp($1,"bool")==0 || rtype=="bool")
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got "<<rtype<<". Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector($1, $2, get<int>(result), valueResult);
                }
                | TYPE ID '[' expression ']' ASSIGN CHAR ';'{
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    if(strcmp($1,"char")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got char Line: " << yylineno << endl;
                        return -1;
                    }
                    
                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if($4->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("char", $2, get<int>(result), $7);
                }
                | TYPE ID '[' expression ']' ASSIGN STRING ';'{
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    if(strcmp($1,"string")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got string Line: " << yylineno << endl;
                        return -1;
                    }
                    
                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if($4->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("string", $2, get<int>(result), $7);
                }
                | BOOL BOOLID '[' expression ']' ';'{
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }

                    string rtype=$4->getType();
                    if($4->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("bool", $2, get<int>(result));
                } 
                | BOOL BOOLID '[' expression ']' ASSIGN boolean_expression ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=$4->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if($4->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }

                    auto valueResult = $7->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(valueResult)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("bool", $2, get<int>(result), valueResult);
                }
                | TYPE ID ASSIGN CHAR ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    if(strcmp($1,"char")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got char Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar($1, $2, $4);
                }
                | TYPE ID ASSIGN STRING ';'
                {
                    if (currentSymTable->isDefined($2, "identifier")) {
                        cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    if(strcmp($1,"string")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got string Line: " << yylineno << endl;
                        return -1;
                    }
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

func_definition:
    FUNC TYPE ID '(' parameter_list ')' 
    {
        if (currentSymTable->isDefined($3, "function")) 
        {
            cout << "Error: Function '" << $3 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
            return -1;
        }
        vector<pair<string,string>> params;
        for(int i=0;i<$5->count;i++)
        {
            params.push_back(make_pair($5->params[i].type,$5->params[i].name));
        }
        currentSymTable->addFunc($2, $3, params);
        currentSymTable->enterScope($3, "function");

        
        delete($5->params);
        delete($5);
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
parameter_list : parameter {
                    $$ = new ParamListNonSTL;
                    $$->params = new Param[1];
                    $$->params[0] = *$1;
                    $$->count = 1;
                    delete $1;
                }
               | parameter_list ',' parameter {
                    $$ = $1;
                    Param* newParams = new Param[$$->count + 1];
                    for (int i = 0; i < $$->count; ++i) {
                        newParams[i] = $$->params[i];
                    }
                    newParams[$$->count] = *$3;
                    delete[] $$->params;
                    $$->params = newParams;
                    $$->count++;
                    delete $3;
               }
               | /* epsilon */ {
                    $$ = new ParamListNonSTL;
                    $$->params = nullptr;
                    $$->count = 0;
               }
               ;

parameter : TYPE ID {
                if(currentSymTable->isDefined($2, "identifier")){
                    cout << "Error: Parameter '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }
                $$ = new Param;
                $$->type = $1;
                $$->name = $2;
            }
            | TYPE ID '[' expression']' {
                if(currentSymTable->isDefined($2, "identifier")){
                    cout << "Error: Parameter '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }

                $$ = new Param;
                $$->type = $1;
                $$->name = $2;

                auto result=$4->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if($4->getType() != "int")
                {
                    cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                    return -1;
                }
                $$->size = get<int>(result);
            }
            | BOOL BOOLID {
                if(currentSymTable->isDefined($2, "identifier")){
                    cout << "Error: Parameter '" << $2 << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }

                $$ = new Param;
                $$->type = new char[5];
                strcpy($$->type,"bool");
                $$->name = $2;
            }
            | BOOL BOOLID '[' expression ']' {

            }
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

assignment : left_value ASSIGN expression {
                auto lResult=$1->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                auto rResult=$3->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(rResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=$1->getType();
                string rtype=$3->getType();
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=$1->getIdName();
                int index=$1->getVectorIndex();

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
           | left_value ASSIGN boolean_expression {
                auto lResult=$1->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                auto rResult=$3->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(rResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=$1->getType();
                string rtype="bool";
                if (ltype != rtype || strcmp("bool",ltype.c_str())!=0) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=$1->getIdName();
                int index=$1->getVectorIndex();

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
           | left_value ASSIGN STRING {
                auto lResult=$1->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=$1->getType();
                if (strcmp("string",ltype.c_str())!=0) {
                    cout << "Error: Assignment type mismatch. Expected string but got " << $1 << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=$1->getIdName();
                int index=$1->getVectorIndex();

                Value rResult=$3;

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
           | left_value ASSIGN CHAR {
                auto lResult=$1->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=$1->getType();
                string rtype="char";
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=$1->getIdName();
                int index=$1->getVectorIndex();

                Value rResult=$3;

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
           ;

left_value : ID
            {
                if (!currentSymTable->isDefined($1, "identifier")) {
                    cout << "Error: Variable '" << $1 << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                $$=new ASTNode($1);
            }
            | ID '[' expression ']' {
                if(!currentSymTable->isDefined($1, "identifier")){
                    cout << "Error: Variable '" << $1 << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }

                auto result=$3->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if($3->getType() != "int")
                {
                    cout<<"Error: Invalid array index! (index has to be of type int). Line: " << yylineno << endl;
                    return -1;
                }
                $$ = new ASTNode($1, get<int>(result), true);
            }
            | BOOLID{
                if (!currentSymTable->isDefined($1, "identifier")) {
                    cout << "Error: Variable '" << $1 << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                $$=new ASTNode($1);
            }
            | BOOLID '[' expression ']'
            {
                if (!currentSymTable->isDefined($1, "identifier")) {
                    cout << "Error: Variable '" << $1 << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }

                auto result=$3->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if($3->getType() != "int")
                {
                    cout<<"Error: Invalid array index! (index has to be of type int). Line: " << yylineno << endl;
                    return -1;
                }
                $$ = new ASTNode($1, get<int>(result), true);
            }
            | object_access{
                if(!currentSymTable->isDefined($1,"class")){
                    cout << "Error: Class '" << $1 << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                $$=new ASTNode();
            }
           ;

object_access : ID '.' ID {$$=$1;}
              | ID '.' ID '(' argument_list ')' { $$=$1;}
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
                  if (!currentSymTable->isDefined($1, "function")) {
                      cout << "Error: Function '" << $1 << "' called before being defined. Line: " << yylineno << endl;
                      return -1;
                  }
                  $$=$1;
              }
              ;

print_statement : PRINT '(' CHAR ')'{
                    cout << "Print (char): " << $3 << endl;
                }
                | PRINT '(' STRING ')'{
                    cout << "Print (string): " << $3 << endl;
                }
                | PRINT '(' expression ')'{
                    auto result=$3->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    $3->printResult();
                }
                | PRINT '(' boolean_expression ')'{
                    auto result=$3->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    $3->printResult();
                }
                ;

type_of_statement : TYPEOF '(' expression ')'{
                        auto result=$3->evaluate(*currentSymTable);
                        if(holds_alternative<monostate>(result)){
                            cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                            return -1;
                        }
                        cout<<"TypeOf: "<<$3->getType()<<endl;
                  }
                  | TYPEOF '(' boolean_expression ')'{
                        auto result=$3->evaluate(*currentSymTable);
                        if(holds_alternative<monostate>(result)){
                            cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                            return -1;
                        }
                        cout<<"TypeOf: "<<$3->getType()<<endl;
                  }
                  | TYPEOF '(' STRING ')'{
                        cout<<"TypeOf: string"<<endl;
                  }
                  | TYPEOF '(' CHAR ')'{
                        cout<<"TypeOf: char"<<endl;
                  }
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
                if (!currentSymTable->isDefined($1, "identifier")) 
                {
                    cout << "Error: Identifier '" << $1 << "' not defined. Line: " << yylineno << endl;
                    return -1;
                }
               $$ = new ASTNode($1);
           }
           | ID '[' expression ']' {
                if (!currentSymTable->isDefined($1, "identifier")) 
                {
                    cout << "Error: Identifier '" << $1 << "' not defined. Line: " << yylineno << endl;
                    return -1;
                }
                auto result=$3->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if($3->getType() != "int")
                {
                    cout<<"Error: Invalid array index! (index has to be of type int). Line: " << yylineno << endl;
                    return -1;
                }
                $$ = new ASTNode($1, get<int>(result),true);
           }
           | INT {
               $$ = new ASTNode($1);
           }
           | FLOAT {
               $$ = new ASTNode($1);
           }
           | function_call{
                if(!currentSymTable->isDefined($1, "function")){
                    cout << "Error: Function '" << $1 << "' called before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                $$ = new ASTNode();
           }
           | object_access{
                if(!currentSymTable->isDefined($1,"class")){
                    cout << "Error: Class '" << $1 << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                $$ = new ASTNode();
           }
           ;

boolean_expression : TRUE {
                       $$ = new ASTNode(true,true);
                   }
                   | FALSE {
                       $$ = new ASTNode(false,false);
                   }
                   | '(' boolean_expression ')' {
                       $$ = $2;
                   }
                   | BOOLID {
                        if (!currentSymTable->isDefined($1, "identifier")) 
                        {
                            cout << "Error: Identifier '" << $1 << "' not defined. Line: " << yylineno << endl;
                            return -1;
                        }
                        $$ = new ASTNode($1);
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
    return;
}

int main(int argc, char** argv) {
    current = new SymTable("Global");
    yyin = fopen(argv[1], "r");

    currentSymTable = &globalSymTable;
    
    yyparse();
    delete current;
    return 0;
}

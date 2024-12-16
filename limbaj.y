%{
    #include <iostream>
    #include <vector>
    #include "SymTable.h"
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
    extern int yylex();
    void yyerror(const char * s);
    class SymTable* current;
    int errorCount = 0;
%}

%left '+' '-'
%left '*' '/' '%'
%right '^'
%right '='

%union {
    char* string;
}

%token BGIN END ASSIGN NR
%token EQ NEQ AND OR LE GE
%token<string> ID TYPE CLASS MAIN IF ELSE WHILE FOR PRINT TYPEOF TRUE FALSE FUNC STRING RETURN

%start PROGRAM

%%

PROGRAM : var_section func_section class_section main_function {
           if (errorCount == 0) std::cout << "The program is correct!" << std::endl;
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
                 | TYPE ID '[' expression ']' ';'
                 | TYPE ID '[' boolean_expression ']' ';'
                 | TYPE ID ASSIGN expression ';'
                 | TYPE ID ASSIGN boolean_expression ';'
                ;

 /* 2) Function Definitions Section___________________________________________________________________________*/
func_section : func_definitions
             | /* epsilon */
             ;

func_definitions : func_definitions func_definition
                 | func_definition
                 ;

func_definition : FUNC TYPE ID '(' parameter_list ')' BGIN statement_list END
                ;

 /* 3) Class Section _______________________________________________________________________________________*/
class_section : class_definitions
              | /* epsilon */
              ;

class_definitions : class_definitions class_definition
                  | class_definition
                  ;

class_definition : CLASS ID BGIN class_body END
                 ;

class_body : class_body class_member
           | class_member
           ;

class_member : variable_declaration
             | func_definition
             ;

variable_declaration : TYPE ID ';'
                     | TYPE ID '[' NR ']' ';'
                     ;

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
                         | print_statement
                         | return_statement
                         ;

statement_without_semicolon : if_statement
                            | while_statement
                            | for_statement
                            | func_definition
                            | class_definition
                            ;

assignment : left_value ASSIGN expression
           | left_value ASSIGN boolean_expression
           ;

left_value : ID
           | ID '[' expression ']'
           | TYPE ID
           | TYPE ID '[' expression ']'
           ;

if_statement : IF '(' boolean_expression ')' BGIN statement_list END 
             | IF '(' boolean_expression ')' BGIN statement_list END ELSE BGIN statement_list END
             ;

while_statement : WHILE '(' boolean_expression ')' BGIN statement_list END
                ;

for_statement : FOR '(' assignment ';' boolean_expression ';' assignment ')' BGIN statement_list END
              ;

function_call : ID '(' argument_list ')'
              ;

print_statement : PRINT '(' STRING ')'
                | PRINT '(' expression ')'
                ;

return_statement : RETURN expression
                 | RETURN
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
                   | expression '>' expression
                   | expression '<' expression
                   | expression EQ expression
                   | expression NEQ expression
                   | expression AND expression
                   | expression OR expression
                   ;
%%
 /*____________________________________________________________________________________________________________*/

void yyerror(const char * s) {
    std::cout << "Error: " << s << " at line: " << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    //current = new SymTable("global");
    yyparse();
    //std::cout << "Variables:" << std::endl;
    //current->printVars();
    //delete current;
    return 0;
}

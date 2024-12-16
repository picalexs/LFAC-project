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
%left '*' '/'
%right '='

%union {
    char* string;
}

%token BGIN END ASSIGN NR
%token EQ NEQ AND OR
%token<string> ID TYPE CLASS MAIN IF WHILE FOR PRINT TYPEOF TRUE FALSE
%start progr
%%

progr : class_section var_section func_section main_function {
           if (errorCount == 0) std::cout << "The program is correct!" << std::endl;
       }
      ;

 /* 1) Class Section _______________________________________________________________________________________*/
class_section : class_definitions
              | /* epsilon */
              ;

class_definitions : class_definitions class_definition
                   | class_definition
                   ;

class_definition : CLASS ID '{' class_body '}'
                 ;

class_body : class_body class_member
           | class_member
           ;

class_member : variable_declaration
             | function_declaration
             ;

variable_declaration : TYPE ID ';'
                     | TYPE ID '[' NR ']' ';'
                     ;

function_declaration : TYPE ID '(' parameter_list ')' ';'
                     ;

parameter_list : parameter
               | parameter_list ',' parameter
               ;

parameter : TYPE ID
          ;

 /* 2) Global Variable Section________________________________________________________________________________*/
var_section : declarations
            | /* epsilon */
            ;

declarations : declarations declaration
             | declaration
             ;

declaration : TYPE ID ';' 
            | TYPE ID '[' NR ']' ';'
            ;

 /* 3) Function Definitions Section___________________________________________________________________________*/
func_section : function_definitions
             | /* epsilon */
             ;

function_definitions : function_definitions function_definition
                     | function_definition
                     ;

function_definition : TYPE ID '(' parameter_list ')' BGIN statement_list END
                    ;

 /* 4) Entry Point Main Function______________________________________________________________________________*/
main_function : MAIN BGIN statement_list END
              ;

 /* Statements and Control Flow______________________________________________________________________________*/
statement_list : statement_list statement ';'
               | statement ';'
               ;

statement : assignment
          | if_statement
          | while_statement
          | for_statement
          | function_call
          ;

assignment : ID ASSIGN expression
           | ID '[' expression ']' ASSIGN expression
           ;

if_statement : IF '(' boolean_expression ')' BGIN statement_list END
             ;

while_statement : WHILE '(' boolean_expression ')' BGIN statement_list END
                ;

for_statement : FOR '(' assignment ';' boolean_expression ';' assignment ')' BGIN statement_list END
              ;

function_call : ID '(' argument_list ')'
              ;

argument_list : argument
              | argument_list ',' argument
              ;

argument : expression
         ;

 /* Expressions_____________________________________________________________________________________________*/
expression : expression '+' expression
           | expression '-' expression
           | expression '*' expression
           | expression '/' expression
           | '(' expression ')'
           | ID
           | NR
           ;

 /* Boolean Expressions______________________________________________________________________________________*/
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

void yyerror(const char * s) {
    std::cout << "Error: " << s << " at line: " << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    current = new SymTable("global");
    yyparse();
    std::cout << "Variables:" << std::endl;
    current->printVars();
    delete current;
    return 0;
}

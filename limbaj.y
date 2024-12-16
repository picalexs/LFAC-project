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

%union {
    char* string;
    int intval;
    float floatval;
}

%token  BGIN END ASSIGN NR IF FOR WHILE PRINT TYPEOF CLASS
%token<string> ID TYPE

%type<string> param list_param
%type<int> boolean_expression arithmetic_expression

%start progr

%%
progr : class_section global_section func_section main {
            if (errorCount == 0) 
                std::cout << "The program is correct!" << std::endl;
        };

class_section : /* clase */
      | class_section class_def
      ;

class_def : CLASS ID '{' class_body '}' {
                if (!current->existsId($2)) {
                    current->addClass($2);
                } else {
                    errorCount++;
                    yyerror("Class already defined");
                }
            };

class_body : decl
           | class_body decl
           ;

global_section : /* variabile globale */
      | global_section decl
      ;

declarations : decl
              | declarations decl
              ;

decl : TYPE ID ';' {
                if (!current->existsId($2)) {
                    current->addVar($1, $2);
                } else {
                    errorCount++;
                    yyerror("Variable already defined");
                }
            }
     | TYPE ID '(' list_param ')' ';' {
                if (!current->existsId($2)) {
                    current->addFunc($1, $2);
                } else {
                    errorCount++;
                    yyerror("Function already defined");
                }
            };

list_param : param
           | list_param ',' param
           ;

param : TYPE ID {
                if (current->existsId($2)) {
                    errorCount++;
                    yyerror("Parameter already defined");
                }
            };

func_section : func_def
             | func_section func_def
             ;

func_def : TYPE ID '(' list_param ')' '{' list '}' {
                if (!current->existsId($2)) {
                    current->addFunc($1, $2);
                } else {
                    errorCount++;
                    yyerror("Function already defined");
                }
            };

main : BGIN list END;

list : statement ';'
     | list statement ';'
     ;

statement : ID ASSIGN arithmetic_expression {
                if (!current->existsId($1)) {
                    errorCount++;
                    yyerror("Variable not defined");
                }
            }
          | ID '(' call_list ')' {
                if (!current->existsId($1)) {
                    errorCount++;
                    yyerror("Function not defined");
                }
            }
          | IF '(' boolean_expression ')' '{' list '}'
          | WHILE '(' boolean_expression ')' '{' list '}'
          | PRINT '(' arithmetic_expression ')'
          | TYPEOF '(' ID ')'
          ;

boolean_expression : arithmetic_expression '<' arithmetic_expression
                   | arithmetic_expression '>' arithmetic_expression
                   | arithmetic_expression EQ arithmetic_expression
                   ;

arithmetic_expression : ID {
                            if (!current->existsId($1)) {
                                errorCount++;
                                yyerror("Variable not defined");
                            }
                        }
                      | NR
                      | arithmetic_expression '+' arithmetic_expression
                      | arithmetic_expression '-' arithmetic_expression
                      | arithmetic_expression '*' arithmetic_expression
                      | arithmetic_expression '/' arithmetic_expression
                      ;

call_list : NR
          | call_list ',' NR
          ;

%%

void yyerror(const char * s) {
    std::cout << "error: " << s << " at line: " << yylineno << std::endl;
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

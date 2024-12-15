%{
#include <iostream>
#include <vector>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char* s);
class SymTable* current;
int errorCount = 0;
%}

%union {
    char* string;
    int intt;
    float floatt;
}

%token BGIN END ASSIGN NR
%token<string> ID TYPE
%token IF FOR WHILE PRINT TYPEOF
%start progr

%%

progr : class_section global_section func_section main {
    if (errorCount == 0) {
        std::cout << "The program is correct!" << std::endl;
    }
};

class_section : class_def
              | class_section class_def
              ;

global_section : decl
               | global_section decl
               ;

func_section : func_def
             | func_section func_def
             ;

class_def : "class" ID '{' class_body '}' ';';

class_body : decl
           | class_body decl
           ;

decl : TYPE ID ';' {
            if (!current->existsId($2)) {
                current->addVar($1, $2);
            } else {
                errorCount++;
                yyerror("Variable already defined");
            }
        }
     | TYPE ID '(' list_param ')' ';'
     ;

list_param : param
           | list_param ',' param
           ;

param : TYPE ID;

func_def : TYPE ID '(' list_param ')' '{' list '}';

main : BGIN list END;

list : statement ';'
     | list statement ';'
     ;

statement : ID ASSIGN ID {
                if (!current->existsId($1)) {
                    errorCount++;
                    yyerror("Undefined variable");
                }
            }
          | ID ASSIGN NR
          | ID '(' call_list ')'
          | IF '(' boolean_expression ')' '{' list '}'
          | WHILE '(' boolean_expression ')' '{' list '}'
          | PRINT '(' expression ')'
          | TYPEOF '(' ID ')'
          ;

call_list : NR
          | call_list ',' NR
          ;

boolean_expression : boolean_term
                   | boolean_expression "||" boolean_term
                   ;

boolean_term : boolean_factor
             | boolean_term "&&" boolean_factor
             ;

boolean_factor : "true"
               | "false"
               | ID
               | ID "==" ID
               | ID "!=" ID
               | ID ">" ID
               | ID "<" ID
               ;

expression : ID
           | NR
           | ID '+' ID
           | ID '-' ID
           | ID '*' ID
           | ID '/' ID
           ;

%%

void yyerror(const char* s) {
    std::cout << "Error: " << s << " at line: " << yylineno << std::endl;
}

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        std::cerr << "Cannot open input file." << std::endl;
        return 1;
    }
    current = new SymTable("global");
    yyparse();
    std::cout << "Variables:" << std::endl;
    current->printVars();
    delete current;
    return 0;
}

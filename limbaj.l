%{
#include <stdio.h>
#include "limbaj.tab.h"
%}

%option noyywrap
%%

"int"|"float"|"char"|"string"|"bool" { yylval.string = strdup(yytext); return TYPE; }

"class" { return CLASS; }
"main" { return MAIN; }
"func" { return FUNC; }
"{" { return BGIN; }
"}" { return END; }
"return" { return RETURN; }

"if" { return IF; }
"else" { return ELSE; }
"while" { return WHILE; }
"for" { return FOR; }

"Print" { return PRINT; }
"TypeOf" { return TYPEOF; }

"true" { return TRUE; }
"false" { return FALSE; }

"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"%" { return '%'; }
"^" { return '^'; }

">" { return '>'; }
"<" { return '<'; }
">=" { return GE; }
"<=" { return LE; }
"==" { return EQ; }
"!=" { return NEQ; }
"&&" { return AND; }
"||" { return OR; }

"=" { return ASSIGN; }
":" { return ':'; }
";" { return ';'; }
"," { return ','; }
"(" { return '('; }
")" { return ')'; }
"[" { return '['; }
"]" { return ']'; }
"." { return '.'; }

[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.string = strdup(yytext);
    return ID;
}
[-]?(0|[1-9][0-9]*)(\.[0-9]*)? { return NR; }
\"[^\"]*\" { yylval.string = strdup(yytext); return STRING; }

[ \t] ;
\n { yylineno++; }
. { return yytext[0]; }

%%

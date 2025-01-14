/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LIMBAJ_TAB_H_INCLUDED
# define YY_YY_LIMBAJ_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    UMINUS = 258,                  /* UMINUS  */
    BGIN = 259,                    /* BGIN  */
    END = 260,                     /* END  */
    ASSIGN = 261,                  /* ASSIGN  */
    EQ = 262,                      /* EQ  */
    NEQ = 263,                     /* NEQ  */
    AND = 264,                     /* AND  */
    OR = 265,                      /* OR  */
    LE = 266,                      /* LE  */
    GE = 267,                      /* GE  */
    ID = 268,                      /* ID  */
    BOOLID = 269,                  /* BOOLID  */
    CLASS = 270,                   /* CLASS  */
    MAIN = 271,                    /* MAIN  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    WHILE = 274,                   /* WHILE  */
    FOR = 275,                     /* FOR  */
    PRINT = 276,                   /* PRINT  */
    TYPEOF = 277,                  /* TYPEOF  */
    FUNC = 278,                    /* FUNC  */
    RETURN = 279,                  /* RETURN  */
    TYPE = 280,                    /* TYPE  */
    INT = 281,                     /* INT  */
    FLOAT = 282,                   /* FLOAT  */
    CHAR = 283,                    /* CHAR  */
    STRING = 284,                  /* STRING  */
    TRUE = 285,                    /* TRUE  */
    FALSE = 286,                   /* FALSE  */
    BOOL = 287                     /* BOOL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "limbaj.y"

    char* valtype;
    class ASTNode* node;
    int intval;
    float floatval;
    bool boolval;
    char charval;
    char* string;

#line 106 "limbaj.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LIMBAJ_TAB_H_INCLUDED  */

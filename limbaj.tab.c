/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

    #include <iostream>
    #include <vector>
    #include "ASTNode.h"
    #include "SymTable.h"

    class ASTNode;

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

#line 98 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* '+'  */
  YYSYMBOL_5_ = 5,                         /* '-'  */
  YYSYMBOL_6_ = 6,                         /* '*'  */
  YYSYMBOL_7_ = 7,                         /* '/'  */
  YYSYMBOL_8_ = 8,                         /* '%'  */
  YYSYMBOL_UMINUS = 9,                     /* UMINUS  */
  YYSYMBOL_10_ = 10,                       /* '^'  */
  YYSYMBOL_BGIN = 11,                      /* BGIN  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_EQ = 14,                        /* EQ  */
  YYSYMBOL_NEQ = 15,                       /* NEQ  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_LE = 18,                        /* LE  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_CLASS = 22,                     /* CLASS  */
  YYSYMBOL_MAIN = 23,                      /* MAIN  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_PRINT = 28,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 29,                    /* TYPEOF  */
  YYSYMBOL_FUNC = 30,                      /* FUNC  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_NR = 32,                        /* NR  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_STRING = 34,                    /* STRING  */
  YYSYMBOL_TRUE = 35,                      /* TRUE  */
  YYSYMBOL_FALSE = 36,                     /* FALSE  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '['  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* '.'  */
  YYSYMBOL_44_ = 44,                       /* '>'  */
  YYSYMBOL_45_ = 45,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_PROGRAM = 47,                   /* PROGRAM  */
  YYSYMBOL_var_section = 48,               /* var_section  */
  YYSYMBOL_var_declarations = 49,          /* var_declarations  */
  YYSYMBOL_var_declaration = 50,           /* var_declaration  */
  YYSYMBOL_func_section = 51,              /* func_section  */
  YYSYMBOL_func_definitions = 52,          /* func_definitions  */
  YYSYMBOL_func_definition = 53,           /* func_definition  */
  YYSYMBOL_54_1 = 54,                      /* $@1  */
  YYSYMBOL_class_section = 55,             /* class_section  */
  YYSYMBOL_class_definitions = 56,         /* class_definitions  */
  YYSYMBOL_class_definition = 57,          /* class_definition  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_class_body = 59,                /* class_body  */
  YYSYMBOL_class_member = 60,              /* class_member  */
  YYSYMBOL_constructor_definition = 61,    /* constructor_definition  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_parameter_list = 63,            /* parameter_list  */
  YYSYMBOL_parameter = 64,                 /* parameter  */
  YYSYMBOL_main_function = 65,             /* main_function  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_statement_list = 67,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 68,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 69, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 70,                /* assignment  */
  YYSYMBOL_left_value = 71,                /* left_value  */
  YYSYMBOL_object_access = 72,             /* object_access  */
  YYSYMBOL_if_statement = 73,              /* if_statement  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_75_6 = 75,                      /* $@6  */
  YYSYMBOL_else_statement = 76,            /* else_statement  */
  YYSYMBOL_77_7 = 77,                      /* $@7  */
  YYSYMBOL_while_statement = 78,           /* while_statement  */
  YYSYMBOL_79_8 = 79,                      /* $@8  */
  YYSYMBOL_for_statement = 80,             /* for_statement  */
  YYSYMBOL_81_9 = 81,                      /* $@9  */
  YYSYMBOL_predefined_function_call = 82,  /* predefined_function_call  */
  YYSYMBOL_function_call = 83,             /* function_call  */
  YYSYMBOL_print_statement = 84,           /* print_statement  */
  YYSYMBOL_type_of_statement = 85,         /* type_of_statement  */
  YYSYMBOL_return_statement = 86,          /* return_statement  */
  YYSYMBOL_argument_list = 87,             /* argument_list  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_boolean_expression = 89         /* boolean_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   460

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     8,     2,     2,
      40,    41,     6,     4,    42,     5,    43,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      45,     3,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,    10,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    70,    71,    74,    75,    78,    82,    88,
      94,    99,   104,   109,   117,   118,   121,   122,   127,   126,
     140,   141,   144,   145,   150,   149,   164,   165,   168,   169,
     170,   175,   174,   188,   189,   190,   193,   199,   198,   210,
     211,   212,   213,   217,   218,   219,   220,   221,   225,   226,
     227,   228,   231,   232,   235,   236,   237,   238,   239,   242,
     243,   248,   252,   247,   258,   261,   260,   272,   271,   283,
     282,   293,   294,   297,   300,   301,   302,   303,   304,   305,
     308,   309,   310,   313,   316,   317,   318,   319,   320,   324,
     327,   330,   333,   336,   339,   342,   345,   348,   351,   354,
     359,   362,   365,   368,   371,   374,   377,   380,   383,   386,
     389
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UMINUS", "'^'", "BGIN", "END", "ASSIGN", "EQ",
  "NEQ", "AND", "OR", "LE", "GE", "ID", "TYPE", "CLASS", "MAIN", "IF",
  "ELSE", "WHILE", "FOR", "PRINT", "TYPEOF", "FUNC", "RETURN", "NR",
  "CHAR", "STRING", "TRUE", "FALSE", "';'", "'['", "']'", "'('", "')'",
  "','", "'.'", "'>'", "'<'", "$accept", "PROGRAM", "var_section",
  "var_declarations", "var_declaration", "func_section",
  "func_definitions", "func_definition", "$@1", "class_section",
  "class_definitions", "class_definition", "$@2", "class_body",
  "class_member", "constructor_definition", "$@3", "parameter_list",
  "parameter", "main_function", "$@4", "statement_list",
  "statement_with_semicolon", "statement_without_semicolon", "assignment",
  "left_value", "object_access", "if_statement", "$@5", "$@6",
  "else_statement", "$@7", "while_statement", "$@8", "for_statement",
  "$@9", "predefined_function_call", "function_call", "print_statement",
  "type_of_statement", "return_statement", "argument_list", "expression",
  "boolean_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-148)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    -5,    28,    -4,   -15,  -148,  -148,  -148,    34,     5,
      -4,  -148,  -148,    56,    -7,    60,    77,     5,  -148,  -148,
      97,   245,  -148,    50,    63,    87,  -148,  -148,    84,  -148,
    -148,    -9,  -148,  -148,    50,    92,  -148,   129,   135,  -148,
    -148,   163,  -148,   170,    75,    50,   256,   106,  -148,   158,
    -148,  -148,   171,   163,  -148,  -148,   186,    17,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,  -148,    50,
      50,   163,   163,  -148,    68,    48,   158,   419,   166,    24,
    -148,   109,    89,   143,  -148,  -148,   246,   246,   171,   171,
     171,   171,   450,   450,   450,   450,   450,   450,    89,  -148,
     192,    50,  -148,   123,   -24,   147,   162,   176,   183,   185,
      50,  -148,  -148,  -148,   296,   189,  -148,  -148,   226,   228,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
     158,  -148,   163,   299,  -148,    50,   222,   163,   163,    -4,
     177,   262,   450,  -148,   206,  -148,  -148,   163,   235,  -148,
      89,   143,  -148,   236,   282,   211,    36,    43,   163,    70,
     216,   227,   229,   231,   214,    47,   232,   230,   122,  -148,
      89,   143,   419,   419,  -148,   163,  -148,  -148,   124,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,   314,   332,
     128,   258,   265,   -11,  -148,  -148,  -148,   419,   419,    85,
     242,  -148,   350,   368,  -148,  -148,  -148,   273,   266,   419,
    -148,  -148,   386,   285,  -148,   419,   404,  -148
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      21,     0,     0,     4,    20,    23,    24,     1,     0,    15,
       3,     6,    22,     0,     0,     0,     0,    14,    17,     5,
       0,     0,     7,     0,     0,     0,     2,    16,     0,    28,
      29,     0,    27,    30,     0,    97,    98,     0,     0,   100,
     101,     0,    99,     0,     0,     0,     0,     0,    37,    35,
      25,    26,    95,    88,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    11,     0,     0,    35,     0,     0,     0,
      33,     0,    85,    87,    96,   102,    89,    90,    91,    92,
      93,    94,   107,   108,   106,   105,   103,   104,     0,   109,
     110,     0,     8,     0,    54,     0,     0,     0,     0,     0,
       0,    57,    58,    48,     0,     0,    42,    43,     0,    47,
      49,    50,    51,    45,    44,    71,    72,    46,    36,    31,
       0,    73,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,    83,    38,     0,    41,    40,     0,     0,    34,
      84,    86,     9,     0,     0,    59,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      52,    53,     0,     0,    55,    88,    61,    67,     0,    74,
      75,    78,    79,    76,    77,    82,    80,    81,     0,     0,
       0,     0,     0,     0,    32,    19,    60,     0,     0,    54,
       0,    56,     0,     0,    69,    62,    68,     0,    64,     0,
      65,    63,     0,     0,    70,     0,     0,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,  -148,    -2,  -148,  -148,    62,  -148,  -148,
    -148,   289,  -148,  -148,   268,  -148,  -148,   224,   180,  -148,
    -148,  -147,   -87,   -45,   108,  -148,  -136,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   -67,  -148,   172,
    -148,   136,   -21,    15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    10,   113,    16,    17,    30,   153,     3,
       4,     5,    13,    31,    32,    33,   148,    79,    80,    26,
      77,   114,   115,   116,   117,   118,   119,   120,   191,   208,
     211,   213,   121,   192,   122,   207,   123,    42,   125,   126,
     127,    81,    98,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    11,    46,    50,   162,   166,    21,     1,    19,   199,
     124,    28,     8,    52,   135,     6,    53,     8,    29,   136,
      56,    15,   111,   112,    74,   188,   189,   144,     7,    29,
      22,    23,    82,    71,    72,    15,    44,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   124,    96,    97,
     202,   203,    71,    72,    14,    34,    57,   201,    85,    71,
      72,   101,   212,    71,    72,   129,   130,    20,   216,   145,
      35,    18,    58,    59,    60,    61,    62,   176,    63,    27,
     133,    24,    36,    47,   177,   102,    99,   100,   184,   142,
      45,    71,    72,    58,    59,    60,    61,    62,    48,    63,
      25,   144,   144,    64,    65,   124,   124,    66,    67,    84,
      53,   150,    73,   136,   154,   144,   144,    28,     8,   164,
     167,   124,   124,   135,    49,   144,   170,    15,   136,   144,
     124,   124,    53,    69,    70,   124,   124,   158,    71,    72,
      71,    72,   124,   145,   145,   124,    76,   151,   124,   124,
     131,   132,   156,   157,    82,   165,   168,   145,   145,    71,
      72,   193,   171,   187,   134,   130,    54,   145,    34,   196,
     132,   145,    55,   178,    58,    59,    60,    61,    62,    78,
      63,    63,    34,    35,    64,    65,   128,   137,    66,    67,
      58,    59,    60,    61,    62,    36,    63,   159,    39,    40,
      64,    65,   138,    41,    66,    67,   109,    68,    71,    36,
     160,   161,    39,    40,    69,    70,   139,    41,    58,    59,
      60,    61,    62,   140,    63,   141,   146,    84,    64,    65,
      69,    70,    66,    67,    58,    59,    60,    61,    62,   147,
      63,   -56,   155,   169,    64,    65,   172,   173,    66,    67,
      34,   175,    60,    61,    62,   183,    63,   179,    69,    70,
      58,    59,    60,    61,    62,    35,    63,    34,   180,   197,
     181,   186,   182,   185,    69,    70,   198,    36,    37,    38,
      39,    40,   159,   204,   209,    41,    58,    59,    60,    61,
      62,   210,    63,    12,    36,    75,   215,    39,    40,    51,
     103,   200,    41,    58,    59,    60,    61,    62,   143,    63,
     149,   190,   163,     0,     0,     0,   104,     8,     0,     0,
     105,   174,   106,   107,   108,   109,   194,   110,     0,   111,
     112,     0,     0,     0,   104,     8,   152,     0,   105,     0,
     106,   107,   108,   109,   195,   110,     0,   111,   112,     0,
       0,     0,   104,     8,     0,     0,   105,     0,   106,   107,
     108,   109,   205,   110,     0,   111,   112,     0,     0,     0,
     104,     8,     0,     0,   105,     0,   106,   107,   108,   109,
     206,   110,     0,   111,   112,     0,     0,     0,   104,     8,
       0,     0,   105,     0,   106,   107,   108,   109,   214,   110,
       0,   111,   112,     0,     0,     0,   104,     8,     0,     0,
     105,     0,   106,   107,   108,   109,   217,   110,     0,   111,
     112,     0,     0,     0,   104,     8,     0,     0,   105,     0,
     106,   107,   108,   109,     0,   110,     0,   111,   112,   104,
       8,     0,     0,   105,     0,   106,   107,   108,   109,     0,
     110,     0,   111,   112,    58,    59,    60,    61,    62,     0,
      63
};

static const yytype_int16 yycheck[] =
{
      21,     3,    23,    12,   140,   141,    13,    22,    10,    20,
      77,    20,    21,    34,    38,    20,    40,    21,    20,    43,
      41,    30,    33,    34,    45,   172,   173,   114,     0,    31,
      37,    38,    53,    16,    17,    30,    21,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,   114,    69,    70,
     197,   198,    16,    17,    20,     5,    41,   193,    41,    16,
      17,    13,   209,    16,    17,    41,    42,    11,   215,   114,
      20,     9,     4,     5,     6,     7,     8,    41,    10,    17,
     101,    21,    32,    20,    41,    37,    71,    72,    41,   110,
      40,    16,    17,     4,     5,     6,     7,     8,    11,    10,
      23,   188,   189,    14,    15,   172,   173,    18,    19,    41,
      40,   132,    37,    43,   135,   202,   203,    20,    21,   140,
     141,   188,   189,    38,    40,   212,   147,    30,    43,   216,
     197,   198,    40,    44,    45,   202,   203,   139,    16,    17,
      16,    17,   209,   188,   189,   212,    40,   132,   215,   216,
      41,    42,   137,   138,   175,   140,   141,   202,   203,    16,
      17,    37,   147,    41,    41,    42,    37,   212,     5,    41,
      42,   216,    37,   158,     4,     5,     6,     7,     8,    21,
      10,    10,     5,    20,    14,    15,    20,    40,    18,    19,
       4,     5,     6,     7,     8,    32,    10,    20,    35,    36,
      14,    15,    40,    40,    18,    19,    29,    37,    16,    32,
      33,    34,    35,    36,    44,    45,    40,    40,     4,     5,
       6,     7,     8,    40,    10,    40,    37,    41,    14,    15,
      44,    45,    18,    19,     4,     5,     6,     7,     8,    13,
      10,    13,    20,    37,    14,    15,    11,    11,    18,    19,
       5,    40,     6,     7,     8,    41,    10,    41,    44,    45,
       4,     5,     6,     7,     8,    20,    10,     5,    41,    11,
      41,    41,    41,    41,    44,    45,    11,    32,    33,    34,
      35,    36,    20,    41,    11,    40,     4,     5,     6,     7,
       8,    25,    10,     4,    32,    39,    11,    35,    36,    31,
      76,   193,    40,     4,     5,     6,     7,     8,    12,    10,
     130,   175,   140,    -1,    -1,    -1,    20,    21,    -1,    -1,
      24,    39,    26,    27,    28,    29,    12,    31,    -1,    33,
      34,    -1,    -1,    -1,    20,    21,    37,    -1,    24,    -1,
      26,    27,    28,    29,    12,    31,    -1,    33,    34,    -1,
      -1,    -1,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    12,    31,    -1,    33,    34,    -1,    -1,    -1,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    28,    29,
      12,    31,    -1,    33,    34,    -1,    -1,    -1,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    12,    31,
      -1,    33,    34,    -1,    -1,    -1,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    28,    29,    12,    31,    -1,    33,
      34,    -1,    -1,    -1,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    28,    29,    -1,    31,    -1,    33,    34,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      31,    -1,    33,    34,     4,     5,     6,     7,     8,    -1,
      10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    47,    55,    56,    57,    20,     0,    21,    48,
      49,    50,    57,    58,    20,    30,    51,    52,    53,    50,
      11,    13,    37,    38,    21,    23,    65,    53,    20,    50,
      53,    59,    60,    61,     5,    20,    32,    33,    34,    35,
      36,    40,    83,    88,    89,    40,    88,    20,    11,    40,
      12,    60,    88,    40,    37,    37,    88,    89,     4,     5,
       6,     7,     8,    10,    14,    15,    18,    19,    37,    44,
      45,    16,    17,    37,    88,    39,    40,    66,    21,    63,
      64,    87,    88,    89,    41,    41,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    13,    37,    63,    20,    24,    26,    27,    28,    29,
      31,    33,    34,    50,    67,    68,    69,    70,    71,    72,
      73,    78,    80,    82,    83,    84,    85,    86,    20,    41,
      42,    41,    42,    88,    41,    38,    43,    40,    40,    40,
      40,    40,    88,    12,    68,    69,    37,    13,    62,    64,
      88,    89,    37,    54,    88,    20,    89,    89,    50,    20,
      33,    34,    72,    85,    88,    89,    72,    88,    89,    37,
      88,    89,    11,    11,    39,    40,    41,    41,    89,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    67,    67,
      87,    74,    79,    37,    12,    12,    41,    11,    11,    20,
      70,    72,    67,    67,    41,    12,    12,    81,    75,    11,
      25,    76,    67,    77,    12,    11,    67,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    52,    52,    54,    53,
      55,    55,    56,    56,    58,    57,    59,    59,    60,    60,
      60,    62,    61,    63,    63,    63,    64,    66,    65,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    72,
      72,    74,    75,    73,    76,    77,    76,    79,    78,    81,
      80,    82,    82,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     0,     2,     1,     3,     6,     8,
       5,     5,     5,     5,     1,     0,     2,     1,     0,    10,
       1,     0,     2,     1,     0,     6,     2,     1,     1,     1,
       1,     0,     8,     1,     3,     0,     2,     0,     5,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     4,     1,     1,     1,     3,
       6,     0,     0,    10,     0,     0,     5,     0,     8,     0,
      11,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     2,     3,     1,     3,     1,     0,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* PROGRAM: class_section var_section func_section main_function  */
#line 60 "limbaj.y"
                                                               {
            if (errorCount == 0) 
            {
                cout << "The program is correct!" << endl;
                printSymbolTables();
            }
        }
#line 1380 "limbaj.tab.c"
    break;

  case 7: /* var_declaration: TYPE ID ';'  */
#line 78 "limbaj.y"
                              {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-1].string) << " (" << (yyvsp[-2].string) <<")\n";
                    currentSymTable->addVar((yyvsp[-2].string), (yyvsp[-1].string));
                }
#line 1389 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 83 "limbaj.y"
                {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-4].string) << " (" << (yyvsp[-5].string) << "[ tmp 5 ])\n";
                    vector<int> tmp = {0, 0, 0, 0, 0}; //example vector size 5
                    currentSymTable->addVar((yyvsp[-5].string), (yyvsp[-4].string), tmp);
                }
#line 1399 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 89 "limbaj.y"
                {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-6].string) << " (" << (yyvsp[-7].string) << "[ tmp 3 ]=tmp value 100)\n";
                    vector<int> tmp = {100, 100, 100}; // example vector size 3 = 100;
                    currentSymTable->addVar((yyvsp[-7].string), (yyvsp[-6].string), tmp);
                }
#line 1409 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 95 "limbaj.y"
                {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = tmp 101)\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), 101);
                }
#line 1418 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID ASSIGN boolean_expression ';'  */
#line 100 "limbaj.y"
                {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = tmp 1)\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), 1);
                }
#line 1427 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 105 "limbaj.y"
                {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = " << (yyvsp[-1].charval) << ")\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].charval));
                }
#line 1436 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 110 "limbaj.y"
                {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = " << (yyvsp[-1].string) << ")\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string));
                }
#line 1445 "limbaj.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 127 "limbaj.y"
    {
        cout << "  ("<<currentSymTable->getScope() << "): +func: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << ")\n";
        currentSymTable->addFunc((yyvsp[-4].string), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string));
    }
#line 1455 "limbaj.tab.c"
    break;

  case 19: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@1 BGIN statement_list END  */
#line 133 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1463 "limbaj.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 150 "limbaj.y"
    {
        cout << "Class " << (yyvsp[0].string) << " defined." << endl;
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string));
    }
#line 1473 "limbaj.tab.c"
    break;

  case 25: /* class_definition: CLASS ID $@2 BGIN class_body END  */
#line 158 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1481 "limbaj.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 175 "limbaj.y"
    {
        cout << "  ("<<currentSymTable->getScope() << "): +constructor: " << (yyvsp[-3].string) << "\n";
        currentSymTable->addFunc("constructor", (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string)); 
    }
#line 1491 "limbaj.tab.c"
    break;

  case 32: /* constructor_definition: ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 181 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1499 "limbaj.tab.c"
    break;

  case 37: /* $@4: %empty  */
#line 199 "limbaj.y"
    {
        cout << "Main function defined." << endl;
        currentSymTable->enterScope("main");
    }
#line 1508 "limbaj.tab.c"
    break;

  case 38: /* main_function: MAIN BGIN $@4 statement_list END  */
#line 204 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1516 "limbaj.tab.c"
    break;

  case 61: /* $@5: %empty  */
#line 248 "limbaj.y"
    {
        currentSymTable->enterScope("IF");
    }
#line 1524 "limbaj.tab.c"
    break;

  case 62: /* $@6: %empty  */
#line 252 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1532 "limbaj.tab.c"
    break;

  case 65: /* $@7: %empty  */
#line 261 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE");                
    }
#line 1540 "limbaj.tab.c"
    break;

  case 66: /* else_statement: ELSE $@7 BGIN statement_list END  */
#line 265 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1548 "limbaj.tab.c"
    break;

  case 67: /* $@8: %empty  */
#line 272 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE");
    }
#line 1556 "limbaj.tab.c"
    break;

  case 68: /* while_statement: WHILE '(' boolean_expression ')' $@8 BGIN statement_list END  */
#line 276 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1564 "limbaj.tab.c"
    break;

  case 69: /* $@9: %empty  */
#line 283 "limbaj.y"
    {
        currentSymTable->enterScope("FOR");
    }
#line 1572 "limbaj.tab.c"
    break;

  case 70: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@9 BGIN statement_list END  */
#line 287 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1580 "limbaj.tab.c"
    break;

  case 89: /* expression: expression '+' expression  */
#line 324 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1588 "limbaj.tab.c"
    break;

  case 90: /* expression: expression '-' expression  */
#line 327 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1596 "limbaj.tab.c"
    break;

  case 91: /* expression: expression '*' expression  */
#line 330 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1604 "limbaj.tab.c"
    break;

  case 92: /* expression: expression '/' expression  */
#line 333 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1612 "limbaj.tab.c"
    break;

  case 93: /* expression: expression '%' expression  */
#line 336 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1620 "limbaj.tab.c"
    break;

  case 94: /* expression: expression '^' expression  */
#line 339 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1628 "limbaj.tab.c"
    break;

  case 95: /* expression: '-' expression  */
#line 342 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 1636 "limbaj.tab.c"
    break;

  case 96: /* expression: '(' expression ')'  */
#line 345 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 1644 "limbaj.tab.c"
    break;

  case 97: /* expression: ID  */
#line 348 "limbaj.y"
                {
               (yyval.node) = new ASTNode((yyvsp[0].string), true);
           }
#line 1652 "limbaj.tab.c"
    break;

  case 98: /* expression: NR  */
#line 351 "limbaj.y"
                {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 1660 "limbaj.tab.c"
    break;

  case 99: /* expression: function_call  */
#line 354 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 1668 "limbaj.tab.c"
    break;

  case 100: /* boolean_expression: TRUE  */
#line 359 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true);
                   }
#line 1676 "limbaj.tab.c"
    break;

  case 101: /* boolean_expression: FALSE  */
#line 362 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false);
                   }
#line 1684 "limbaj.tab.c"
    break;

  case 102: /* boolean_expression: '(' boolean_expression ')'  */
#line 365 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 1692 "limbaj.tab.c"
    break;

  case 103: /* boolean_expression: expression '>' expression  */
#line 368 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1700 "limbaj.tab.c"
    break;

  case 104: /* boolean_expression: expression '<' expression  */
#line 371 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1708 "limbaj.tab.c"
    break;

  case 105: /* boolean_expression: expression GE expression  */
#line 374 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1716 "limbaj.tab.c"
    break;

  case 106: /* boolean_expression: expression LE expression  */
#line 377 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1724 "limbaj.tab.c"
    break;

  case 107: /* boolean_expression: expression EQ expression  */
#line 380 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1732 "limbaj.tab.c"
    break;

  case 108: /* boolean_expression: expression NEQ expression  */
#line 383 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1740 "limbaj.tab.c"
    break;

  case 109: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 386 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1748 "limbaj.tab.c"
    break;

  case 110: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 389 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1756 "limbaj.tab.c"
    break;


#line 1760 "limbaj.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 397 "limbaj.y"

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

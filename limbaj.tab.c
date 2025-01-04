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

#line 94 "limbaj.tab.c"

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
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '*'  */
  YYSYMBOL_6_ = 6,                         /* '/'  */
  YYSYMBOL_7_ = 7,                         /* '%'  */
  YYSYMBOL_8_ = 8,                         /* '^'  */
  YYSYMBOL_9_ = 9,                         /* '='  */
  YYSYMBOL_BGIN = 10,                      /* BGIN  */
  YYSYMBOL_END = 11,                       /* END  */
  YYSYMBOL_ASSIGN = 12,                    /* ASSIGN  */
  YYSYMBOL_EQ = 13,                        /* EQ  */
  YYSYMBOL_NEQ = 14,                       /* NEQ  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_LE = 17,                        /* LE  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_CLASS = 21,                     /* CLASS  */
  YYSYMBOL_MAIN = 22,                      /* MAIN  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_PRINT = 27,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 28,                    /* TYPEOF  */
  YYSYMBOL_FUNC = 29,                      /* FUNC  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_NR = 31,                        /* NR  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_STRING = 33,                    /* STRING  */
  YYSYMBOL_TRUE = 34,                      /* TRUE  */
  YYSYMBOL_FALSE = 35,                     /* FALSE  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* '['  */
  YYSYMBOL_38_ = 38,                       /* ']'  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '.'  */
  YYSYMBOL_43_ = 43,                       /* '>'  */
  YYSYMBOL_44_ = 44,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_PROGRAM = 46,                   /* PROGRAM  */
  YYSYMBOL_var_section = 47,               /* var_section  */
  YYSYMBOL_var_declarations = 48,          /* var_declarations  */
  YYSYMBOL_var_declaration = 49,           /* var_declaration  */
  YYSYMBOL_func_section = 50,              /* func_section  */
  YYSYMBOL_func_definitions = 51,          /* func_definitions  */
  YYSYMBOL_func_definition = 52,           /* func_definition  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_class_section = 54,             /* class_section  */
  YYSYMBOL_class_definitions = 55,         /* class_definitions  */
  YYSYMBOL_class_definition = 56,          /* class_definition  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_class_body = 58,                /* class_body  */
  YYSYMBOL_class_member = 59,              /* class_member  */
  YYSYMBOL_constructor_definition = 60,    /* constructor_definition  */
  YYSYMBOL_parameter_list = 61,            /* parameter_list  */
  YYSYMBOL_parameter = 62,                 /* parameter  */
  YYSYMBOL_main_function = 63,             /* main_function  */
  YYSYMBOL_statement_list = 64,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 65,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 66, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 67,                /* assignment  */
  YYSYMBOL_left_value = 68,                /* left_value  */
  YYSYMBOL_object_access = 69,             /* object_access  */
  YYSYMBOL_if_statement = 70,              /* if_statement  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_72_4 = 72,                      /* $@4  */
  YYSYMBOL_while_statement = 73,           /* while_statement  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_for_statement = 75,             /* for_statement  */
  YYSYMBOL_76_6 = 76,                      /* $@6  */
  YYSYMBOL_predefined_function_call = 77,  /* predefined_function_call  */
  YYSYMBOL_function_call = 78,             /* function_call  */
  YYSYMBOL_print_statement = 79,           /* print_statement  */
  YYSYMBOL_type_of_statement = 80,         /* type_of_statement  */
  YYSYMBOL_return_statement = 81,          /* return_statement  */
  YYSYMBOL_argument_list = 82,             /* argument_list  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_boolean_expression = 84         /* boolean_expression  */
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
#define YYLAST   476

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
       2,     2,     2,     2,     2,     2,     2,     7,     2,     2,
      39,    40,     5,     3,    41,     4,    42,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      44,     9,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     8,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    63,    64,    67,    68,    71,    75,    81,
      87,    92,    97,   102,   110,   111,   114,   115,   119,   118,
     130,   131,   134,   135,   139,   138,   149,   150,   153,   154,
     155,   158,   162,   163,   164,   167,   171,   175,   176,   177,
     178,   181,   182,   183,   184,   185,   188,   189,   190,   193,
     194,   197,   198,   199,   200,   201,   202,   203,   206,   207,
     211,   210,   218,   217,   227,   226,   236,   235,   243,   244,
     247,   250,   251,   252,   253,   254,   255,   258,   259,   260,
     263,   266,   267,   268,   269,   270,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297
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
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "'='", "BGIN", "END", "ASSIGN", "EQ", "NEQ", "AND",
  "OR", "LE", "GE", "ID", "TYPE", "CLASS", "MAIN", "IF", "ELSE", "WHILE",
  "FOR", "PRINT", "TYPEOF", "FUNC", "RETURN", "NR", "CHAR", "STRING",
  "TRUE", "FALSE", "';'", "'['", "']'", "'('", "')'", "','", "'.'", "'>'",
  "'<'", "$accept", "PROGRAM", "var_section", "var_declarations",
  "var_declaration", "func_section", "func_definitions", "func_definition",
  "$@1", "class_section", "class_definitions", "class_definition", "$@2",
  "class_body", "class_member", "constructor_definition", "parameter_list",
  "parameter", "main_function", "statement_list",
  "statement_with_semicolon", "statement_without_semicolon", "assignment",
  "left_value", "object_access", "if_statement", "$@3", "$@4",
  "while_statement", "$@5", "for_statement", "$@6",
  "predefined_function_call", "function_call", "print_statement",
  "type_of_statement", "return_statement", "argument_list", "expression",
  "boolean_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-133)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,     7,    31,    22,   -16,  -133,    34,  -133,    37,    24,
      22,  -133,  -133,    62,    11,    47,    52,    24,  -133,  -133,
      45,  -133,  -133,   118,  -133,  -133,   136,  -133,    -2,    67,
      80,  -133,  -133,    83,  -133,  -133,    -2,    66,  -133,    71,
      95,  -133,  -133,    85,  -133,   177,     0,    -2,    72,    74,
     443,   122,    61,  -133,  -133,   305,    85,  -133,  -133,   193,
      77,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,  -133,    -2,    -2,    85,    85,  -133,     6,     9,    83,
     226,   125,   110,   115,   121,   133,   135,    -2,  -133,  -133,
     314,   140,  -133,  -133,   146,   174,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,   179,    83,   152,   253,   189,
    -133,  -133,   305,   305,   218,   218,   218,   218,   347,   347,
     347,   347,   347,   347,   253,  -133,   215,    -2,  -133,   168,
      -2,   216,   197,    85,    85,   212,   270,   287,   347,  -133,
     210,  -133,  -133,    85,   443,  -133,  -133,    85,   324,   237,
      92,   223,    -2,   119,   137,   -12,   214,  -133,    -1,   224,
     229,   232,   233,   211,   172,   236,   235,   187,  -133,   253,
     189,   338,   253,   189,  -133,   443,  -133,    85,   277,   267,
     276,    85,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,   356,   182,  -133,   443,   443,    18,  -133,  -133,
     374,   392,   212,  -133,   263,  -133,   248,   280,  -133,  -133,
     282,   443,   443,   410,   428,  -133,  -133,  -133,  -133
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      21,     0,     0,     4,    20,    23,     0,     1,     0,    15,
       3,     6,    22,     0,     0,     0,     0,    14,    17,     5,
       0,    28,    29,     0,    27,    30,     0,     7,     0,     0,
       0,     2,    16,    34,    24,    26,     0,    94,    95,     0,
       0,    97,    98,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    25,    92,    85,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,    11,     0,     0,    34,
      51,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,     0,    40,    41,     0,    45,    46,    47,    48,    43,
      42,    68,    69,    44,    35,     0,     0,     0,    82,    84,
      93,    99,    86,    87,    88,    89,    90,    91,   104,   105,
     103,   102,   100,   101,     0,   106,   107,     0,     8,     0,
       0,     0,    53,     0,     0,     0,     0,     0,    80,    36,
       0,    39,    38,     0,     0,    33,    70,     0,     0,     0,
       0,    58,     0,     0,     0,    51,     0,    55,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    49,
      50,     0,    81,    83,     9,     0,    52,    85,     0,     0,
       0,     0,    71,    72,    75,    76,    73,    74,    79,    77,
      78,    31,     0,     0,    54,     0,     0,     0,    18,    59,
       0,     0,     0,    19,    60,    64,     0,     0,    61,    65,
       0,     0,     0,     0,     0,    62,    66,    63,    67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -133,    25,  -133,  -133,    10,  -133,  -133,
    -133,   289,  -133,  -133,   271,  -133,   220,   194,  -133,  -124,
     -86,   -35,  -132,  -133,  -129,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,   -50,  -133,   159,  -133,   130,    -4,   -25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    10,    21,    16,    17,    22,   203,     3,
       4,     5,    54,    23,    24,    25,    52,    53,    31,    90,
      91,    92,    93,    94,    95,    96,   208,   217,    97,   209,
      98,   218,    99,    44,   101,   102,   103,   107,   124,   109
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     100,    46,    36,   156,   140,     1,   157,   161,   165,    61,
      62,    63,    64,    65,    66,    74,    75,    37,    60,    18,
     171,   127,    45,    26,    48,   130,     6,    32,    11,    38,
     131,     7,    55,    74,    75,    19,    76,    47,    56,    59,
     100,   131,     8,    77,    13,   128,   110,    27,    28,   125,
     126,   192,   108,    15,   202,   141,    14,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    29,   122,   123,
     206,   200,   201,   157,    30,    61,    62,    63,    64,    65,
      66,    20,     8,   138,    33,   140,    49,   213,   214,    36,
      50,    15,    74,    75,   100,    61,    62,    63,    64,    65,
      66,   105,   106,    51,    37,    56,   140,    57,   153,   154,
      78,   164,   167,    79,   140,   140,    38,   111,   170,    41,
      42,   100,   173,   148,    43,   100,   150,   140,   140,    34,
     176,    58,   163,   166,    74,    75,   141,    20,     8,   169,
      36,   104,   100,   172,   132,   100,   100,    15,   178,   133,
     100,   100,    74,    75,   134,    37,   197,   141,   143,   179,
     135,   100,   100,   100,   100,   141,   141,    38,    39,    40,
      41,    42,   136,   108,   137,    43,   142,   180,   141,   141,
      61,    62,    63,    64,    65,    66,   -55,    74,    75,   144,
      67,    68,   146,   147,    69,    70,    61,    62,    63,    64,
      65,    66,    74,    75,    74,    75,    67,    68,   149,   106,
      69,    70,   187,    71,    61,    62,    63,    64,    65,    66,
      72,    73,   199,   147,    67,    68,    66,   190,    69,    70,
      74,   155,    81,   110,   152,   151,    72,    73,    61,    62,
      63,    64,    65,    66,    88,    89,   168,   175,    67,    68,
     181,   186,    69,    70,    72,    73,    61,    62,    63,    64,
      65,    66,   177,   130,   182,    56,    67,    68,   131,   183,
      69,    70,   184,   185,    36,   189,   188,   195,    72,    73,
      61,    62,    63,    64,    65,    66,   196,   207,   210,   158,
     211,    36,   212,    12,    35,   162,    72,    73,    86,   129,
     145,    38,   159,   160,    41,    42,   158,   193,     0,    43,
      63,    64,    65,    66,     0,   194,     0,     0,    38,     0,
       0,    41,    42,     0,     0,   139,    43,    61,    62,    63,
      64,    65,    66,    80,    81,     0,     0,    82,     0,    83,
      84,    85,    86,     0,    87,     0,    88,    89,     0,   191,
      61,    62,    63,    64,    65,    66,     0,    80,    81,     0,
     174,    82,     0,    83,    84,    85,    86,   198,    87,     0,
      88,    89,     0,     0,     0,    80,    81,     0,     0,    82,
       0,    83,    84,    85,    86,   204,    87,     0,    88,    89,
       0,     0,     0,    80,    81,     0,     0,    82,     0,    83,
      84,    85,    86,   205,    87,     0,    88,    89,     0,     0,
       0,    80,    81,     0,     0,    82,     0,    83,    84,    85,
      86,   215,    87,     0,    88,    89,     0,     0,     0,    80,
      81,     0,     0,    82,     0,    83,    84,    85,    86,   216,
      87,     0,    88,    89,     0,     0,     0,    80,    81,     0,
       0,    82,     0,    83,    84,    85,    86,     0,    87,     0,
      88,    89,    80,    81,     0,     0,    82,     0,    83,    84,
      85,    86,     0,    87,     0,    88,    89
};

static const yytype_int16 yycheck[] =
{
      50,    26,     4,   135,    90,    21,   135,   136,   137,     3,
       4,     5,     6,     7,     8,    15,    16,    19,    43,     9,
     144,    12,    26,    12,    28,    37,    19,    17,     3,    31,
      42,     0,    36,    15,    16,    10,    36,    39,    39,    43,
      90,    42,    20,    47,    10,    36,    40,    36,    37,    74,
      75,   175,    56,    29,    36,    90,    19,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    20,    72,    73,
     202,   195,   196,   202,    22,     3,     4,     5,     6,     7,
       8,    19,    20,    87,    39,   171,    19,   211,   212,     4,
      10,    29,    15,    16,   144,     3,     4,     5,     6,     7,
       8,    40,    41,    20,    19,    39,   192,    36,   133,   134,
      38,   136,   137,    39,   200,   201,    31,    40,   143,    34,
      35,   171,   147,   127,    39,   175,   130,   213,   214,    11,
      38,    36,   136,   137,    15,    16,   171,    19,    20,   143,
       4,    19,   192,   147,    19,   195,   196,    29,   152,    39,
     200,   201,    15,    16,    39,    19,   181,   192,    12,    40,
      39,   211,   212,   213,   214,   200,   201,    31,    32,    33,
      34,    35,    39,   177,    39,    39,    36,    40,   213,   214,
       3,     4,     5,     6,     7,     8,    12,    15,    16,    10,
      13,    14,    40,    41,    17,    18,     3,     4,     5,     6,
       7,     8,    15,    16,    15,    16,    13,    14,    40,    41,
      17,    18,    40,    36,     3,     4,     5,     6,     7,     8,
      43,    44,    40,    41,    13,    14,     8,    40,    17,    18,
      15,    19,    20,    40,    37,    19,    43,    44,     3,     4,
       5,     6,     7,     8,    32,    33,    36,    10,    13,    14,
      36,    40,    17,    18,    43,    44,     3,     4,     5,     6,
       7,     8,    39,    37,    40,    39,    13,    14,    42,    40,
      17,    18,    40,    40,     4,    40,    40,    10,    43,    44,
       3,     4,     5,     6,     7,     8,    10,    24,    40,    19,
      10,     4,    10,     4,    23,   136,    43,    44,    28,    79,
     106,    31,    32,    33,    34,    35,    19,   177,    -1,    39,
       5,     6,     7,     8,    -1,    38,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    -1,    11,    39,     3,     4,     5,
       6,     7,     8,    19,    20,    -1,    -1,    23,    -1,    25,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    11,
       3,     4,     5,     6,     7,     8,    -1,    19,    20,    -1,
      36,    23,    -1,    25,    26,    27,    28,    11,    30,    -1,
      32,    33,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,
      -1,    25,    26,    27,    28,    11,    30,    -1,    32,    33,
      -1,    -1,    -1,    19,    20,    -1,    -1,    23,    -1,    25,
      26,    27,    28,    11,    30,    -1,    32,    33,    -1,    -1,
      -1,    19,    20,    -1,    -1,    23,    -1,    25,    26,    27,
      28,    11,    30,    -1,    32,    33,    -1,    -1,    -1,    19,
      20,    -1,    -1,    23,    -1,    25,    26,    27,    28,    11,
      30,    -1,    32,    33,    -1,    -1,    -1,    19,    20,    -1,
      -1,    23,    -1,    25,    26,    27,    28,    -1,    30,    -1,
      32,    33,    19,    20,    -1,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    30,    -1,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    46,    54,    55,    56,    19,     0,    20,    47,
      48,    49,    56,    10,    19,    29,    50,    51,    52,    49,
      19,    49,    52,    58,    59,    60,    12,    36,    37,    20,
      22,    63,    52,    39,    11,    59,     4,    19,    31,    32,
      33,    34,    35,    39,    78,    83,    84,    39,    83,    19,
      10,    20,    61,    62,    57,    83,    39,    36,    36,    83,
      84,     3,     4,     5,     6,     7,     8,    13,    14,    17,
      18,    36,    43,    44,    15,    16,    36,    83,    38,    39,
      19,    20,    23,    25,    26,    27,    28,    30,    32,    33,
      64,    65,    66,    67,    68,    69,    70,    73,    75,    77,
      78,    79,    80,    81,    19,    40,    41,    82,    83,    84,
      40,    40,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    12,    36,    61,
      37,    42,    19,    39,    39,    39,    39,    39,    83,    11,
      65,    66,    36,    12,    10,    62,    40,    41,    83,    40,
      83,    19,    37,    84,    84,    19,    67,    69,    19,    32,
      33,    69,    80,    83,    84,    69,    83,    84,    36,    83,
      84,    64,    83,    84,    36,    10,    38,    39,    83,    40,
      40,    36,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    11,    64,    82,    38,    10,    10,    84,    11,    40,
      64,    64,    36,    53,    11,    11,    67,    24,    71,    74,
      40,    10,    10,    64,    64,    11,    11,    72,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    51,    53,    52,
      54,    54,    55,    55,    57,    56,    58,    58,    59,    59,
      59,    60,    61,    61,    61,    62,    63,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      71,    70,    72,    70,    74,    73,    76,    75,    77,    77,
      78,    79,    79,    79,    79,    79,    79,    80,    80,    80,
      81,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     0,     2,     1,     3,     6,     8,
       5,     5,     5,     5,     1,     0,     2,     1,     0,    10,
       1,     0,     2,     1,     0,     6,     2,     1,     1,     1,
       1,     7,     1,     3,     0,     2,     4,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     4,     2,     5,     1,     1,     1,     3,     6,
       0,     8,     0,    12,     0,     8,     0,    12,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     3,     1,     3,     1,     0,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3
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
#line 53 "limbaj.y"
                                                               {
            if (errorCount == 0) 
            {
                cout << "The program is correct!" << endl;
                printSymbolTables();
            }
        }
#line 1367 "limbaj.tab.c"
    break;

  case 7: /* var_declaration: TYPE ID ';'  */
#line 71 "limbaj.y"
                               {
                    cout << "Adding var: " << (yyvsp[-1].string) << " of type: " << (yyvsp[-2].string) <<endl;
                    currentSymTable->addVar((yyvsp[-2].string), (yyvsp[-1].string));
                }
#line 1376 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 76 "limbaj.y"
                {
                    cout << "Adding var: " << (yyvsp[-4].string) << " of type: " << (yyvsp[-5].string) <<endl;
                    vector<int> tmp = {0, 0, 0, 0, 0}; //example vector size 5
                    currentSymTable->addVar((yyvsp[-5].string), (yyvsp[-4].string), tmp);
                }
#line 1386 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 82 "limbaj.y"
                {
                    cout << "Adding var: " << (yyvsp[-6].string) << " of type: " << (yyvsp[-7].string) <<endl;
                    vector<int> tmp = {100, 100, 100}; // example vector size 3 = 100;
                    currentSymTable->addVar((yyvsp[-7].string), (yyvsp[-6].string), tmp);
                }
#line 1396 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 88 "limbaj.y"
                {
                    cout << "Adding var: " << (yyvsp[-3].string) << " of type: " << (yyvsp[-4].string) << " with TEMP TEST value: 101" <<endl;
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), 101);
                }
#line 1405 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID ASSIGN boolean_expression ';'  */
#line 93 "limbaj.y"
                {
                    cout << "Adding var: " << (yyvsp[-3].string) << " of type: " << (yyvsp[-4].string) << " with TEMP TEST value: 1" <<endl;
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), 1);
                }
#line 1414 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 98 "limbaj.y"
                {
                    cout << "Adding var: " << (yyvsp[-3].string) << " of type: " << (yyvsp[-4].string) << " with value: " << (yyvsp[-1].charval) <<endl;
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].charval));
                }
#line 1423 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 103 "limbaj.y"
                {
                    cout << "Adding var: " << (yyvsp[-3].string) << " of type: " << (yyvsp[-4].string) << " with value: " << (yyvsp[-1].string) <<endl;
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string));
                }
#line 1432 "limbaj.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 119 "limbaj.y"
                {
                    cout << "Function " << (yyvsp[-6].string) << " defined with return type: " << (yyvsp[-7].string) << endl;
                    currentSymTable->addFunc((yyvsp[-7].string), (yyvsp[-6].string));
                    currentSymTable->enterScope((yyvsp[-6].string));
                }
#line 1442 "limbaj.tab.c"
    break;

  case 19: /* func_definition: FUNC TYPE ID '(' parameter_list ')' BGIN statement_list END $@1  */
#line 124 "limbaj.y"
                {
                    currentSymTable->leaveScope();
                }
#line 1450 "limbaj.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 139 "limbaj.y"
                 {
                    cout << "Class " << (yyvsp[-3].string) << " defined." << endl;
                    currentSymTable->addClass((yyvsp[-3].string));
                    currentSymTable->enterScope((yyvsp[-3].string));
                 }
#line 1460 "limbaj.tab.c"
    break;

  case 25: /* class_definition: CLASS ID BGIN class_body END $@2  */
#line 144 "limbaj.y"
                 {
                    currentSymTable->leaveScope();
                 }
#line 1468 "limbaj.tab.c"
    break;

  case 60: /* $@3: %empty  */
#line 211 "limbaj.y"
             {
                currentSymTable->enterScope("IF");
             }
#line 1476 "limbaj.tab.c"
    break;

  case 61: /* if_statement: IF '(' boolean_expression ')' BGIN statement_list END $@3  */
#line 214 "limbaj.y"
             {
                currentSymTable->leaveScope();
             }
#line 1484 "limbaj.tab.c"
    break;

  case 62: /* $@4: %empty  */
#line 218 "limbaj.y"
             {
                currentSymTable->enterScope("IF-ELSE"); //aici probabil trb 2 scopuri separate pt if/else
             }
#line 1492 "limbaj.tab.c"
    break;

  case 63: /* if_statement: IF '(' boolean_expression ')' BGIN statement_list END ELSE BGIN statement_list END $@4  */
#line 221 "limbaj.y"
             {
                currentSymTable->leaveScope();
             }
#line 1500 "limbaj.tab.c"
    break;

  case 64: /* $@5: %empty  */
#line 227 "limbaj.y"
                {
                    currentSymTable->enterScope("WHILE");
                }
#line 1508 "limbaj.tab.c"
    break;

  case 65: /* while_statement: WHILE '(' boolean_expression ')' BGIN statement_list END $@5  */
#line 230 "limbaj.y"
                {
                    currentSymTable->leaveScope();
                }
#line 1516 "limbaj.tab.c"
    break;

  case 66: /* $@6: %empty  */
#line 236 "limbaj.y"
              {
                    currentSymTable->enterScope("FOR");
              }
#line 1524 "limbaj.tab.c"
    break;

  case 67: /* for_statement: FOR '(' assignment ';' boolean_expression ';' assignment ')' BGIN statement_list END $@6  */
#line 239 "limbaj.y"
              {
                    currentSymTable->leaveScope();
              }
#line 1532 "limbaj.tab.c"
    break;


#line 1536 "limbaj.tab.c"

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

#line 300 "limbaj.y"

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

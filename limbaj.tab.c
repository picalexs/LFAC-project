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

    #include "AST.h"
    #include <iostream>
    #include <vector>
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

#line 95 "limbaj.tab.c"

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
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_FLOAT = 33,                     /* FLOAT  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_STRING = 35,                    /* STRING  */
  YYSYMBOL_TRUE = 36,                      /* TRUE  */
  YYSYMBOL_FALSE = 37,                     /* FALSE  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '.'  */
  YYSYMBOL_45_ = 45,                       /* '>'  */
  YYSYMBOL_46_ = 46,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_PROGRAM = 48,                   /* PROGRAM  */
  YYSYMBOL_var_section = 49,               /* var_section  */
  YYSYMBOL_var_declarations = 50,          /* var_declarations  */
  YYSYMBOL_var_declaration = 51,           /* var_declaration  */
  YYSYMBOL_func_section = 52,              /* func_section  */
  YYSYMBOL_func_definitions = 53,          /* func_definitions  */
  YYSYMBOL_func_definition = 54,           /* func_definition  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_class_section = 56,             /* class_section  */
  YYSYMBOL_class_definitions = 57,         /* class_definitions  */
  YYSYMBOL_class_definition = 58,          /* class_definition  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_class_body = 60,                /* class_body  */
  YYSYMBOL_class_member = 61,              /* class_member  */
  YYSYMBOL_constructor_definition = 62,    /* constructor_definition  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_parameter_list = 64,            /* parameter_list  */
  YYSYMBOL_parameter = 65,                 /* parameter  */
  YYSYMBOL_main_function = 66,             /* main_function  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_statement_list = 68,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 69,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 70, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 71,                /* assignment  */
  YYSYMBOL_left_value = 72,                /* left_value  */
  YYSYMBOL_object_access = 73,             /* object_access  */
  YYSYMBOL_if_statement = 74,              /* if_statement  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_76_6 = 76,                      /* $@6  */
  YYSYMBOL_else_statement = 77,            /* else_statement  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_while_statement = 79,           /* while_statement  */
  YYSYMBOL_80_8 = 80,                      /* $@8  */
  YYSYMBOL_for_statement = 81,             /* for_statement  */
  YYSYMBOL_82_9 = 82,                      /* $@9  */
  YYSYMBOL_predefined_function_call = 83,  /* predefined_function_call  */
  YYSYMBOL_function_call = 84,             /* function_call  */
  YYSYMBOL_print_statement = 85,           /* print_statement  */
  YYSYMBOL_type_of_statement = 86,         /* type_of_statement  */
  YYSYMBOL_return_statement = 87,          /* return_statement  */
  YYSYMBOL_argument_list = 88,             /* argument_list  */
  YYSYMBOL_expression = 89,                /* expression  */
  YYSYMBOL_boolean_expression = 90         /* boolean_expression  */
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
#define YYLAST   463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      41,    42,     6,     4,    43,     5,    44,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      46,     3,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,    10,     2,     2,     2,     2,     2,
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
      32,    33,    34,    35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    68,    69,    72,    73,    76,    86,    98,
     110,   122,   134,   146,   160,   161,   164,   165,   170,   169,
     191,   192,   195,   196,   201,   200,   215,   216,   219,   220,
     221,   226,   225,   239,   240,   241,   244,   250,   249,   261,
     262,   263,   264,   268,   269,   270,   271,   272,   276,   277,
     278,   279,   282,   283,   286,   287,   288,   289,   290,   293,
     294,   299,   303,   298,   309,   312,   311,   323,   322,   334,
     333,   344,   345,   348,   351,   354,   357,   361,   365,   370,
     374,   378,   381,   384,   385,   386,   387,   388,   392,   395,
     398,   401,   404,   407,   410,   413,   416,   424,   427,   430,
     435,   438,   441,   444,   447,   450,   453,   456,   459,   462,
     465
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
  "ELSE", "WHILE", "FOR", "PRINT", "TYPEOF", "FUNC", "RETURN", "INT",
  "FLOAT", "CHAR", "STRING", "TRUE", "FALSE", "';'", "'['", "']'", "'('",
  "')'", "','", "'.'", "'>'", "'<'", "$accept", "PROGRAM", "var_section",
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

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    -3,    24,    15,   -12,  -139,  -139,  -139,    47,    41,
      15,  -139,  -139,    69,    -4,    61,    66,    41,  -139,  -139,
     137,   226,  -139,    96,    71,    94,  -139,  -139,    90,  -139,
    -139,   159,  -139,  -139,    96,   111,  -139,  -139,    72,    86,
    -139,  -139,   259,  -139,    58,    -1,    96,   247,   118,  -139,
     112,  -139,  -139,   125,   259,  -139,  -139,   158,     6,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,  -139,
      96,    96,   259,   259,  -139,   143,    -6,   112,   428,   166,
      32,  -139,    44,   220,    83,  -139,  -139,   134,   134,   125,
     125,   125,   125,   315,   315,   315,   315,   315,   315,   220,
    -139,   162,    96,  -139,   113,   175,   149,   155,   157,   171,
     174,    96,  -139,  -139,  -139,   306,   161,  -139,  -139,   207,
     210,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,   112,  -139,   259,   307,  -139,    96,   216,   259,   259,
      15,   236,   269,   315,  -139,   199,  -139,  -139,   259,   229,
    -139,   220,    83,  -139,   231,   276,   202,    11,    43,   259,
      17,   205,   208,   233,   187,    92,   234,   203,    97,  -139,
     220,    83,   428,   428,  -139,   259,  -139,  -139,    14,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,   326,   344,   140,
     267,   274,    35,  -139,  -139,  -139,   428,   428,   -25,   246,
    -139,   362,   380,  -139,  -139,  -139,   279,   219,   428,  -139,
    -139,   398,   282,  -139,   428,   416,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      21,     0,     0,     4,    20,    23,    24,     1,     0,    15,
       3,     6,    22,     0,     0,     0,     0,    14,    17,     5,
       0,     0,     7,     0,     0,     0,     2,    16,     0,    28,
      29,     0,    27,    30,     0,    96,    97,    98,     0,     0,
     100,   101,     0,    99,     0,     0,     0,     0,     0,    37,
      35,    25,    26,    94,    87,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,    11,     0,     0,    35,     0,     0,
       0,    33,     0,    84,    86,    95,   102,    88,    89,    90,
      91,    92,    93,   107,   108,   106,   105,   103,   104,     0,
     109,   110,     0,     8,     0,    54,     0,     0,     0,     0,
       0,     0,    57,    58,    48,     0,     0,    42,    43,     0,
      47,    49,    50,    51,    44,    45,    71,    72,    46,    36,
      31,     0,    73,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,    82,    38,     0,    41,    40,     0,     0,
      34,    83,    85,     9,     0,     0,    59,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      52,    53,     0,     0,    55,    87,    61,    67,     0,    74,
      75,    78,    76,    77,    81,    79,    80,     0,     0,     0,
       0,     0,     0,    32,    19,    60,     0,     0,    54,     0,
      56,     0,     0,    69,    62,    68,     0,    64,     0,    65,
      63,     0,     0,    70,     0,     0,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,    -2,  -139,  -139,     3,  -139,  -139,
    -139,   290,  -139,  -139,   266,  -139,  -139,   221,   168,  -139,
    -139,   -78,  -109,  -104,   115,  -139,  -138,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,   -27,  -139,  -139,
    -139,   128,   -21,   -16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    10,   114,    16,    17,    30,   154,     3,
       4,     5,    13,    31,    32,    33,   149,    80,    81,    26,
      78,   115,   116,   117,   118,   119,   120,   121,   190,   207,
     210,   212,   122,   191,   123,   206,   124,    43,   126,   127,
     128,    82,    99,    84
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    11,    47,   163,   166,    45,   145,   102,    19,    21,
       1,   146,    18,    53,   136,    72,    73,     6,    29,   137,
      27,    57,    72,    73,     7,    75,    58,    72,    73,    29,
      72,    73,   103,    83,    22,    23,     8,    74,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    86,    97,
      98,   125,   192,   176,   200,   198,   100,   101,    54,    72,
      73,   137,    59,    60,    61,    62,    63,    14,    64,   112,
     113,    15,    65,    66,   130,   131,    67,    68,   145,   145,
      20,   134,    24,   146,   146,   177,   132,   133,   125,    25,
     143,    48,   145,   145,   187,   188,    69,   146,   146,    72,
      73,    34,   145,    70,    71,    49,   145,   146,    72,    73,
      55,   146,   151,    72,    73,   155,    35,   152,   201,   202,
     164,   167,   157,   158,    56,   165,   168,   170,    36,    37,
     211,    50,   171,    79,   183,    64,   215,    46,   159,   186,
      61,    62,    63,   178,    64,   125,   125,    59,    60,    61,
      62,    63,    54,    64,    83,   135,   131,    28,     8,    77,
     125,   125,    59,    60,    61,    62,    63,    15,    64,   125,
     125,    51,    65,    66,   125,   125,    67,    68,    72,    28,
       8,   125,   195,   133,   125,    85,   129,   125,   125,    15,
     138,    59,    60,    61,    62,    63,   139,    64,   140,   147,
      85,    65,    66,    70,    71,    67,    68,    59,    60,    61,
      62,    63,   141,    64,   136,   142,    54,    65,    66,   137,
     148,    67,    68,   -56,    59,    60,    61,    62,    63,   182,
      64,    34,    70,    71,    65,    66,   156,   169,    67,    68,
     172,    34,   173,   175,   209,   185,    35,   179,    70,    71,
     180,    59,    60,    61,    62,    63,   160,    64,    36,    37,
      38,    39,    40,    41,    34,    70,    71,    42,    36,    37,
     161,   162,    40,    41,    34,   181,   184,    42,   196,    35,
      59,    60,    61,    62,    63,   197,    64,    76,   203,   160,
     208,    36,    37,   214,    12,    40,    41,    52,   104,   150,
      42,    36,    37,   189,     0,    40,    41,   199,     0,     0,
      42,    59,    60,    61,    62,    63,   174,    64,   144,    59,
      60,    61,    62,    63,     0,    64,   105,     8,     0,     0,
     106,     0,   107,   108,   109,   110,     0,   111,   193,     0,
     112,   113,     0,     0,     0,   153,   105,     8,     0,     0,
     106,     0,   107,   108,   109,   110,   194,   111,     0,     0,
     112,   113,     0,     0,   105,     8,     0,     0,   106,     0,
     107,   108,   109,   110,   204,   111,     0,     0,   112,   113,
       0,     0,   105,     8,     0,     0,   106,     0,   107,   108,
     109,   110,   205,   111,     0,     0,   112,   113,     0,     0,
     105,     8,     0,     0,   106,     0,   107,   108,   109,   110,
     213,   111,     0,     0,   112,   113,     0,     0,   105,     8,
       0,     0,   106,     0,   107,   108,   109,   110,   216,   111,
       0,     0,   112,   113,     0,     0,   105,     8,     0,     0,
     106,     0,   107,   108,   109,   110,     0,   111,   105,     8,
     112,   113,   106,     0,   107,   108,   109,   110,     0,   111,
       0,     0,   112,   113
};

static const yytype_int16 yycheck[] =
{
      21,     3,    23,   141,   142,    21,   115,    13,    10,    13,
      22,   115,     9,    34,    39,    16,    17,    20,    20,    44,
      17,    42,    16,    17,     0,    46,    42,    16,    17,    31,
      16,    17,    38,    54,    38,    39,    21,    38,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    42,    70,
      71,    78,    38,    42,   192,    20,    72,    73,    41,    16,
      17,    44,     4,     5,     6,     7,     8,    20,    10,    34,
      35,    30,    14,    15,    42,    43,    18,    19,   187,   188,
      11,   102,    21,   187,   188,    42,    42,    43,   115,    23,
     111,    20,   201,   202,   172,   173,    38,   201,   202,    16,
      17,     5,   211,    45,    46,    11,   215,   211,    16,    17,
      38,   215,   133,    16,    17,   136,    20,   133,   196,   197,
     141,   142,   138,   139,    38,   141,   142,   148,    32,    33,
     208,    41,   148,    21,    42,    10,   214,    41,   140,    42,
       6,     7,     8,   159,    10,   172,   173,     4,     5,     6,
       7,     8,    41,    10,   175,    42,    43,    20,    21,    41,
     187,   188,     4,     5,     6,     7,     8,    30,    10,   196,
     197,    12,    14,    15,   201,   202,    18,    19,    16,    20,
      21,   208,    42,    43,   211,    42,    20,   214,   215,    30,
      41,     4,     5,     6,     7,     8,    41,    10,    41,    38,
      42,    14,    15,    45,    46,    18,    19,     4,     5,     6,
       7,     8,    41,    10,    39,    41,    41,    14,    15,    44,
      13,    18,    19,    13,     4,     5,     6,     7,     8,    42,
      10,     5,    45,    46,    14,    15,    20,    38,    18,    19,
      11,     5,    11,    41,    25,    42,    20,    42,    45,    46,
      42,     4,     5,     6,     7,     8,    20,    10,    32,    33,
      34,    35,    36,    37,     5,    45,    46,    41,    32,    33,
      34,    35,    36,    37,     5,    42,    42,    41,    11,    20,
       4,     5,     6,     7,     8,    11,    10,    40,    42,    20,
      11,    32,    33,    11,     4,    36,    37,    31,    77,   131,
      41,    32,    33,   175,    -1,    36,    37,   192,    -1,    -1,
      41,     4,     5,     6,     7,     8,    40,    10,    12,     4,
       5,     6,     7,     8,    -1,    10,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    31,    12,    -1,
      34,    35,    -1,    -1,    -1,    38,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    28,    29,    12,    31,    -1,    -1,
      34,    35,    -1,    -1,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    28,    29,    12,    31,    -1,    -1,    34,    35,
      -1,    -1,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    12,    31,    -1,    -1,    34,    35,    -1,    -1,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    28,    29,
      12,    31,    -1,    -1,    34,    35,    -1,    -1,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    12,    31,
      -1,    -1,    34,    35,    -1,    -1,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    31,    20,    21,
      34,    35,    24,    -1,    26,    27,    28,    29,    -1,    31,
      -1,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    48,    56,    57,    58,    20,     0,    21,    49,
      50,    51,    58,    59,    20,    30,    52,    53,    54,    51,
      11,    13,    38,    39,    21,    23,    66,    54,    20,    51,
      54,    60,    61,    62,     5,    20,    32,    33,    34,    35,
      36,    37,    41,    84,    89,    90,    41,    89,    20,    11,
      41,    12,    61,    89,    41,    38,    38,    89,    90,     4,
       5,     6,     7,     8,    10,    14,    15,    18,    19,    38,
      45,    46,    16,    17,    38,    89,    40,    41,    67,    21,
      64,    65,    88,    89,    90,    42,    42,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    13,    38,    64,    20,    24,    26,    27,    28,
      29,    31,    34,    35,    51,    68,    69,    70,    71,    72,
      73,    74,    79,    81,    83,    84,    85,    86,    87,    20,
      42,    43,    42,    43,    89,    42,    39,    44,    41,    41,
      41,    41,    41,    89,    12,    69,    70,    38,    13,    63,
      65,    89,    90,    38,    55,    89,    20,    90,    90,    51,
      20,    34,    35,    73,    89,    90,    73,    89,    90,    38,
      89,    90,    11,    11,    40,    41,    42,    42,    90,    42,
      42,    42,    42,    42,    42,    42,    42,    68,    68,    88,
      75,    80,    38,    12,    12,    42,    11,    11,    20,    71,
      73,    68,    68,    42,    12,    12,    82,    76,    11,    25,
      77,    68,    78,    12,    11,    68,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    53,    55,    54,
      56,    56,    57,    57,    59,    58,    60,    60,    61,    61,
      61,    63,    62,    64,    64,    64,    65,    67,    66,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    73,
      73,    75,    76,    74,    77,    78,    77,    80,    79,    82,
      81,    83,    83,    84,    85,    85,    85,    85,    85,    86,
      86,    86,    87,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90
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
       4,     4,     2,     3,     1,     3,     1,     0,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
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
#line 58 "limbaj.y"
                                                               {
            if (errorCount == 0) 
            {
                cout << "The program is correct!" << endl;
                //printSymbolTables();
            }
        }
#line 1378 "limbaj.tab.c"
    break;

  case 7: /* var_declaration: TYPE ID ';'  */
#line 76 "limbaj.y"
                              {
                                    if (currentSymTable->isDefined((yyvsp[-1].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-1].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else {
                                        cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-1].string) << " (" << (yyvsp[-2].string) <<")\n";
                                        currentSymTable->addVar((yyvsp[-2].string), (yyvsp[-1].string));
                                        }
                }
#line 1393 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 87 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-4].string) << " (" << (yyvsp[-5].string) << "[ tmp 5 ])\n";
                    vector<int> tmp = {0, 0, 0, 0, 0}; //example vector size 5
                    currentSymTable->addVar((yyvsp[-5].string), (yyvsp[-4].string), tmp);
                    }
                }
#line 1409 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 99 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-6].string) << " (" << (yyvsp[-7].string) << "[ tmp 3 ]=tmp value 100)\n";
                    vector<int> tmp = {100, 100, 100}; // example vector size 3 = 100;
                    currentSymTable->addVar((yyvsp[-7].string), (yyvsp[-6].string), tmp);
                                    }
                }
#line 1425 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 111 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else 
                    {
                        cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = tmp 101)\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), 101);
                    }
                }
#line 1441 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID ASSIGN boolean_expression ';'  */
#line 123 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else 
                    {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = tmp 1)\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), 1);
                }
                }
#line 1457 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 135 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else
                    {
                        cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = " << (yyvsp[-1].charval) << ")\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].charval));
                    }
                }
#line 1473 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 147 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                                        errorCount++;
                                        }
                                    else {
                    cout << "  ("<<currentSymTable->getScope() << "): +var: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << " = " << (yyvsp[-1].string) << ")\n";
                    currentSymTable->addVar((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].string));
                                    }
                }
#line 1488 "limbaj.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 170 "limbaj.y"
    {
        if (currentSymTable->isDefined((yyvsp[-3].string))) 
        {
            cout << "Error: Function '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
            errorCount++;
        }
        else 
        {
        cout << "  ("<<currentSymTable->getScope() << "): +func: " << (yyvsp[-3].string) << " (" << (yyvsp[-4].string) << ")\n";
        currentSymTable->addFunc((yyvsp[-4].string), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string));
        }
    }
#line 1506 "limbaj.tab.c"
    break;

  case 19: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@1 BGIN statement_list END  */
#line 184 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1514 "limbaj.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 201 "limbaj.y"
    {
        cout << "Class " << (yyvsp[0].string) << " defined." << endl;
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string));
    }
#line 1524 "limbaj.tab.c"
    break;

  case 25: /* class_definition: CLASS ID $@2 BGIN class_body END  */
#line 209 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1532 "limbaj.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 226 "limbaj.y"
    {
        cout << "  ("<<currentSymTable->getScope() << "): +constructor: " << (yyvsp[-3].string) << "\n";
        currentSymTable->addFunc("constructor", (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string)); 
    }
#line 1542 "limbaj.tab.c"
    break;

  case 32: /* constructor_definition: ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 232 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1550 "limbaj.tab.c"
    break;

  case 37: /* $@4: %empty  */
#line 250 "limbaj.y"
    {
        cout << "Main function defined." << endl;
        currentSymTable->enterScope("main");
    }
#line 1559 "limbaj.tab.c"
    break;

  case 38: /* main_function: MAIN BGIN $@4 statement_list END  */
#line 255 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1567 "limbaj.tab.c"
    break;

  case 61: /* $@5: %empty  */
#line 299 "limbaj.y"
    {
        currentSymTable->enterScope("IF");
    }
#line 1575 "limbaj.tab.c"
    break;

  case 62: /* $@6: %empty  */
#line 303 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1583 "limbaj.tab.c"
    break;

  case 65: /* $@7: %empty  */
#line 312 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE");                
    }
#line 1591 "limbaj.tab.c"
    break;

  case 66: /* else_statement: ELSE $@7 BGIN statement_list END  */
#line 316 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1599 "limbaj.tab.c"
    break;

  case 67: /* $@8: %empty  */
#line 323 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE");
    }
#line 1607 "limbaj.tab.c"
    break;

  case 68: /* while_statement: WHILE '(' boolean_expression ')' $@8 BGIN statement_list END  */
#line 327 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1615 "limbaj.tab.c"
    break;

  case 69: /* $@9: %empty  */
#line 334 "limbaj.y"
    {
        currentSymTable->enterScope("FOR");
    }
#line 1623 "limbaj.tab.c"
    break;

  case 70: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@9 BGIN statement_list END  */
#line 338 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1631 "limbaj.tab.c"
    break;

  case 74: /* print_statement: PRINT '(' CHAR ')'  */
#line 351 "limbaj.y"
                                    {
                    cout << "Print: " << (yyvsp[-1].charval) << endl;
                }
#line 1639 "limbaj.tab.c"
    break;

  case 75: /* print_statement: PRINT '(' STRING ')'  */
#line 354 "limbaj.y"
                                      {
                    cout << "Print: " << (yyvsp[-1].string) << endl;
                }
#line 1647 "limbaj.tab.c"
    break;

  case 76: /* print_statement: PRINT '(' expression ')'  */
#line 357 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1656 "limbaj.tab.c"
    break;

  case 77: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 361 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1665 "limbaj.tab.c"
    break;

  case 78: /* print_statement: PRINT '(' object_access ')'  */
#line 365 "limbaj.y"
                                             {
                    cout<<"cccc\n";
                }
#line 1673 "limbaj.tab.c"
    break;

  case 79: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 370 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1682 "limbaj.tab.c"
    break;

  case 80: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 374 "limbaj.y"
                                                     {\
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1691 "limbaj.tab.c"
    break;

  case 88: /* expression: expression '+' expression  */
#line 392 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1699 "limbaj.tab.c"
    break;

  case 89: /* expression: expression '-' expression  */
#line 395 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1707 "limbaj.tab.c"
    break;

  case 90: /* expression: expression '*' expression  */
#line 398 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1715 "limbaj.tab.c"
    break;

  case 91: /* expression: expression '/' expression  */
#line 401 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1723 "limbaj.tab.c"
    break;

  case 92: /* expression: expression '%' expression  */
#line 404 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1731 "limbaj.tab.c"
    break;

  case 93: /* expression: expression '^' expression  */
#line 407 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1739 "limbaj.tab.c"
    break;

  case 94: /* expression: '-' expression  */
#line 410 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 1747 "limbaj.tab.c"
    break;

  case 95: /* expression: '(' expression ')'  */
#line 413 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 1755 "limbaj.tab.c"
    break;

  case 96: /* expression: ID  */
#line 416 "limbaj.y"
                {
                if (!currentSymTable->checkIdExists((yyvsp[0].string))) 
                {
                    cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined." << endl;
                    errorCount++;
                }
               (yyval.node) = new ASTNode((yyvsp[0].string), true);
           }
#line 1768 "limbaj.tab.c"
    break;

  case 97: /* expression: INT  */
#line 424 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 1776 "limbaj.tab.c"
    break;

  case 98: /* expression: FLOAT  */
#line 427 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 1784 "limbaj.tab.c"
    break;

  case 99: /* expression: function_call  */
#line 430 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 1792 "limbaj.tab.c"
    break;

  case 100: /* boolean_expression: TRUE  */
#line 435 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true);
                   }
#line 1800 "limbaj.tab.c"
    break;

  case 101: /* boolean_expression: FALSE  */
#line 438 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false);
                   }
#line 1808 "limbaj.tab.c"
    break;

  case 102: /* boolean_expression: '(' boolean_expression ')'  */
#line 441 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 1816 "limbaj.tab.c"
    break;

  case 103: /* boolean_expression: expression '>' expression  */
#line 444 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1824 "limbaj.tab.c"
    break;

  case 104: /* boolean_expression: expression '<' expression  */
#line 447 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1832 "limbaj.tab.c"
    break;

  case 105: /* boolean_expression: expression GE expression  */
#line 450 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1840 "limbaj.tab.c"
    break;

  case 106: /* boolean_expression: expression LE expression  */
#line 453 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1848 "limbaj.tab.c"
    break;

  case 107: /* boolean_expression: expression EQ expression  */
#line 456 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1856 "limbaj.tab.c"
    break;

  case 108: /* boolean_expression: expression NEQ expression  */
#line 459 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1864 "limbaj.tab.c"
    break;

  case 109: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 462 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1872 "limbaj.tab.c"
    break;

  case 110: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 465 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1880 "limbaj.tab.c"
    break;


#line 1884 "limbaj.tab.c"

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

#line 473 "limbaj.y"

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

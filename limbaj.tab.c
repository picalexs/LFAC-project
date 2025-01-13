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
    #include <cstring>
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
        globalSymTable.printAskedScopes(); //cele cerute
        globalSymTable.printAllScopes(); //toate
    }

#line 96 "limbaj.tab.c"

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
  YYSYMBOL_9_ = 9,                         /* '^'  */
  YYSYMBOL_UMINUS = 10,                    /* UMINUS  */
  YYSYMBOL_11_ = 11,                       /* '!'  */
  YYSYMBOL_12_ = 12,                       /* '>'  */
  YYSYMBOL_13_ = 13,                       /* '<'  */
  YYSYMBOL_14_ = 14,                       /* '('  */
  YYSYMBOL_15_ = 15,                       /* ')'  */
  YYSYMBOL_BGIN = 16,                      /* BGIN  */
  YYSYMBOL_END = 17,                       /* END  */
  YYSYMBOL_ASSIGN = 18,                    /* ASSIGN  */
  YYSYMBOL_EQ = 19,                        /* EQ  */
  YYSYMBOL_NEQ = 20,                       /* NEQ  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_LE = 23,                        /* LE  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_CLASS = 26,                     /* CLASS  */
  YYSYMBOL_MAIN = 27,                      /* MAIN  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_PRINT = 32,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 33,                    /* TYPEOF  */
  YYSYMBOL_FUNC = 34,                      /* FUNC  */
  YYSYMBOL_RETURN = 35,                    /* RETURN  */
  YYSYMBOL_TYPE = 36,                      /* TYPE  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_FLOAT = 38,                     /* FLOAT  */
  YYSYMBOL_CHAR = 39,                      /* CHAR  */
  YYSYMBOL_STRING = 40,                    /* STRING  */
  YYSYMBOL_TRUE = 41,                      /* TRUE  */
  YYSYMBOL_FALSE = 42,                     /* FALSE  */
  YYSYMBOL_BOOL = 43,                      /* BOOL  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_PROGRAM = 50,                   /* PROGRAM  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_var_section = 52,               /* var_section  */
  YYSYMBOL_var_declarations = 53,          /* var_declarations  */
  YYSYMBOL_var_declaration = 54,           /* var_declaration  */
  YYSYMBOL_func_section = 55,              /* func_section  */
  YYSYMBOL_func_definitions = 56,          /* func_definitions  */
  YYSYMBOL_func_definition = 57,           /* func_definition  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_method_definition = 59,         /* method_definition  */
  YYSYMBOL_60_3 = 60,                      /* $@3  */
  YYSYMBOL_class_section = 61,             /* class_section  */
  YYSYMBOL_class_definitions = 62,         /* class_definitions  */
  YYSYMBOL_class_definition = 63,          /* class_definition  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_class_body = 65,                /* class_body  */
  YYSYMBOL_class_member = 66,              /* class_member  */
  YYSYMBOL_constructor_definition = 67,    /* constructor_definition  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_parameter_list = 69,            /* parameter_list  */
  YYSYMBOL_parameter = 70,                 /* parameter  */
  YYSYMBOL_main_function = 71,             /* main_function  */
  YYSYMBOL_72_6 = 72,                      /* $@6  */
  YYSYMBOL_statement_list = 73,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 74,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 75, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 76,                /* assignment  */
  YYSYMBOL_left_value = 77,                /* left_value  */
  YYSYMBOL_object_access = 78,             /* object_access  */
  YYSYMBOL_if_statement = 79,              /* if_statement  */
  YYSYMBOL_80_7 = 80,                      /* $@7  */
  YYSYMBOL_81_8 = 81,                      /* $@8  */
  YYSYMBOL_else_statement = 82,            /* else_statement  */
  YYSYMBOL_83_9 = 83,                      /* $@9  */
  YYSYMBOL_while_statement = 84,           /* while_statement  */
  YYSYMBOL_85_10 = 85,                     /* $@10  */
  YYSYMBOL_for_statement = 86,             /* for_statement  */
  YYSYMBOL_87_11 = 87,                     /* $@11  */
  YYSYMBOL_predefined_function_call = 88,  /* predefined_function_call  */
  YYSYMBOL_function_call = 89,             /* function_call  */
  YYSYMBOL_print_statement = 90,           /* print_statement  */
  YYSYMBOL_type_of_statement = 91,         /* type_of_statement  */
  YYSYMBOL_return_statement = 92,          /* return_statement  */
  YYSYMBOL_argument_list = 93,             /* argument_list  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_boolean_expression = 95         /* boolean_expression  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   592

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  262

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
       2,     2,     2,    11,     2,     2,     2,     8,     2,     2,
      14,    15,     6,     4,    47,     5,    48,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      13,     3,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     9,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    65,    80,    81,    84,    85,    88,    98,
     118,   144,   157,   183,   199,   224,   249,   279,   308,   347,
     364,   389,   409,   434,   453,   475,   476,   479,   480,   485,
     484,   507,   506,   519,   520,   523,   524,   529,   528,   542,
     543,   546,   547,   548,   553,   552,   565,   566,   567,   570,
     576,   575,   586,   587,   588,   589,   593,   594,   595,   596,
     597,   601,   602,   603,   604,   607,   618,   628,   638,   651,
     659,   667,   672,   673,   678,   682,   677,   688,   691,   690,
     702,   701,   713,   712,   723,   724,   727,   736,   739,   742,
     769,   773,   779,   783,   787,   790,   795,   798,   799,   800,
     801,   802,   806,   809,   812,   815,   818,   821,   824,   827,
     830,   833,   836,   839,   844,   847,   850,   853,   856,   859,
     862,   865,   868,   871,   874,   877
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
  "'*'", "'/'", "'%'", "'^'", "UMINUS", "'!'", "'>'", "'<'", "'('", "')'",
  "BGIN", "END", "ASSIGN", "EQ", "NEQ", "AND", "OR", "LE", "GE", "ID",
  "CLASS", "MAIN", "IF", "ELSE", "WHILE", "FOR", "PRINT", "TYPEOF", "FUNC",
  "RETURN", "TYPE", "INT", "FLOAT", "CHAR", "STRING", "TRUE", "FALSE",
  "BOOL", "';'", "'['", "']'", "','", "'.'", "$accept", "PROGRAM", "$@1",
  "var_section", "var_declarations", "var_declaration", "func_section",
  "func_definitions", "func_definition", "$@2", "method_definition", "$@3",
  "class_section", "class_definitions", "class_definition", "$@4",
  "class_body", "class_member", "constructor_definition", "$@5",
  "parameter_list", "parameter", "main_function", "$@6", "statement_list",
  "statement_with_semicolon", "statement_without_semicolon", "assignment",
  "left_value", "object_access", "if_statement", "$@7", "$@8",
  "else_statement", "$@9", "while_statement", "$@10", "for_statement",
  "$@11", "predefined_function_call", "function_call", "print_statement",
  "type_of_statement", "return_statement", "argument_list", "expression",
  "boolean_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -204,     5,   -19,  -204,   -14,   -34,   -19,  -204,  -204,    -9,
      -7,   -12,   -34,  -204,  -204,    50,   185,    37,    48,    71,
     -12,  -204,  -204,   184,    76,  -204,   300,    10,   305,    93,
      60,  -204,  -204,   108,    87,  -204,  -204,   233,  -204,  -204,
     308,   308,     9,  -204,  -204,    81,   102,  -204,  -204,   123,
      -2,    23,   298,   298,    35,  -204,  -204,   541,   226,    40,
      34,   148,  -204,   170,   177,  -204,  -204,    49,  -204,   571,
     298,  -204,   186,  -204,  -204,   308,   308,   308,   308,   308,
     308,  -204,    41,    82,  -204,   478,   238,  -204,   308,   308,
     308,   308,   308,   308,   298,   298,  -204,   119,   189,   170,
     538,   187,    88,  -204,   196,  -204,   136,   541,    39,   201,
     399,   399,   210,   210,   210,   210,   327,  -204,   342,  -204,
    -204,   583,   583,   583,   583,   583,   583,  -204,   228,   298,
    -204,   298,  -204,   141,    44,   217,   237,   240,   242,   243,
     308,  -204,   338,   219,  -204,  -204,   250,   257,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,   170,   170,
    -204,   298,   298,    51,   134,   105,   188,   251,   267,  -204,
     308,   298,   298,   -34,   203,   241,   583,  -204,   252,  -204,
    -204,   260,   245,  -204,   153,   541,    39,   166,  -204,  -204,
    -204,  -204,  -204,  -204,   261,    66,   269,   329,   298,    63,
     272,   279,   499,   339,   289,   291,   520,   450,  -204,  -204,
    -204,   541,    39,   538,  -204,  -204,   538,  -204,  -204,  -204,
     271,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     358,   301,   367,   302,   310,   299,  -204,   538,  -204,   538,
     538,   -31,   313,  -204,   387,   396,   416,  -204,  -204,  -204,
    -204,   315,   319,   538,  -204,  -204,   425,   318,  -204,   538,
     445,  -204
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    34,     1,     0,     5,    33,    36,    37,     0,
       0,    26,     4,     7,    35,     0,     0,     0,     0,     0,
      25,    28,     6,     0,     0,     8,     0,     0,     0,     0,
       0,     3,    27,     0,     0,    41,    42,     0,    40,    43,
       0,     0,     0,   110,   111,     0,     0,   113,   112,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,    50,    48,     0,    38,    39,     0,   108,     0,
     101,    10,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     9,     0,     0,   125,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    48,
       0,     0,     0,    46,     0,   109,     0,    98,   100,    72,
     102,   103,   104,   105,   106,   107,     0,    14,     0,    13,
     116,   117,   118,   121,   122,   120,   119,   123,   124,     0,
      20,     0,    19,     0,    69,     0,     0,     0,     0,     0,
       0,    61,     0,     0,    55,    56,     0,    60,    62,    63,
      64,    57,    58,    84,    85,    59,    49,    44,     0,    48,
      86,     0,   101,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    96,    51,     0,    54,
      53,     0,     0,    47,     0,    97,    99,     0,    18,    16,
      17,    15,    22,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    68,
      67,    65,    66,     0,    31,    73,     0,    70,    74,    80,
       0,    89,    87,    88,    90,    91,    95,    94,    92,    93,
       0,     0,     0,     0,     0,     0,    45,     0,    30,     0,
       0,    69,     0,    71,     0,     0,     0,    82,    32,    75,
      81,     0,    77,     0,    78,    76,     0,     0,    83,     0,
       0,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -204,  -204,    -4,  -204,  -204,   309,  -204,
    -204,  -204,  -204,  -204,   343,  -204,  -204,   316,  -204,  -204,
     -95,   199,  -204,  -204,  -203,  -139,  -136,   124,  -204,   -80,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     -55,  -204,  -204,  -204,   200,   146,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    11,    12,   141,    19,    20,    21,   194,
      36,   231,     5,     6,     7,    15,    37,    38,    39,   182,
     102,   103,    31,   100,   142,   143,   144,   145,   146,    47,
     148,   233,   252,   255,   257,   149,   234,   150,   251,   151,
      48,   153,   154,   155,   106,    57,   108
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    13,     9,   178,   133,     3,   179,     4,    22,    10,
     230,     8,    70,   232,   170,    40,    16,    72,    17,    35,
     147,    52,    18,    70,    53,    84,    86,    75,    76,    77,
      78,    79,    80,    35,   244,    54,   245,   246,    75,    76,
      77,    78,    79,    80,    82,   152,    72,    43,    44,    70,
     256,    55,    56,    71,    70,    27,   260,    72,    70,   116,
      94,    95,   147,    70,   184,    70,    23,   127,   128,    83,
      75,    76,    77,    78,    79,    80,    62,    70,   221,    87,
      98,    40,    28,    72,    29,   117,    97,   152,    72,   170,
      41,   178,    72,   178,   179,   188,   179,    72,    30,    72,
     118,    42,   167,   157,   168,   178,   178,   178,   179,   179,
     179,    72,   217,    43,    44,    45,    46,   178,    61,    70,
     179,   178,    63,    64,   179,    73,   119,    75,    76,    77,
      78,    79,    80,   147,   186,   158,   147,   129,    75,    76,
      77,    78,    79,    80,   196,   197,    74,   203,   207,   190,
     147,   160,   147,    72,   212,   243,   169,   147,   152,   147,
     147,   152,    99,   130,   147,   147,   147,    81,   214,   198,
      49,   220,    51,   147,    60,   152,   147,   152,   189,   147,
     147,   215,   152,   161,   152,   152,    68,    69,   158,   152,
     152,   152,    75,    76,    77,    78,    79,    80,   152,    85,
     158,   152,   104,    24,   152,   152,   101,   131,    40,    33,
     159,   109,   156,   161,    52,   162,   107,    53,    34,    80,
       9,   110,   111,   112,   113,   114,   115,    10,   199,    25,
      26,   171,   191,   132,   121,   122,   123,   124,   125,   126,
      43,    44,   200,   201,    55,    56,    40,    94,    95,    94,
      65,   172,    52,   120,   173,    53,   174,   175,    33,    94,
      95,   213,   164,   180,   166,    40,    67,    34,   181,     9,
      96,    52,    94,    95,    53,   -71,    10,   216,    43,    44,
     204,   205,    55,    56,   218,    67,   176,   222,    94,    95,
      94,    95,    94,    95,   223,   192,   208,    43,    44,   209,
     210,    55,    56,    40,   226,    40,   227,   185,   107,    52,
      40,   193,    53,    40,    41,   235,   195,   237,   239,    41,
     202,   206,    41,    67,   241,    50,   240,   211,   247,    32,
      59,   253,    40,    67,   259,    43,    44,    43,    44,    55,
      56,    41,    43,    44,   219,    43,    44,    40,   254,    14,
      94,    95,   163,    66,   225,   177,    41,   183,     0,   242,
      94,    95,   187,   134,    43,    44,   135,   165,   136,   137,
     138,   139,     0,   140,     9,   236,     0,     0,     0,    43,
      44,    10,     0,   134,   238,     0,   135,     0,   136,   137,
     138,   139,   134,   140,     9,   135,     0,   136,   137,   138,
     139,    10,   140,     9,   248,    77,    78,    79,    80,     0,
      10,     0,   134,   249,     0,   135,     0,   136,   137,   138,
     139,   134,   140,     9,   135,     0,   136,   137,   138,   139,
      10,   140,     9,   250,     0,     0,     0,     0,     0,    10,
       0,   134,   258,     0,   135,     0,   136,   137,   138,   139,
     134,   140,     9,   135,     0,   136,   137,   138,   139,    10,
     140,     9,   261,     0,     0,   229,     0,     0,    10,     0,
     134,    94,    95,   135,     0,   136,   137,   138,   139,     0,
     140,     9,    75,    76,    77,    78,    79,    80,    10,     0,
      88,    89,     0,   105,     0,     0,     0,    90,    91,     0,
       0,    92,    93,    75,    76,    77,    78,    79,    80,     0,
       0,    88,    89,     0,   224,     0,     0,     0,    90,    91,
       0,     0,    92,    93,    75,    76,    77,    78,    79,    80,
       0,     0,    88,    89,     0,   228,     0,     0,     0,    90,
      91,     0,     0,    92,    93,    75,    76,    77,    78,    79,
      80,     0,     0,    88,    89,     0,     0,     0,     0,     0,
      90,    91,     0,   134,    92,    93,   135,     0,   136,   137,
     138,   139,     0,   140,     9,    75,    76,    77,    78,    79,
      80,    10,     0,     0,     0,     0,   105,    75,    76,    77,
      78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      27,     5,    36,   142,    99,     0,   142,    26,    12,    43,
     213,    25,    14,   216,    45,     5,    25,    48,    25,    23,
     100,    11,    34,    14,    14,    52,    53,     4,     5,     6,
       7,     8,     9,    37,   237,    25,   239,   240,     4,     5,
       6,     7,     8,     9,    46,   100,    48,    37,    38,    14,
     253,    41,    42,    44,    14,    18,   259,    48,    14,    18,
      21,    22,   142,    14,   159,    14,    16,    94,    95,    46,
       4,     5,     6,     7,     8,     9,    16,    14,    15,    44,
      46,     5,    45,    48,    36,    44,    46,   142,    48,    45,
      14,   230,    48,   232,   230,    44,   232,    48,    27,    48,
      18,    25,   129,    15,   131,   244,   245,   246,   244,   245,
     246,    48,    46,    37,    38,    39,    40,   256,    25,    14,
     256,   260,    14,    36,   260,    44,    44,     4,     5,     6,
       7,     8,     9,   213,   161,    47,   216,    18,     4,     5,
       6,     7,     8,     9,   171,   172,    44,   174,   175,    44,
     230,    15,   232,    48,   181,   235,    15,   237,   213,   239,
     240,   216,    14,    44,   244,   245,   246,    44,    15,   173,
      24,   198,    26,   253,    28,   230,   256,   232,    44,   259,
     260,    15,   237,    47,   239,   240,    40,    41,    47,   244,
     245,   246,     4,     5,     6,     7,     8,     9,   253,    53,
      47,   256,    25,    18,   259,   260,    36,    18,     5,    25,
      14,    25,    25,    47,    11,    14,    70,    14,    34,     9,
      36,    75,    76,    77,    78,    79,    80,    43,    25,    44,
      45,    14,    44,    44,    88,    89,    90,    91,    92,    93,
      37,    38,    39,    40,    41,    42,     5,    21,    22,    21,
      17,    14,    11,    15,    14,    14,    14,    14,    25,    21,
      22,    16,   116,    44,   118,     5,    25,    34,    18,    36,
      44,    11,    21,    22,    14,    18,    43,    16,    37,    38,
      39,    40,    41,    42,    15,    25,   140,    15,    21,    22,
      21,    22,    21,    22,    15,    44,    44,    37,    38,    39,
      40,    41,    42,     5,    15,     5,    15,   161,   162,    11,
       5,    44,    14,     5,    14,    44,   170,    16,    16,    14,
     174,   175,    14,    25,    25,    25,    16,   181,    15,    20,
      25,    16,     5,    25,    16,    37,    38,    37,    38,    41,
      42,    14,    37,    38,    15,    37,    38,     5,    29,     6,
      21,    22,    25,    37,    15,    17,    14,   158,    -1,   235,
      21,    22,   162,    25,    37,    38,    28,    25,    30,    31,
      32,    33,    -1,    35,    36,    17,    -1,    -1,    -1,    37,
      38,    43,    -1,    25,    17,    -1,    28,    -1,    30,    31,
      32,    33,    25,    35,    36,    28,    -1,    30,    31,    32,
      33,    43,    35,    36,    17,     6,     7,     8,     9,    -1,
      43,    -1,    25,    17,    -1,    28,    -1,    30,    31,    32,
      33,    25,    35,    36,    28,    -1,    30,    31,    32,    33,
      43,    35,    36,    17,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    25,    17,    -1,    28,    -1,    30,    31,    32,    33,
      25,    35,    36,    28,    -1,    30,    31,    32,    33,    43,
      35,    36,    17,    -1,    -1,    15,    -1,    -1,    43,    -1,
      25,    21,    22,    28,    -1,    30,    31,    32,    33,    -1,
      35,    36,     4,     5,     6,     7,     8,     9,    43,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,
      -1,    23,    24,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,    24,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    19,
      20,    -1,    -1,    23,    24,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    25,    23,    24,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,     4,     5,     6,     7,     8,
       9,    43,    -1,    -1,    -1,    -1,    15,     4,     5,     6,
       7,     8,     9
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     0,    26,    61,    62,    63,    25,    36,
      43,    52,    53,    54,    63,    64,    25,    25,    34,    55,
      56,    57,    54,    16,    18,    44,    45,    18,    45,    36,
      27,    71,    57,    25,    34,    54,    59,    65,    66,    67,
       5,    14,    25,    37,    38,    39,    40,    78,    89,    94,
      25,    94,    11,    14,    25,    41,    42,    94,    95,    25,
      94,    25,    16,    14,    36,    17,    66,    25,    94,    94,
      14,    44,    48,    44,    44,     4,     5,     6,     7,     8,
       9,    44,    46,    46,    95,    94,    95,    44,    12,    13,
      19,    20,    23,    24,    21,    22,    44,    46,    46,    14,
      72,    36,    69,    70,    25,    15,    93,    94,    95,    25,
      94,    94,    94,    94,    94,    94,    18,    44,    18,    44,
      15,    94,    94,    94,    94,    94,    94,    95,    95,    18,
      44,    18,    44,    69,    25,    28,    30,    31,    32,    33,
      35,    54,    73,    74,    75,    76,    77,    78,    79,    84,
      86,    88,    89,    90,    91,    92,    25,    15,    47,    14,
      15,    47,    14,    25,    94,    25,    94,    95,    95,    15,
      45,    14,    14,    14,    14,    14,    94,    17,    74,    75,
      44,    18,    68,    70,    69,    94,    95,    93,    44,    44,
      44,    44,    44,    44,    58,    94,    95,    95,    54,    25,
      39,    40,    94,    95,    39,    40,    94,    95,    44,    39,
      40,    94,    95,    16,    15,    15,    16,    46,    15,    15,
      95,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      73,    60,    73,    80,    85,    44,    17,    16,    17,    16,
      16,    25,    76,    78,    73,    73,    73,    15,    17,    17,
      17,    87,    81,    16,    29,    82,    73,    83,    17,    16,
      73,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    51,    50,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    56,    58,
      57,    60,    59,    61,    61,    62,    62,    64,    63,    65,
      65,    66,    66,    66,    68,    67,    69,    69,    69,    70,
      72,    71,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    80,    81,    79,    82,    83,    82,
      85,    84,    87,    86,    88,    88,    89,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    92,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     5,
       5,     5,     5,     6,     6,     8,     8,     8,     8,     6,
       6,     8,     8,     5,     5,     1,     0,     2,     1,     0,
      10,     0,    10,     1,     0,     2,     1,     0,     6,     2,
       1,     1,     1,     1,     0,     8,     1,     3,     0,     2,
       0,     5,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       4,     1,     3,     6,     0,     0,    10,     0,     0,     5,
       0,     8,     0,    11,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     3,     1,     3,
       1,     0,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2
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
  case 2: /* $@1: %empty  */
#line 65 "limbaj.y"
          {
            currentSymTable->enterScope("Global", "global");
        }
#line 1424 "limbaj.tab.c"
    break;

  case 3: /* PROGRAM: $@1 class_section var_section func_section main_function  */
#line 69 "limbaj.y"
        {
            if (errorCount == 0) 
            {
                currentSymTable->leaveScope();
                cout << "The program is correct!" << endl;
                printSymbolTables();
            }
        }
#line 1437 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID ';'  */
#line 89 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-1].string))) {
                        cout << "Error: Variable '" << (yyvsp[-1].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        currentSymTable->addVar((yyvsp[-2].valtype), (yyvsp[-1].string));
                    }
                }
#line 1451 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 99 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();
                        if(strcmp((yyvsp[-4].valtype),rtype.c_str())!=0 || strcmp((yyvsp[-4].valtype),"bool")==0 || rtype=="bool")
                        {
                            cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got "<<rtype<<endl;
                            errorCount++;
                        }
                        else{
                            currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), result);
                        }
                    }
                }
#line 1475 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: TYPE ID ASSIGN ID ';'  */
#line 118 "limbaj.y"
                                       {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-1].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-1].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-1].string));
                            string rtype=currentSymTable->getType((yyvsp[-1].string));
                            if(strcmp((yyvsp[-4].valtype),rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else{
                                currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), result);
                            }
                        }
                    }
                }
#line 1506 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: BOOL ID ASSIGN boolean_expression ';'  */
#line 145 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();
                        currentSymTable->addVar("bool", (yyvsp[-3].string), result);
                    }
                }
#line 1523 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: BOOL ID ASSIGN ID ';'  */
#line 157 "limbaj.y"
                                       {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-1].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-1].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-1].string));
                            string rtype=currentSymTable->getType((yyvsp[-1].string));
                            if(strcmp("bool",rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected bool but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else{
                                currentSymTable->addVar("bool", (yyvsp[-3].string), result);
                            }
                        }
                    }
                }
#line 1554 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 184 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                        if((yyvsp[-2].node)->getType() == "int")
                        {
                            currentSymTable->addVector((yyvsp[-5].valtype), (yyvsp[-4].string), get<int>(result));
                        }else{
                            cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        }
                    }
                }
#line 1574 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: TYPE ID '[' ID ']' ';'  */
#line 199 "limbaj.y"
                                        {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-2].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-2].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-2].string));
                            string rtype=currentSymTable->getType((yyvsp[-2].string));
                            if(strcmp("int",rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected int but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else{
                                currentSymTable->addVector((yyvsp[-5].valtype), (yyvsp[-4].string), get<int>(result));
                            }
                        }
                    }
                }
#line 1604 "limbaj.tab.c"
    break;

  case 15: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 225 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                        auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();

                        if(strcmp((yyvsp[-7].valtype),rtype.c_str())!=0 || strcmp((yyvsp[-7].valtype),"bool")==0 || rtype=="bool")
                        {
                            cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got "<<rtype<<endl;
                            errorCount++;
                        }
                        else if((yyvsp[-4].node)->getType() != "int")
                        {
                            cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                            errorCount++;
                        }else{
                            currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>(result), valueResult);
                        }
                    }
                }
#line 1633 "limbaj.tab.c"
    break;

  case 16: /* var_declaration: TYPE ID '[' ID ']' ASSIGN expression ';'  */
#line 250 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-4].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-4].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-4].string));
                            string rtype=currentSymTable->getType((yyvsp[-4].string));
                            if(strcmp((yyvsp[-7].valtype),rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else if(strcmp((yyvsp[-4].string),"int")!=0)
                            {
                                cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                                errorCount++;
                            }else{
                                currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>(result), (yyvsp[-1].node)->evaluate(*currentSymTable));
                            }
                        }
                    }
                }
#line 1667 "limbaj.tab.c"
    break;

  case 17: /* var_declaration: TYPE ID '[' expression ']' ASSIGN ID ';'  */
#line 279 "limbaj.y"
                                                          {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-1].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-1].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-1].string));
                            string rtype=currentSymTable->getType((yyvsp[-1].string));
                            if(strcmp((yyvsp[-7].valtype),rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else if((yyvsp[-4].node)->getType() != "int")
                            {
                                cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                                errorCount++;
                            }else{
                                currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>((yyvsp[-4].node)->evaluate(*currentSymTable)), result);
                            }
                        }
                    }
                }
#line 1701 "limbaj.tab.c"
    break;

  case 18: /* var_declaration: TYPE ID '[' ID ']' ASSIGN ID ';'  */
#line 308 "limbaj.y"
                                                  {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-4].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-4].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else if (!currentSymTable->isUsedBeforeDefined((yyvsp[-1].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-1].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-4].string));
                            string rtype=currentSymTable->getType((yyvsp[-4].string));
                            if(strcmp("int",rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected int but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else
                            {
                                auto valueResult=currentSymTable->getValue((yyvsp[-1].string));
                                string vtype=currentSymTable->getType((yyvsp[-1].string));
                                if(strcmp((yyvsp[-7].valtype),vtype.c_str())!=0)
                                {
                                    cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got "<<vtype<<endl;
                                    errorCount++;
                                }
                                else{
                                    currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>(result), valueResult);
                                }
                            }
                        }
                    }
                }
#line 1745 "limbaj.tab.c"
    break;

  case 19: /* var_declaration: BOOL ID '[' expression ']' ';'  */
#line 347 "limbaj.y"
                                                {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-2].node)->getType();
                        if((yyvsp[-2].node)->getType() != "int")
                        {
                            cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                            errorCount++;
                        }else{
                            currentSymTable->addVector("bool", (yyvsp[-4].string), get<int>(result));
                        }
                    }
                }
#line 1767 "limbaj.tab.c"
    break;

  case 20: /* var_declaration: BOOL ID '[' ID ']' ';'  */
#line 364 "limbaj.y"
                                        {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-2].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-2].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-2].string));
                            string rtype=currentSymTable->getType((yyvsp[-2].string));
                            if(strcmp("int",rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected int but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else{
                                currentSymTable->addVector("bool", (yyvsp[-4].string), get<int>(result));
                            }
                        }
                    }
                }
#line 1797 "limbaj.tab.c"
    break;

  case 21: /* var_declaration: BOOL ID '[' expression ']' ASSIGN boolean_expression ';'  */
#line 390 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                        auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();

                        if((yyvsp[-4].node)->getType() != "int")
                        {
                            cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                            errorCount++;
                        }else{
                            currentSymTable->addVector("bool", (yyvsp[-6].string), get<int>(result), valueResult);
                        }
                    }
                }
#line 1821 "limbaj.tab.c"
    break;

  case 22: /* var_declaration: BOOL ID '[' ID ']' ASSIGN boolean_expression ';'  */
#line 409 "limbaj.y"
                                                                  {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        if (!currentSymTable->isUsedBeforeDefined((yyvsp[-4].string), "variable")) {
                            cout << "Error: Variable '" << (yyvsp[-4].string) << "' used before being defined." << endl;
                            errorCount++;
                        }
                        else
                        {
                            auto result=currentSymTable->getValue((yyvsp[-4].string));
                            string rtype=currentSymTable->getType((yyvsp[-4].string));
                            if(strcmp("int",rtype.c_str())!=0)
                            {
                                cout<<"Error: Assignment type mismatch. Expected int but got "<<rtype<<endl;
                                errorCount++;
                            }
                            else{
                                currentSymTable->addVector("bool", (yyvsp[-6].string), get<int>(result), (yyvsp[-1].node)->evaluate(*currentSymTable));
                            }
                        }
                    }
                }
#line 1851 "limbaj.tab.c"
    break;

  case 23: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 435 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else
                    {
                        if(strcmp((yyvsp[-4].valtype),"char")!=0)
                        {
                            cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got char"<<endl;
                            errorCount++;
                        }
                        else
                        {
                            currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].charval));
                        }
                    }
                }
#line 1874 "limbaj.tab.c"
    break;

  case 24: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 454 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else
                    {
                        if(strcmp((yyvsp[-4].valtype),"string")!=0)
                        {
                            cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got string"<<endl;
                            errorCount++;
                        }
                        else
                        {
                            currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].string));
                        }
                    }
                }
#line 1897 "limbaj.tab.c"
    break;

  case 29: /* $@2: %empty  */
#line 485 "limbaj.y"
    {
        if (currentSymTable->isDefined((yyvsp[-3].string))) 
        {
            cout << "Error: Function '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
            errorCount++;
        }
        else 
        {
             /* currentSymTable->addFunc($2, $3); */
            currentSymTable->enterScope((yyvsp[-3].string),"function");
        }
    }
#line 1914 "limbaj.tab.c"
    break;

  case 30: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 498 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1922 "limbaj.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 507 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1931 "limbaj.tab.c"
    break;

  case 32: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 512 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1939 "limbaj.tab.c"
    break;

  case 37: /* $@4: %empty  */
#line 529 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1948 "limbaj.tab.c"
    break;

  case 38: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 536 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1956 "limbaj.tab.c"
    break;

  case 44: /* $@5: %empty  */
#line 553 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1965 "limbaj.tab.c"
    break;

  case 45: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 558 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1973 "limbaj.tab.c"
    break;

  case 50: /* $@6: %empty  */
#line 576 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1981 "limbaj.tab.c"
    break;

  case 51: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 580 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1989 "limbaj.tab.c"
    break;

  case 65: /* assignment: left_value ASSIGN expression  */
#line 607 "limbaj.y"
                                          {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                (yyvsp[0].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype=(yyvsp[0].node)->getType();
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    errorCount++;
                }
           }
#line 2005 "limbaj.tab.c"
    break;

  case 66: /* assignment: left_value ASSIGN boolean_expression  */
#line 618 "limbaj.y"
                                                  {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype="bool";
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    errorCount++;
                }
           }
#line 2020 "limbaj.tab.c"
    break;

  case 67: /* assignment: left_value ASSIGN STRING  */
#line 628 "limbaj.y"
                                      {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype="string";
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    errorCount++;
                }
           }
#line 2035 "limbaj.tab.c"
    break;

  case 68: /* assignment: left_value ASSIGN CHAR  */
#line 638 "limbaj.y"
                                    {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype="char";
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    errorCount++;
                }
           }
#line 2050 "limbaj.tab.c"
    break;

  case 69: /* left_value: ID  */
#line 652 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[0].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined." << endl;
                    errorCount++;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string), true);
            }
#line 2062 "limbaj.tab.c"
    break;

  case 70: /* left_value: ID '[' expression ']'  */
#line 660 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[-3].string) << "' used before being defined." << endl;
                    errorCount++;
                }
                (yyval.node)=new ASTNode((yyvsp[-3].string), true);
            }
#line 2074 "limbaj.tab.c"
    break;

  case 71: /* left_value: object_access  */
#line 667 "limbaj.y"
                           {
                (yyval.node)=nullptr;
            }
#line 2082 "limbaj.tab.c"
    break;

  case 74: /* $@7: %empty  */
#line 678 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 2090 "limbaj.tab.c"
    break;

  case 75: /* $@8: %empty  */
#line 682 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2098 "limbaj.tab.c"
    break;

  case 78: /* $@9: %empty  */
#line 691 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 2106 "limbaj.tab.c"
    break;

  case 79: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 695 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2114 "limbaj.tab.c"
    break;

  case 80: /* $@10: %empty  */
#line 702 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 2122 "limbaj.tab.c"
    break;

  case 81: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 706 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2130 "limbaj.tab.c"
    break;

  case 82: /* $@11: %empty  */
#line 713 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 2138 "limbaj.tab.c"
    break;

  case 83: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 717 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2146 "limbaj.tab.c"
    break;

  case 86: /* function_call: ID '(' argument_list ')'  */
#line 728 "limbaj.y"
              {
                  if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "function")) {
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called before being defined." << endl;
                      errorCount++;
                  }
              }
#line 2157 "limbaj.tab.c"
    break;

  case 87: /* print_statement: PRINT '(' CHAR ')'  */
#line 736 "limbaj.y"
                                    {
                    cout << "Print (char): " << (yyvsp[-1].charval) << endl;
                }
#line 2165 "limbaj.tab.c"
    break;

  case 88: /* print_statement: PRINT '(' STRING ')'  */
#line 739 "limbaj.y"
                                      {
                    cout << "Print (string): " << (yyvsp[-1].string) << endl;
                }
#line 2173 "limbaj.tab.c"
    break;

  case 89: /* print_statement: PRINT '(' ID ')'  */
#line 742 "limbaj.y"
                                  {
                    if (!currentSymTable->isUsedBeforeDefined((yyvsp[-1].string), "variable")) {
                        cout << "Error: Variable '" << (yyvsp[-1].string) << "' used before being defined." << endl;
                        errorCount++;
                    }
                    else
                    {
                        auto result=currentSymTable->getValue((yyvsp[-1].string));
                        string rtype=currentSymTable->getType((yyvsp[-1].string));
                        if(holds_alternative<int>(result))
                        {
                            cout << "Print (int): " << get<int>(result) << endl;
                        }else if(holds_alternative<float>(result))
                        {
                            cout << "Print (float): " << get<float>(result) << endl;
                        }else if(holds_alternative<char>(result))
                        {
                            cout << "Print (char): " << get<char>(result) << endl;
                        }else if(holds_alternative<string>(result))
                        {
                            cout << "Print (string): " << get<string>(result) << endl;
                        }else if(holds_alternative<bool>(result))
                        {
                            cout << "Print (bool): " << get<bool>(result) << endl;
                        }
                    }
                }
#line 2205 "limbaj.tab.c"
    break;

  case 90: /* print_statement: PRINT '(' expression ')'  */
#line 769 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 2214 "limbaj.tab.c"
    break;

  case 91: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 773 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 2223 "limbaj.tab.c"
    break;

  case 92: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 779 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 2232 "limbaj.tab.c"
    break;

  case 93: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 783 "limbaj.y"
                                                     {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 2241 "limbaj.tab.c"
    break;

  case 94: /* type_of_statement: TYPEOF '(' STRING ')'  */
#line 787 "limbaj.y"
                                         {
                        cout<<"TypeOf: string"<<endl;
                  }
#line 2249 "limbaj.tab.c"
    break;

  case 95: /* type_of_statement: TYPEOF '(' CHAR ')'  */
#line 790 "limbaj.y"
                                       {
                        cout<<"TypeOf: char"<<endl;
                  }
#line 2257 "limbaj.tab.c"
    break;

  case 102: /* expression: expression '+' expression  */
#line 806 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2265 "limbaj.tab.c"
    break;

  case 103: /* expression: expression '-' expression  */
#line 809 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2273 "limbaj.tab.c"
    break;

  case 104: /* expression: expression '*' expression  */
#line 812 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2281 "limbaj.tab.c"
    break;

  case 105: /* expression: expression '/' expression  */
#line 815 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2289 "limbaj.tab.c"
    break;

  case 106: /* expression: expression '%' expression  */
#line 818 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2297 "limbaj.tab.c"
    break;

  case 107: /* expression: expression '^' expression  */
#line 821 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2305 "limbaj.tab.c"
    break;

  case 108: /* expression: '-' expression  */
#line 824 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 2313 "limbaj.tab.c"
    break;

  case 109: /* expression: '(' expression ')'  */
#line 827 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 2321 "limbaj.tab.c"
    break;

  case 110: /* expression: INT  */
#line 830 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 2329 "limbaj.tab.c"
    break;

  case 111: /* expression: FLOAT  */
#line 833 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 2337 "limbaj.tab.c"
    break;

  case 112: /* expression: function_call  */
#line 836 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2345 "limbaj.tab.c"
    break;

  case 113: /* expression: object_access  */
#line 839 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2353 "limbaj.tab.c"
    break;

  case 114: /* boolean_expression: TRUE  */
#line 844 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true, true);
                   }
#line 2361 "limbaj.tab.c"
    break;

  case 115: /* boolean_expression: FALSE  */
#line 847 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false, false);
                   }
#line 2369 "limbaj.tab.c"
    break;

  case 116: /* boolean_expression: '(' boolean_expression ')'  */
#line 850 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 2377 "limbaj.tab.c"
    break;

  case 117: /* boolean_expression: expression '>' expression  */
#line 853 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2385 "limbaj.tab.c"
    break;

  case 118: /* boolean_expression: expression '<' expression  */
#line 856 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2393 "limbaj.tab.c"
    break;

  case 119: /* boolean_expression: expression GE expression  */
#line 859 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2401 "limbaj.tab.c"
    break;

  case 120: /* boolean_expression: expression LE expression  */
#line 862 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2409 "limbaj.tab.c"
    break;

  case 121: /* boolean_expression: expression EQ expression  */
#line 865 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2417 "limbaj.tab.c"
    break;

  case 122: /* boolean_expression: expression NEQ expression  */
#line 868 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2425 "limbaj.tab.c"
    break;

  case 123: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 871 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2433 "limbaj.tab.c"
    break;

  case 124: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 874 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2441 "limbaj.tab.c"
    break;

  case 125: /* boolean_expression: '!' boolean_expression  */
#line 877 "limbaj.y"
                                            {
                      (yyval.node) = new ASTNode(ASTNode::Operator::NOT, (yyvsp[0].node), nullptr);
                   }
#line 2449 "limbaj.tab.c"
    break;


#line 2453 "limbaj.tab.c"

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

#line 882 "limbaj.y"

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

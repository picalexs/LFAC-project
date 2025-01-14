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
  YYSYMBOL_16_ = 16,                       /* ';'  */
  YYSYMBOL_BGIN = 17,                      /* BGIN  */
  YYSYMBOL_END = 18,                       /* END  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_NEQ = 21,                       /* NEQ  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_ID = 26,                        /* ID  */
  YYSYMBOL_BOOLID = 27,                    /* BOOLID  */
  YYSYMBOL_CLASS = 28,                     /* CLASS  */
  YYSYMBOL_MAIN = 29,                      /* MAIN  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_PRINT = 34,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 35,                    /* TYPEOF  */
  YYSYMBOL_FUNC = 36,                      /* FUNC  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_TYPE = 38,                      /* TYPE  */
  YYSYMBOL_INT = 39,                       /* INT  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_CHAR = 41,                      /* CHAR  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_TRUE = 43,                      /* TRUE  */
  YYSYMBOL_FALSE = 44,                     /* FALSE  */
  YYSYMBOL_BOOL = 45,                      /* BOOL  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_var_section = 53,               /* var_section  */
  YYSYMBOL_var_declarations = 54,          /* var_declarations  */
  YYSYMBOL_var_declaration = 55,           /* var_declaration  */
  YYSYMBOL_func_section = 56,              /* func_section  */
  YYSYMBOL_func_definitions = 57,          /* func_definitions  */
  YYSYMBOL_func_definition = 58,           /* func_definition  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_method_definition = 60,         /* method_definition  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_class_section = 62,             /* class_section  */
  YYSYMBOL_class_definitions = 63,         /* class_definitions  */
  YYSYMBOL_class_definition = 64,          /* class_definition  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_class_body = 66,                /* class_body  */
  YYSYMBOL_class_member = 67,              /* class_member  */
  YYSYMBOL_constructor_definition = 68,    /* constructor_definition  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_parameter_list = 70,            /* parameter_list  */
  YYSYMBOL_parameter = 71,                 /* parameter  */
  YYSYMBOL_main_function = 72,             /* main_function  */
  YYSYMBOL_73_6 = 73,                      /* $@6  */
  YYSYMBOL_statement_list = 74,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 75,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 76, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 77,                /* assignment  */
  YYSYMBOL_left_value = 78,                /* left_value  */
  YYSYMBOL_object_access = 79,             /* object_access  */
  YYSYMBOL_if_statement = 80,              /* if_statement  */
  YYSYMBOL_81_7 = 81,                      /* $@7  */
  YYSYMBOL_82_8 = 82,                      /* $@8  */
  YYSYMBOL_else_statement = 83,            /* else_statement  */
  YYSYMBOL_84_9 = 84,                      /* $@9  */
  YYSYMBOL_while_statement = 85,           /* while_statement  */
  YYSYMBOL_86_10 = 86,                     /* $@10  */
  YYSYMBOL_for_statement = 87,             /* for_statement  */
  YYSYMBOL_88_11 = 88,                     /* $@11  */
  YYSYMBOL_predefined_function_call = 89,  /* predefined_function_call  */
  YYSYMBOL_function_call = 90,             /* function_call  */
  YYSYMBOL_print_statement = 91,           /* print_statement  */
  YYSYMBOL_type_of_statement = 92,         /* type_of_statement  */
  YYSYMBOL_return_statement = 93,          /* return_statement  */
  YYSYMBOL_argument_list = 94,             /* argument_list  */
  YYSYMBOL_expression = 95,                /* expression  */
  YYSYMBOL_boolean_expression = 96         /* boolean_expression  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   617

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      14,    15,     6,     4,    48,     5,    49,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    16,
      13,     3,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     9,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    67,    82,    83,    86,    87,    90,   100,
     120,   133,   149,   174,   191,   211,   230,   252,   253,   256,
     257,   262,   261,   284,   283,   296,   297,   300,   301,   306,
     305,   319,   320,   323,   324,   325,   330,   329,   342,   343,
     344,   347,   353,   352,   363,   364,   365,   366,   370,   371,
     372,   373,   374,   378,   379,   380,   381,   384,   395,   405,
     415,   428,   436,   444,   451,   459,   464,   465,   470,   474,
     469,   480,   483,   482,   494,   493,   505,   504,   515,   516,
     519,   528,   531,   534,   538,   544,   548,   552,   555,   560,
     563,   564,   565,   566,   567,   571,   574,   577,   580,   583,
     586,   589,   592,   595,   605,   608,   611,   614,   619,   622,
     625,   628,   638,   641,   644,   647,   650,   653,   656,   659,
     662
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
  "';'", "BGIN", "END", "ASSIGN", "EQ", "NEQ", "AND", "OR", "LE", "GE",
  "ID", "BOOLID", "CLASS", "MAIN", "IF", "ELSE", "WHILE", "FOR", "PRINT",
  "TYPEOF", "FUNC", "RETURN", "TYPE", "INT", "FLOAT", "CHAR", "STRING",
  "TRUE", "FALSE", "BOOL", "'['", "']'", "','", "'.'", "$accept",
  "PROGRAM", "$@1", "var_section", "var_declarations", "var_declaration",
  "func_section", "func_definitions", "func_definition", "$@2",
  "method_definition", "$@3", "class_section", "class_definitions",
  "class_definition", "$@4", "class_body", "class_member",
  "constructor_definition", "$@5", "parameter_list", "parameter",
  "main_function", "$@6", "statement_list", "statement_with_semicolon",
  "statement_without_semicolon", "assignment", "left_value",
  "object_access", "if_statement", "$@7", "$@8", "else_statement", "$@9",
  "while_statement", "$@10", "for_statement", "$@11",
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

#define YYPACT_NINF (-194)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -194,    30,    25,  -194,    44,    89,    25,  -194,  -194,    53,
      70,    51,    89,  -194,  -194,    78,    65,   -13,    80,    87,
      51,  -194,  -194,    83,  -194,     2,    66,   284,    66,   100,
     121,  -194,  -194,   131,   102,  -194,  -194,    86,  -194,  -194,
      66,    66,    -2,  -194,  -194,   149,   150,  -194,  -194,   583,
      31,   284,   284,  -194,  -194,  -194,   552,   170,    60,   146,
    -194,   136,   151,  -194,  -194,  -194,   602,   284,   155,  -194,
    -194,    66,    66,    66,    66,    66,    66,  -194,     3,  -194,
     486,    -5,    66,    66,    66,    66,    66,    66,  -194,   284,
     284,    77,   136,   548,   161,     6,  -194,   162,  -194,     8,
     552,   107,   177,   215,   215,   185,   185,   185,   185,  -194,
      66,  -194,   562,   562,   562,   562,   562,   562,  -194,   176,
    -194,   284,    11,    -1,   153,   198,   199,   200,   211,   219,
      66,   124,  -194,   304,   220,  -194,  -194,   218,   223,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   136,
     136,  -194,   284,   284,   596,   179,  -194,    66,    66,   284,
     284,    89,   229,   236,   562,  -194,  -194,   228,  -194,  -194,
     277,   232,  -194,    12,   552,   107,    34,  -194,  -194,   234,
      68,   201,    35,   126,   284,   230,   231,   508,   140,   237,
     238,   530,   156,  -194,  -194,  -194,   552,   107,   548,  -194,
    -194,   548,  -194,  -194,  -194,  -194,   216,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,   325,   240,   346,   241,   242,
      63,  -194,   548,  -194,   548,   548,   -35,   209,   245,  -194,
     367,   388,   409,  -194,  -194,  -194,  -194,   244,   233,   548,
    -194,  -194,   430,   248,  -194,   548,   451,  -194
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    26,     1,     0,     5,    25,    28,    29,     0,
       0,    18,     4,     7,    27,     0,     0,     0,     0,     0,
      17,    20,     6,     0,     8,     0,     0,     0,     0,     0,
       0,     3,    19,     0,     0,    33,    34,     0,    32,    35,
       0,     0,   103,   104,   105,     0,     0,   107,   106,     0,
       0,     0,     0,   111,   108,   109,     0,     0,     0,     0,
      42,    40,     0,    30,    31,   101,     0,    94,     0,    15,
      16,     0,     0,     0,     0,     0,     0,     9,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    40,     0,     0,     0,    38,     0,   102,     0,
      91,    93,    66,    95,    96,    97,    98,    99,   100,    11,
       0,   110,   112,   113,   116,   117,   115,   114,   118,   119,
      13,     0,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    47,    48,     0,    52,    54,
      55,    56,    49,    50,    78,    79,    51,    41,    36,     0,
      40,    80,     0,    94,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    89,    63,    43,     0,    46,    45,
       0,     0,    39,     0,    90,    92,     0,    12,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    60,    59,    57,    58,     0,    23,
      67,     0,    62,    64,    68,    74,     0,    81,    82,    83,
      84,    88,    87,    85,    86,     0,     0,     0,     0,     0,
       0,    37,     0,    22,     0,     0,    61,     0,     0,    65,
       0,     0,     0,    76,    24,    69,    75,     0,    71,     0,
      72,    70,     0,     0,    77,     0,     0,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,  -194,    -3,  -194,  -194,   246,  -194,
    -194,  -194,  -194,  -194,   261,  -194,  -194,   247,  -194,  -194,
     -89,   132,  -194,  -194,  -193,  -132,  -129,    67,  -194,   -78,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
     -42,  -194,  -194,  -194,   130,   144,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,   132,    19,    20,    21,   179,
      36,   216,     5,     6,     7,    15,    37,    38,    39,   171,
      95,    96,    31,    93,   133,   134,   135,   136,   137,    47,
     139,   218,   238,   241,   243,   140,   219,   141,   237,   142,
      48,   144,   145,   146,    99,    56,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   167,    13,   122,   168,   215,    27,    40,   217,    22,
     111,   157,    67,    67,    68,   138,    41,    89,    90,   109,
      35,   148,   110,   151,    79,    81,   156,   199,    42,   230,
       3,   231,   232,    28,    35,    71,    72,    73,    74,    75,
      76,    43,    44,    45,    46,   157,   242,    68,    68,   200,
     204,   143,   246,     4,   149,   138,   152,    89,    90,   149,
     149,   173,   118,   119,    71,    72,    73,    74,    75,    76,
       8,    40,    71,    72,    73,    74,    75,    76,    78,    16,
      41,    24,   152,   167,    25,   167,   168,    18,   168,   226,
     124,   143,    42,   120,   155,    23,   121,    17,   167,   167,
     167,   168,   168,   168,    63,    43,    44,    91,   227,    33,
     167,    26,    33,   168,   167,   202,    30,   168,    29,    34,
     138,     9,    34,   138,     9,   175,    59,     9,    10,    89,
      90,    10,   182,   183,    10,   188,   192,   138,    60,   138,
      62,   205,   229,   197,   138,    61,   138,   138,    89,    90,
     165,    17,   138,   138,   138,   210,   143,   206,   184,   143,
      92,   138,    89,    90,   138,    69,    70,   138,   138,    49,
      50,   214,    58,   143,    94,   143,   150,    97,    89,    90,
     143,   102,   143,   143,    65,    66,    88,   147,   143,   143,
     143,   153,    89,    90,    76,   178,    80,   143,    89,   158,
     143,    89,    90,   143,   143,    71,    72,    73,    74,    75,
      76,   100,   159,   160,   161,   103,   104,   105,   106,   107,
     108,    73,    74,    75,    76,   162,   112,   113,   114,   115,
     116,   117,   220,   163,    40,   165,   169,   170,    89,    90,
      51,    40,   -65,    52,   193,   207,   208,    51,   203,   198,
      52,   201,   211,   212,   154,    42,    53,   222,   224,   225,
     233,   239,    42,    53,   240,   245,    32,    14,    43,    44,
     185,   186,    54,    55,   164,    43,    44,   189,   190,    54,
      55,   172,    40,   176,    64,     0,     0,   228,    51,    40,
       0,    52,     0,     0,     0,    51,   174,   100,    52,     0,
       0,   180,   181,    42,    53,     0,   187,   191,     0,     0,
      42,    53,     0,     0,   196,     0,    43,    44,   194,   195,
      54,    55,   166,    43,    44,     0,     0,    54,    55,     0,
     123,   124,     0,     0,   125,     0,   126,   127,   128,   129,
       0,   130,     9,   221,     0,     0,     0,     0,     0,   131,
       0,   123,   124,     0,     0,   125,     0,   126,   127,   128,
     129,     0,   130,     9,   223,     0,     0,     0,     0,     0,
     131,     0,   123,   124,     0,     0,   125,     0,   126,   127,
     128,   129,     0,   130,     9,   234,     0,     0,     0,     0,
       0,   131,     0,   123,   124,     0,     0,   125,     0,   126,
     127,   128,   129,     0,   130,     9,   235,     0,     0,     0,
       0,     0,   131,     0,   123,   124,     0,     0,   125,     0,
     126,   127,   128,   129,     0,   130,     9,   236,     0,     0,
       0,     0,     0,   131,     0,   123,   124,     0,     0,   125,
       0,   126,   127,   128,   129,     0,   130,     9,   244,     0,
       0,     0,     0,     0,   131,     0,   123,   124,     0,     0,
     125,     0,   126,   127,   128,   129,     0,   130,     9,   247,
       0,     0,     0,     0,     0,   131,     0,   123,   124,     0,
       0,   125,     0,   126,   127,   128,   129,     0,   130,     9,
      71,    72,    73,    74,    75,    76,   131,     0,    82,    83,
       0,    98,     0,     0,     0,     0,    84,    85,     0,     0,
      86,    87,    71,    72,    73,    74,    75,    76,     0,     0,
      82,    83,     0,   209,     0,     0,     0,     0,    84,    85,
       0,     0,    86,    87,    71,    72,    73,    74,    75,    76,
       0,     0,    82,    83,     0,   213,     0,     0,     0,     0,
      84,    85,     0,     0,    86,    87,    71,    72,    73,    74,
      75,    76,     0,     0,    82,    83,    71,    72,    73,    74,
      75,    76,    84,    85,   123,   124,    86,    87,   125,     0,
     126,   127,   128,   129,     0,   130,     9,    71,    72,    73,
      74,    75,    76,   131,     0,     0,     0,     0,     0,    77,
      71,    72,    73,    74,    75,    76,    71,    72,    73,    74,
      75,    76,   177,     0,     0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
      27,   133,     5,    92,   133,   198,    19,     5,   201,    12,
      15,    46,    14,    14,    49,    93,    14,    22,    23,    16,
      23,    15,    19,    15,    51,    52,    15,    15,    26,   222,
       0,   224,   225,    46,    37,     4,     5,     6,     7,     8,
       9,    39,    40,    41,    42,    46,   239,    49,    49,    15,
      15,    93,   245,    28,    48,   133,    48,    22,    23,    48,
      48,   150,    89,    90,     4,     5,     6,     7,     8,     9,
      26,     5,     4,     5,     6,     7,     8,     9,    47,    26,
      14,    16,    48,   215,    19,   217,   215,    36,   217,    26,
      27,   133,    26,    16,   121,    17,    19,    27,   230,   231,
     232,   230,   231,   232,    18,    39,    40,    47,    45,    26,
     242,    46,    26,   242,   246,    47,    29,   246,    38,    36,
     198,    38,    36,   201,    38,   152,    26,    38,    45,    22,
      23,    45,   159,   160,    45,   162,   163,   215,    17,   217,
      38,    15,   220,   170,   222,    14,   224,   225,    22,    23,
      26,    27,   230,   231,   232,    15,   198,   184,   161,   201,
      14,   239,    22,    23,   242,    16,    16,   245,   246,    25,
      26,    15,    28,   215,    38,   217,    14,    26,    22,    23,
     222,    26,   224,   225,    40,    41,    16,    26,   230,   231,
     232,    14,    22,    23,     9,    16,    52,   239,    22,    46,
     242,    22,    23,   245,   246,     4,     5,     6,     7,     8,
       9,    67,    14,    14,    14,    71,    72,    73,    74,    75,
      76,     6,     7,     8,     9,    14,    82,    83,    84,    85,
      86,    87,    16,    14,     5,    26,    16,    19,    22,    23,
      11,     5,    19,    14,    16,    15,    15,    11,    47,    17,
      14,    17,    15,    15,   110,    26,    27,    17,    17,    17,
      15,    17,    26,    27,    31,    17,    20,     6,    39,    40,
      41,    42,    43,    44,   130,    39,    40,    41,    42,    43,
      44,   149,     5,   153,    37,    -1,    -1,   220,    11,     5,
      -1,    14,    -1,    -1,    -1,    11,   152,   153,    14,    -1,
      -1,   157,   158,    26,    27,    -1,   162,   163,    -1,    -1,
      26,    27,    -1,    -1,   170,    -1,    39,    40,    41,    42,
      43,    44,    18,    39,    40,    -1,    -1,    43,    44,    -1,
      26,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      -1,    37,    38,    18,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    26,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    -1,    37,    38,    18,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    26,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    -1,    37,    38,    18,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    26,    27,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    -1,    37,    38,    18,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    26,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    -1,    37,    38,    18,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    26,    27,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    -1,    37,    38,    18,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    26,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    -1,    37,    38,    18,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    26,    27,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    -1,    37,    38,
       4,     5,     6,     7,     8,     9,    45,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      24,    25,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    24,    25,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    24,    25,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,     4,     5,     6,     7,
       8,     9,    20,    21,    26,    27,    24,    25,    30,    -1,
      32,    33,    34,    35,    -1,    37,    38,     4,     5,     6,
       7,     8,     9,    45,    -1,    -1,    -1,    -1,    -1,    16,
       4,     5,     6,     7,     8,     9,     4,     5,     6,     7,
       8,     9,    16,    -1,    -1,    -1,    -1,    15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,    52,     0,    28,    62,    63,    64,    26,    38,
      45,    53,    54,    55,    64,    65,    26,    27,    36,    56,
      57,    58,    55,    17,    16,    19,    46,    19,    46,    38,
      29,    72,    58,    26,    36,    55,    60,    66,    67,    68,
       5,    14,    26,    39,    40,    41,    42,    79,    90,    95,
      95,    11,    14,    27,    43,    44,    95,    96,    95,    26,
      17,    14,    38,    18,    67,    95,    95,    14,    49,    16,
      16,     4,     5,     6,     7,     8,     9,    16,    47,    96,
      95,    96,    12,    13,    20,    21,    24,    25,    16,    22,
      23,    47,    14,    73,    38,    70,    71,    26,    15,    94,
      95,    96,    26,    95,    95,    95,    95,    95,    95,    16,
      19,    15,    95,    95,    95,    95,    95,    95,    96,    96,
      16,    19,    70,    26,    27,    30,    32,    33,    34,    35,
      37,    45,    55,    74,    75,    76,    77,    78,    79,    80,
      85,    87,    89,    90,    91,    92,    93,    26,    15,    48,
      14,    15,    48,    14,    95,    96,    15,    46,    46,    14,
      14,    14,    14,    14,    95,    26,    18,    75,    76,    16,
      19,    69,    71,    70,    95,    96,    94,    16,    16,    59,
      95,    95,    96,    96,    55,    41,    42,    95,    96,    41,
      42,    95,    96,    16,    41,    42,    95,    96,    17,    15,
      15,    17,    47,    47,    15,    15,    96,    15,    15,    15,
      15,    15,    15,    15,    15,    74,    61,    74,    81,    86,
      16,    18,    17,    18,    17,    17,    26,    45,    77,    79,
      74,    74,    74,    15,    18,    18,    18,    88,    82,    17,
      31,    83,    74,    84,    18,    17,    74,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    52,    51,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    59,    58,    61,    60,    62,    62,    63,    63,    65,
      64,    66,    66,    67,    67,    67,    69,    68,    70,    70,
      70,    71,    73,    72,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    79,    79,    81,    82,
      80,    83,    84,    83,    86,    85,    88,    87,    89,    89,
      90,    91,    91,    91,    91,    92,    92,    92,    92,    93,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     5,
       5,     6,     8,     6,     8,     5,     5,     1,     0,     2,
       1,     0,    10,     0,    10,     1,     0,     2,     1,     0,
       6,     2,     1,     1,     1,     1,     0,     8,     1,     3,
       0,     2,     0,     5,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     4,     2,     4,     1,     3,     6,     0,     0,
      10,     0,     0,     5,     0,     8,     0,    11,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     2,
       3,     1,     3,     1,     0,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       2
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
#line 67 "limbaj.y"
          {
            currentSymTable->enterScope("Global", "global");
        }
#line 1424 "limbaj.tab.c"
    break;

  case 3: /* PROGRAM: $@1 class_section var_section func_section main_function  */
#line 71 "limbaj.y"
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
#line 91 "limbaj.y"
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
#line 101 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();
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
#line 1475 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: BOOL BOOLID ASSIGN boolean_expression ';'  */
#line 121 "limbaj.y"
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
#line 1492 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 134 "limbaj.y"
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
#line 1512 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 150 "limbaj.y"
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
#line 1541 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: BOOL BOOLID '[' expression ']' ';'  */
#line 174 "limbaj.y"
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
#line 1563 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: BOOL BOOLID '[' expression ']' ASSIGN boolean_expression ';'  */
#line 192 "limbaj.y"
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
#line 1587 "limbaj.tab.c"
    break;

  case 15: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 212 "limbaj.y"
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
#line 1610 "limbaj.tab.c"
    break;

  case 16: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 231 "limbaj.y"
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
#line 1633 "limbaj.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 262 "limbaj.y"
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
#line 1650 "limbaj.tab.c"
    break;

  case 22: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 275 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1658 "limbaj.tab.c"
    break;

  case 23: /* $@3: %empty  */
#line 284 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1667 "limbaj.tab.c"
    break;

  case 24: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 289 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1675 "limbaj.tab.c"
    break;

  case 29: /* $@4: %empty  */
#line 306 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1684 "limbaj.tab.c"
    break;

  case 30: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 313 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1692 "limbaj.tab.c"
    break;

  case 36: /* $@5: %empty  */
#line 330 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1701 "limbaj.tab.c"
    break;

  case 37: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 335 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1709 "limbaj.tab.c"
    break;

  case 42: /* $@6: %empty  */
#line 353 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1717 "limbaj.tab.c"
    break;

  case 43: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 357 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1725 "limbaj.tab.c"
    break;

  case 57: /* assignment: left_value ASSIGN expression  */
#line 384 "limbaj.y"
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
#line 1741 "limbaj.tab.c"
    break;

  case 58: /* assignment: left_value ASSIGN boolean_expression  */
#line 395 "limbaj.y"
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
#line 1756 "limbaj.tab.c"
    break;

  case 59: /* assignment: left_value ASSIGN STRING  */
#line 405 "limbaj.y"
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
#line 1771 "limbaj.tab.c"
    break;

  case 60: /* assignment: left_value ASSIGN CHAR  */
#line 415 "limbaj.y"
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
#line 1786 "limbaj.tab.c"
    break;

  case 61: /* left_value: ID  */
#line 429 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[0].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined." << endl;
                    errorCount++;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string), true);
            }
#line 1798 "limbaj.tab.c"
    break;

  case 62: /* left_value: ID '[' expression ']'  */
#line 437 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[-3].string) << "' used before being defined." << endl;
                    errorCount++;
                }
                (yyval.node)=new ASTNode((yyvsp[-3].string), true);
            }
#line 1810 "limbaj.tab.c"
    break;

  case 63: /* left_value: BOOL ID  */
#line 444 "limbaj.y"
                     {
                // if (!currentSymTable->isUsedBeforeDefined($1, "variable")) {
                //     cout << "Error: Variable '" << $1 << "' used before being defined." << endl;
                //     errorCount++;
                // }
                // $$=new ASTNode($1, true);
            }
#line 1822 "limbaj.tab.c"
    break;

  case 64: /* left_value: BOOLID '[' expression ']'  */
#line 452 "limbaj.y"
            {
                // if (!currentSymTable->isUsedBeforeDefined($1, "variable")) {
                //     cout << "Error: Variable '" << $1 << "' used before being defined." << endl;
                //     errorCount++;
                // }
                // $$=new ASTNode($1, true);
            }
#line 1834 "limbaj.tab.c"
    break;

  case 65: /* left_value: object_access  */
#line 459 "limbaj.y"
                           {
                (yyval.node)=nullptr;
            }
#line 1842 "limbaj.tab.c"
    break;

  case 68: /* $@7: %empty  */
#line 470 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 1850 "limbaj.tab.c"
    break;

  case 69: /* $@8: %empty  */
#line 474 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1858 "limbaj.tab.c"
    break;

  case 72: /* $@9: %empty  */
#line 483 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 1866 "limbaj.tab.c"
    break;

  case 73: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 487 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1874 "limbaj.tab.c"
    break;

  case 74: /* $@10: %empty  */
#line 494 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 1882 "limbaj.tab.c"
    break;

  case 75: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 498 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1890 "limbaj.tab.c"
    break;

  case 76: /* $@11: %empty  */
#line 505 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 1898 "limbaj.tab.c"
    break;

  case 77: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 509 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1906 "limbaj.tab.c"
    break;

  case 80: /* function_call: ID '(' argument_list ')'  */
#line 520 "limbaj.y"
              {
                  if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "function")) {
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called before being defined." << endl;
                      errorCount++;
                  }
              }
#line 1917 "limbaj.tab.c"
    break;

  case 81: /* print_statement: PRINT '(' CHAR ')'  */
#line 528 "limbaj.y"
                                    {
                    cout << "Print (char): " << (yyvsp[-1].charval) << endl;
                }
#line 1925 "limbaj.tab.c"
    break;

  case 82: /* print_statement: PRINT '(' STRING ')'  */
#line 531 "limbaj.y"
                                      {
                    cout << "Print (string): " << (yyvsp[-1].string) << endl;
                }
#line 1933 "limbaj.tab.c"
    break;

  case 83: /* print_statement: PRINT '(' expression ')'  */
#line 534 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1942 "limbaj.tab.c"
    break;

  case 84: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 538 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1951 "limbaj.tab.c"
    break;

  case 85: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 544 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1960 "limbaj.tab.c"
    break;

  case 86: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 548 "limbaj.y"
                                                     {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1969 "limbaj.tab.c"
    break;

  case 87: /* type_of_statement: TYPEOF '(' STRING ')'  */
#line 552 "limbaj.y"
                                         {
                        cout<<"TypeOf: string"<<endl;
                  }
#line 1977 "limbaj.tab.c"
    break;

  case 88: /* type_of_statement: TYPEOF '(' CHAR ')'  */
#line 555 "limbaj.y"
                                       {
                        cout<<"TypeOf: char"<<endl;
                  }
#line 1985 "limbaj.tab.c"
    break;

  case 95: /* expression: expression '+' expression  */
#line 571 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1993 "limbaj.tab.c"
    break;

  case 96: /* expression: expression '-' expression  */
#line 574 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2001 "limbaj.tab.c"
    break;

  case 97: /* expression: expression '*' expression  */
#line 577 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2009 "limbaj.tab.c"
    break;

  case 98: /* expression: expression '/' expression  */
#line 580 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2017 "limbaj.tab.c"
    break;

  case 99: /* expression: expression '%' expression  */
#line 583 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2025 "limbaj.tab.c"
    break;

  case 100: /* expression: expression '^' expression  */
#line 586 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2033 "limbaj.tab.c"
    break;

  case 101: /* expression: '-' expression  */
#line 589 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 2041 "limbaj.tab.c"
    break;

  case 102: /* expression: '(' expression ')'  */
#line 592 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 2049 "limbaj.tab.c"
    break;

  case 103: /* expression: ID  */
#line 595 "limbaj.y"
                {
                if (!currentSymTable->existsId((yyvsp[0].string))) 
                {
                    cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined." << endl;
                    errorCount++;
                }
                cout<<"..."<<(yyvsp[0].string)<<endl;
               (yyval.node) = new ASTNode((yyvsp[0].string), true);
               cout<<"..."<<endl;
           }
#line 2064 "limbaj.tab.c"
    break;

  case 104: /* expression: INT  */
#line 605 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 2072 "limbaj.tab.c"
    break;

  case 105: /* expression: FLOAT  */
#line 608 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 2080 "limbaj.tab.c"
    break;

  case 106: /* expression: function_call  */
#line 611 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2088 "limbaj.tab.c"
    break;

  case 107: /* expression: object_access  */
#line 614 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2096 "limbaj.tab.c"
    break;

  case 108: /* boolean_expression: TRUE  */
#line 619 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true, true);
                   }
#line 2104 "limbaj.tab.c"
    break;

  case 109: /* boolean_expression: FALSE  */
#line 622 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false, false);
                   }
#line 2112 "limbaj.tab.c"
    break;

  case 110: /* boolean_expression: '(' boolean_expression ')'  */
#line 625 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 2120 "limbaj.tab.c"
    break;

  case 111: /* boolean_expression: BOOLID  */
#line 628 "limbaj.y"
                            {
                        if (!currentSymTable->existsId((yyvsp[0].string))) 
                        {
                            cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined." << endl;
                            errorCount++;
                        }
                        else{
                            (yyval.node) = new ASTNode((yyvsp[0].string), true);
                        }
                   }
#line 2135 "limbaj.tab.c"
    break;

  case 112: /* boolean_expression: expression '>' expression  */
#line 638 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2143 "limbaj.tab.c"
    break;

  case 113: /* boolean_expression: expression '<' expression  */
#line 641 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2151 "limbaj.tab.c"
    break;

  case 114: /* boolean_expression: expression GE expression  */
#line 644 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2159 "limbaj.tab.c"
    break;

  case 115: /* boolean_expression: expression LE expression  */
#line 647 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2167 "limbaj.tab.c"
    break;

  case 116: /* boolean_expression: expression EQ expression  */
#line 650 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2175 "limbaj.tab.c"
    break;

  case 117: /* boolean_expression: expression NEQ expression  */
#line 653 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2183 "limbaj.tab.c"
    break;

  case 118: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 656 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2191 "limbaj.tab.c"
    break;

  case 119: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 659 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2199 "limbaj.tab.c"
    break;

  case 120: /* boolean_expression: '!' boolean_expression  */
#line 662 "limbaj.y"
                                            {
                      (yyval.node) = new ASTNode(ASTNode::Operator::NOT, (yyvsp[0].node), nullptr);
                   }
#line 2207 "limbaj.tab.c"
    break;


#line 2211 "limbaj.tab.c"

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

#line 667 "limbaj.y"

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

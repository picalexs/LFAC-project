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
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_PROGRAM = 49,                   /* PROGRAM  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_var_section = 51,               /* var_section  */
  YYSYMBOL_var_declarations = 52,          /* var_declarations  */
  YYSYMBOL_var_declaration = 53,           /* var_declaration  */
  YYSYMBOL_func_section = 54,              /* func_section  */
  YYSYMBOL_func_definitions = 55,          /* func_definitions  */
  YYSYMBOL_func_definition = 56,           /* func_definition  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_method_definition = 58,         /* method_definition  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_class_section = 60,             /* class_section  */
  YYSYMBOL_class_definitions = 61,         /* class_definitions  */
  YYSYMBOL_class_definition = 62,          /* class_definition  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_class_body = 64,                /* class_body  */
  YYSYMBOL_class_member = 65,              /* class_member  */
  YYSYMBOL_constructor_definition = 66,    /* constructor_definition  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_parameter_list = 68,            /* parameter_list  */
  YYSYMBOL_parameter = 69,                 /* parameter  */
  YYSYMBOL_main_function = 70,             /* main_function  */
  YYSYMBOL_71_6 = 71,                      /* $@6  */
  YYSYMBOL_statement_list = 72,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 73,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 74, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 75,                /* assignment  */
  YYSYMBOL_left_value = 76,                /* left_value  */
  YYSYMBOL_object_access = 77,             /* object_access  */
  YYSYMBOL_if_statement = 78,              /* if_statement  */
  YYSYMBOL_79_7 = 79,                      /* $@7  */
  YYSYMBOL_80_8 = 80,                      /* $@8  */
  YYSYMBOL_else_statement = 81,            /* else_statement  */
  YYSYMBOL_82_9 = 82,                      /* $@9  */
  YYSYMBOL_while_statement = 83,           /* while_statement  */
  YYSYMBOL_84_10 = 84,                     /* $@10  */
  YYSYMBOL_for_statement = 85,             /* for_statement  */
  YYSYMBOL_86_11 = 86,                     /* $@11  */
  YYSYMBOL_predefined_function_call = 87,  /* predefined_function_call  */
  YYSYMBOL_function_call = 88,             /* function_call  */
  YYSYMBOL_print_statement = 89,           /* print_statement  */
  YYSYMBOL_type_of_statement = 90,         /* type_of_statement  */
  YYSYMBOL_return_statement = 91,          /* return_statement  */
  YYSYMBOL_argument_list = 92,             /* argument_list  */
  YYSYMBOL_expression = 93,                /* expression  */
  YYSYMBOL_boolean_expression = 94         /* boolean_expression  */
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
#define YYLAST   529

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

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
       2,     2,     2,    11,     2,     2,     2,     8,     2,     2,
      14,    15,     6,     4,    46,     5,    47,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      13,     3,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     9,     2,     2,     2,     2,     2,
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
      37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    65,    80,    81,    84,    85,    88,    98,
     114,   139,   159,   179,   198,   220,   221,   224,   225,   230,
     229,   252,   251,   264,   265,   268,   269,   274,   273,   287,
     288,   291,   292,   293,   298,   297,   310,   311,   312,   315,
     321,   320,   331,   332,   333,   334,   338,   339,   340,   341,
     342,   346,   347,   348,   349,   352,   363,   373,   383,   396,
     404,   412,   417,   418,   423,   427,   422,   433,   436,   435,
     447,   446,   458,   457,   468,   469,   472,   481,   484,   487,
     491,   497,   501,   505,   508,   513,   516,   517,   518,   519,
     520,   524,   527,   530,   533,   536,   539,   542,   545,   548,
     556,   559,   562,   565,   570,   573,   576,   579,   582,   585,
     588,   591,   594,   597,   600,   603
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
  "';'", "'['", "']'", "','", "'.'", "$accept", "PROGRAM", "$@1",
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

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -175,     9,    -6,  -175,   -21,    10,    -6,  -175,  -175,     7,
      27,    10,  -175,  -175,    36,    56,    37,    35,    27,  -175,
    -175,    80,   227,  -175,     5,    52,    75,  -175,  -175,    84,
      43,  -175,  -175,    96,  -175,  -175,     5,   322,   322,    -2,
    -175,  -175,    59,    72,  -175,  -175,  -175,  -175,   211,    28,
       5,    18,   104,  -175,    74,    97,  -175,  -175,  -175,   403,
    -175,   333,    67,   322,    98,  -175,  -175,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,  -175,
     322,   322,  -175,   508,   -15,    74,   275,   101,    26,  -175,
     115,  -175,  -175,    29,   403,    -8,   117,   219,   219,   127,
     127,   127,   127,   520,   520,   520,   520,   520,   520,  -175,
     116,     5,  -175,    40,     4,   125,   140,   141,   143,   147,
       5,  -175,   400,   122,  -175,  -175,   123,   151,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,    74,    74,
    -175,   322,   322,    60,  -175,     5,   322,   322,    10,   234,
     277,   520,  -175,   124,  -175,  -175,   284,   163,  -175,    41,
     403,    -8,    55,  -175,   169,    31,   130,   149,   322,   173,
     175,   361,   162,   176,   182,   382,   172,  -175,  -175,  -175,
     403,    -8,   275,  -175,  -175,   275,  -175,  -175,  -175,    63,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   412,   184,
     421,   185,   186,   153,  -175,   275,  -175,   275,   275,    65,
     183,  -175,   433,   442,   454,  -175,  -175,  -175,  -175,   205,
     193,   275,  -175,  -175,   463,   213,  -175,   275,   475,  -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    24,     1,     0,     5,    23,    26,    27,     0,
      16,     4,     7,    25,     0,     0,     0,     0,    15,    18,
       6,     0,     0,     8,     0,     0,     0,     3,    17,     0,
       0,    31,    32,     0,    30,    33,     0,     0,     0,    99,
     100,   101,     0,     0,   104,   105,   103,   102,     0,     0,
       0,     0,     0,    40,    38,     0,    28,    29,    97,     0,
     115,     0,     0,    90,     0,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,    12,     0,     0,    38,     0,     0,     0,    36,
       0,    98,   106,     0,    87,    89,    62,    91,    92,    93,
      94,    95,    96,   107,   108,   111,   112,   110,   109,   113,
     114,     0,     9,     0,    59,     0,     0,     0,     0,     0,
       0,    51,     0,     0,    45,    46,     0,    50,    52,    53,
      54,    47,    48,    74,    75,    49,    39,    34,     0,    38,
      76,     0,    90,     0,    19,     0,     0,     0,     0,     0,
       0,    85,    41,     0,    44,    43,     0,     0,    37,     0,
      86,    88,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    58,    57,
      55,    56,     0,    21,    63,     0,    60,    64,    70,     0,
      77,    78,    79,    80,    84,    83,    81,    82,     0,     0,
       0,     0,     0,     0,    35,     0,    20,     0,     0,    59,
       0,    61,     0,     0,     0,    72,    22,    65,    71,     0,
      67,     0,    68,    66,     0,     0,    73,     0,     0,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,  -175,    -4,  -175,  -175,   215,  -175,
    -175,  -175,  -175,  -175,   230,  -175,  -175,   204,  -175,  -175,
     -79,   102,  -175,  -175,  -174,  -120,  -117,    39,  -175,   -65,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     -32,  -175,  -175,  -175,   107,   136,   -22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    10,    11,   121,    17,    18,    19,   164,
      32,   199,     5,     6,     7,    14,    33,    34,    35,   157,
      88,    89,    27,    86,   122,   123,   124,   125,   126,    46,
     128,   201,   220,   223,   225,   129,   202,   130,   219,   131,
      47,   133,   134,   135,    93,    59,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    12,   153,   111,     8,   154,   113,    20,   198,     3,
      36,   200,    63,    80,    81,    60,    62,    31,    63,    50,
       4,   127,    67,    68,    69,    70,    71,    72,   112,    31,
      39,   212,    15,   213,   214,    67,    68,    69,    70,    71,
      72,   137,    40,    41,   140,    64,     9,   224,   145,    80,
      81,    64,    21,   228,   132,   144,   183,   127,   109,   110,
     159,    16,    26,    84,    67,    68,    69,    70,    71,    72,
     184,    82,   138,    25,    22,   141,   186,    52,   153,    55,
     153,   154,    92,   154,    80,    81,   138,   138,    80,    81,
     132,    53,   153,   153,   153,   154,   154,   154,    54,    23,
      24,   141,    65,   163,   153,    29,   203,   154,   153,   145,
      87,   154,    64,    56,    30,    66,     9,   127,    85,   161,
     127,    29,    90,    96,   166,   167,   136,   172,   176,   139,
      30,   142,     9,   127,   181,   127,    72,    80,   211,   146,
     127,   156,   127,   127,   168,   187,   189,   127,   127,   127,
     132,    80,    81,   132,   147,   148,   127,   149,    48,   127,
      51,   150,   127,   127,   188,   155,   132,   177,   132,   -61,
      80,    81,    58,   132,    61,   132,   132,   193,   209,   182,
     132,   132,   132,    80,    81,   185,    83,   197,   190,   132,
     191,   194,   132,    80,    81,   132,   132,   195,   215,    94,
     205,   207,   208,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    67,    68,    69,    70,    71,
      72,   221,   222,    73,    74,    69,    70,    71,    72,   227,
      75,    76,    36,    28,    77,    78,    13,    57,    37,    36,
     158,    38,   210,     0,     0,    37,     0,   143,    38,   162,
       0,     0,    39,     0,    79,     0,   151,     0,     0,    39,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
       0,    40,    41,   169,   170,    44,    45,   160,    94,     0,
       0,   165,    36,     0,     0,   171,   175,     0,    37,    36,
       0,    38,   180,     0,     0,    37,     0,     0,    38,     0,
     114,     0,    39,   115,     0,   116,   117,   118,   119,    39,
     120,     9,     0,     0,    40,    41,   173,   174,    44,    45,
       0,    40,    41,   178,   179,    44,    45,    36,     0,     0,
       0,     0,     0,    37,     0,     0,    38,    67,    68,    69,
      70,    71,    72,     0,     0,    73,    74,    39,    91,     0,
       0,     0,    75,    76,     0,     0,    77,    78,     0,    40,
      41,     0,     0,    44,    45,    67,    68,    69,    70,    71,
      72,     0,     0,    73,    74,     0,   192,     0,     0,     0,
      75,    76,     0,     0,    77,    78,    67,    68,    69,    70,
      71,    72,     0,     0,    73,    74,     0,   196,     0,     0,
       0,    75,    76,     0,     0,    77,    78,    67,    68,    69,
      70,    71,    72,     0,     0,    73,    74,   152,     0,     0,
       0,     0,    75,    76,     0,   114,    77,    78,   115,   204,
     116,   117,   118,   119,     0,   120,     9,   114,   206,     0,
     115,     0,   116,   117,   118,   119,   114,   120,     9,   115,
     216,   116,   117,   118,   119,     0,   120,     9,   114,   217,
       0,   115,     0,   116,   117,   118,   119,   114,   120,     9,
     115,   218,   116,   117,   118,   119,     0,   120,     9,   114,
     226,     0,   115,     0,   116,   117,   118,   119,   114,   120,
       9,   115,   229,   116,   117,   118,   119,     0,   120,     9,
     114,     0,     0,   115,     0,   116,   117,   118,   119,     0,
     120,     9,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,    91,    67,    68,    69,    70,    71,    72
};

static const yytype_int16 yycheck[] =
{
      22,     5,   122,    18,    25,   122,    85,    11,   182,     0,
       5,   185,    14,    21,    22,    37,    38,    21,    14,    14,
      26,    86,     4,     5,     6,     7,     8,     9,    43,    33,
      25,   205,    25,   207,   208,     4,     5,     6,     7,     8,
       9,    15,    37,    38,    15,    47,    36,   221,    44,    21,
      22,    47,    16,   227,    86,    15,    15,   122,    80,    81,
     139,    34,    27,    45,     4,     5,     6,     7,     8,     9,
      15,    43,    46,    36,    18,    46,    45,    25,   198,    36,
     200,   198,    15,   200,    21,    22,    46,    46,    21,    22,
     122,    16,   212,   213,   214,   212,   213,   214,    14,    43,
      44,    46,    43,    43,   224,    25,    43,   224,   228,    44,
      36,   228,    47,    17,    34,    43,    36,   182,    14,   141,
     185,    25,    25,    25,   146,   147,    25,   149,   150,    14,
      34,    14,    36,   198,   156,   200,     9,    21,   203,    14,
     205,    18,   207,   208,   148,    15,   168,   212,   213,   214,
     182,    21,    22,   185,    14,    14,   221,    14,    22,   224,
      24,    14,   227,   228,    15,    43,   198,    43,   200,    18,
      21,    22,    36,   205,    38,   207,   208,    15,    25,    16,
     212,   213,   214,    21,    22,    16,    50,    15,    15,   221,
      15,    15,   224,    21,    22,   227,   228,    15,    15,    63,
      16,    16,    16,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       9,    16,    29,    12,    13,     6,     7,     8,     9,    16,
      19,    20,     5,    18,    23,    24,     6,    33,    11,     5,
     138,    14,   203,    -1,    -1,    11,    -1,   111,    14,   142,
      -1,    -1,    25,    -1,    43,    -1,   120,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      -1,    37,    38,    39,    40,    41,    42,   141,   142,    -1,
      -1,   145,     5,    -1,    -1,   149,   150,    -1,    11,     5,
      -1,    14,   156,    -1,    -1,    11,    -1,    -1,    14,    -1,
      25,    -1,    25,    28,    -1,    30,    31,    32,    33,    25,
      35,    36,    -1,    -1,    37,    38,    39,    40,    41,    42,
      -1,    37,    38,    39,    40,    41,    42,     5,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    14,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    25,    15,    -1,
      -1,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    37,
      38,    -1,    -1,    41,    42,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    19,    20,    -1,    -1,    23,    24,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    17,    -1,    -1,
      -1,    -1,    19,    20,    -1,    25,    23,    24,    28,    17,
      30,    31,    32,    33,    -1,    35,    36,    25,    17,    -1,
      28,    -1,    30,    31,    32,    33,    25,    35,    36,    28,
      17,    30,    31,    32,    33,    -1,    35,    36,    25,    17,
      -1,    28,    -1,    30,    31,    32,    33,    25,    35,    36,
      28,    17,    30,    31,    32,    33,    -1,    35,    36,    25,
      17,    -1,    28,    -1,    30,    31,    32,    33,    25,    35,
      36,    28,    17,    30,    31,    32,    33,    -1,    35,    36,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,
      35,    36,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,     4,     5,     6,     7,     8,     9
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,    26,    60,    61,    62,    25,    36,
      51,    52,    53,    62,    63,    25,    34,    54,    55,    56,
      53,    16,    18,    43,    44,    36,    27,    70,    56,    25,
      34,    53,    58,    64,    65,    66,     5,    11,    14,    25,
      37,    38,    39,    40,    41,    42,    77,    88,    93,    94,
      14,    93,    25,    16,    14,    36,    17,    65,    93,    93,
      94,    93,    94,    14,    47,    43,    43,     4,     5,     6,
       7,     8,     9,    12,    13,    19,    20,    23,    24,    43,
      21,    22,    43,    93,    45,    14,    71,    36,    68,    69,
      25,    15,    15,    92,    93,    94,    25,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    18,    43,    68,    25,    28,    30,    31,    32,    33,
      35,    53,    72,    73,    74,    75,    76,    77,    78,    83,
      85,    87,    88,    89,    90,    91,    25,    15,    46,    14,
      15,    46,    14,    93,    15,    44,    14,    14,    14,    14,
      14,    93,    17,    73,    74,    43,    18,    67,    69,    68,
      93,    94,    92,    43,    57,    93,    94,    94,    53,    39,
      40,    93,    94,    39,    40,    93,    94,    43,    39,    40,
      93,    94,    16,    15,    15,    16,    45,    15,    15,    94,
      15,    15,    15,    15,    15,    15,    15,    15,    72,    59,
      72,    79,    84,    43,    17,    16,    17,    16,    16,    25,
      75,    77,    72,    72,    72,    15,    17,    17,    17,    86,
      80,    16,    29,    81,    72,    82,    17,    16,    72,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    51,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    57,
      56,    59,    58,    60,    60,    61,    61,    63,    62,    64,
      64,    65,    65,    65,    67,    66,    68,    68,    68,    69,
      71,    70,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    79,    80,    78,    81,    82,    81,
      84,    83,    86,    85,    87,    87,    88,    89,    89,    89,
      89,    90,    90,    90,    90,    91,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     6,
       8,     5,     5,     5,     5,     1,     0,     2,     1,     0,
      10,     0,    10,     1,     0,     2,     1,     0,     6,     2,
       1,     1,     1,     1,     0,     8,     1,     3,     0,     2,
       0,     5,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       4,     1,     3,     6,     0,     0,    10,     0,     0,     5,
       0,     8,     0,    11,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     2,     3,     1,     3,     1,
       0,     3,     3,     3,     3,     3,     3,     2,     3,     1,
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
#line 1394 "limbaj.tab.c"
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
#line 1407 "limbaj.tab.c"
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
#line 1421 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 99 "limbaj.y"
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
#line 1441 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 115 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else {
                        auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                        auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();

                        if((yyvsp[-7].valtype)!=rtype || strcmp((yyvsp[-7].valtype),"bool")==0 || rtype=="bool")
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
#line 1470 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 140 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();
                        if((yyvsp[-4].valtype)!=rtype || strcmp((yyvsp[-4].valtype),"bool")==0 || rtype=="bool")
                        {
                            cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got "<<rtype<<endl;
                            errorCount++;
                        }
                        else{
                            currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), result);
                        }
                    }
                }
#line 1494 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID ASSIGN boolean_expression ';'  */
#line 160 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        errorCount++;
                    }
                    else 
                    {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        string rtype=(yyvsp[-1].node)->getType();
                        if((yyvsp[-4].valtype)!=rtype || strcmp((yyvsp[-4].valtype),"bool")!=0 || rtype!="bool")
                        {
                            cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got "<<rtype<<endl;
                            errorCount++;
                        }
                        else{
                            currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), result);
                        }
                    }
                }
#line 1518 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 180 "limbaj.y"
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
#line 1541 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 199 "limbaj.y"
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
#line 1564 "limbaj.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 230 "limbaj.y"
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
#line 1581 "limbaj.tab.c"
    break;

  case 20: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 243 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1589 "limbaj.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 252 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1598 "limbaj.tab.c"
    break;

  case 22: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 257 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1606 "limbaj.tab.c"
    break;

  case 27: /* $@4: %empty  */
#line 274 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1615 "limbaj.tab.c"
    break;

  case 28: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 281 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1623 "limbaj.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 298 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1632 "limbaj.tab.c"
    break;

  case 35: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 303 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1640 "limbaj.tab.c"
    break;

  case 40: /* $@6: %empty  */
#line 321 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1648 "limbaj.tab.c"
    break;

  case 41: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 325 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1656 "limbaj.tab.c"
    break;

  case 55: /* assignment: left_value ASSIGN expression  */
#line 352 "limbaj.y"
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
#line 1672 "limbaj.tab.c"
    break;

  case 56: /* assignment: left_value ASSIGN boolean_expression  */
#line 363 "limbaj.y"
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
#line 1687 "limbaj.tab.c"
    break;

  case 57: /* assignment: left_value ASSIGN STRING  */
#line 373 "limbaj.y"
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
#line 1702 "limbaj.tab.c"
    break;

  case 58: /* assignment: left_value ASSIGN CHAR  */
#line 383 "limbaj.y"
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
#line 1717 "limbaj.tab.c"
    break;

  case 59: /* left_value: ID  */
#line 397 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[0].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined." << endl;
                    errorCount++;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string), true);
            }
#line 1729 "limbaj.tab.c"
    break;

  case 60: /* left_value: ID '[' expression ']'  */
#line 405 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[-3].string) << "' used before being defined." << endl;
                    errorCount++;
                }
                (yyval.node)=new ASTNode((yyvsp[-3].string), true);
            }
#line 1741 "limbaj.tab.c"
    break;

  case 61: /* left_value: object_access  */
#line 412 "limbaj.y"
                           {
                (yyval.node)=nullptr;
            }
#line 1749 "limbaj.tab.c"
    break;

  case 64: /* $@7: %empty  */
#line 423 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 1757 "limbaj.tab.c"
    break;

  case 65: /* $@8: %empty  */
#line 427 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1765 "limbaj.tab.c"
    break;

  case 68: /* $@9: %empty  */
#line 436 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 1773 "limbaj.tab.c"
    break;

  case 69: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 440 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1781 "limbaj.tab.c"
    break;

  case 70: /* $@10: %empty  */
#line 447 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 1789 "limbaj.tab.c"
    break;

  case 71: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 451 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1797 "limbaj.tab.c"
    break;

  case 72: /* $@11: %empty  */
#line 458 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 1805 "limbaj.tab.c"
    break;

  case 73: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 462 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1813 "limbaj.tab.c"
    break;

  case 76: /* function_call: ID '(' argument_list ')'  */
#line 473 "limbaj.y"
              {
                  if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "function")) {
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called before being defined." << endl;
                      errorCount++;
                  }
              }
#line 1824 "limbaj.tab.c"
    break;

  case 77: /* print_statement: PRINT '(' CHAR ')'  */
#line 481 "limbaj.y"
                                    {
                    cout << "Print (char): " << (yyvsp[-1].charval) << endl;
                }
#line 1832 "limbaj.tab.c"
    break;

  case 78: /* print_statement: PRINT '(' STRING ')'  */
#line 484 "limbaj.y"
                                      {
                    cout << "Print (string): " << (yyvsp[-1].string) << endl;
                }
#line 1840 "limbaj.tab.c"
    break;

  case 79: /* print_statement: PRINT '(' expression ')'  */
#line 487 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1849 "limbaj.tab.c"
    break;

  case 80: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 491 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1858 "limbaj.tab.c"
    break;

  case 81: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 497 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1867 "limbaj.tab.c"
    break;

  case 82: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 501 "limbaj.y"
                                                     {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1876 "limbaj.tab.c"
    break;

  case 83: /* type_of_statement: TYPEOF '(' STRING ')'  */
#line 505 "limbaj.y"
                                         {
                        cout<<"TypeOf: string"<<endl;
                  }
#line 1884 "limbaj.tab.c"
    break;

  case 84: /* type_of_statement: TYPEOF '(' CHAR ')'  */
#line 508 "limbaj.y"
                                       {
                        cout<<"TypeOf: char"<<endl;
                  }
#line 1892 "limbaj.tab.c"
    break;

  case 91: /* expression: expression '+' expression  */
#line 524 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1900 "limbaj.tab.c"
    break;

  case 92: /* expression: expression '-' expression  */
#line 527 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1908 "limbaj.tab.c"
    break;

  case 93: /* expression: expression '*' expression  */
#line 530 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1916 "limbaj.tab.c"
    break;

  case 94: /* expression: expression '/' expression  */
#line 533 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1924 "limbaj.tab.c"
    break;

  case 95: /* expression: expression '%' expression  */
#line 536 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1932 "limbaj.tab.c"
    break;

  case 96: /* expression: expression '^' expression  */
#line 539 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1940 "limbaj.tab.c"
    break;

  case 97: /* expression: '-' expression  */
#line 542 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 1948 "limbaj.tab.c"
    break;

  case 98: /* expression: '(' expression ')'  */
#line 545 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 1956 "limbaj.tab.c"
    break;

  case 99: /* expression: ID  */
#line 548 "limbaj.y"
                {
                if (!currentSymTable->existsId((yyvsp[0].string))) 
                {
                    cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined." << endl;
                    errorCount++;
                }
               (yyval.node) = new ASTNode((yyvsp[0].string), true);
           }
#line 1969 "limbaj.tab.c"
    break;

  case 100: /* expression: INT  */
#line 556 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 1977 "limbaj.tab.c"
    break;

  case 101: /* expression: FLOAT  */
#line 559 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 1985 "limbaj.tab.c"
    break;

  case 102: /* expression: function_call  */
#line 562 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 1993 "limbaj.tab.c"
    break;

  case 103: /* expression: object_access  */
#line 565 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2001 "limbaj.tab.c"
    break;

  case 104: /* boolean_expression: TRUE  */
#line 570 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true);
                   }
#line 2009 "limbaj.tab.c"
    break;

  case 105: /* boolean_expression: FALSE  */
#line 573 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false);
                   }
#line 2017 "limbaj.tab.c"
    break;

  case 106: /* boolean_expression: '(' boolean_expression ')'  */
#line 576 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 2025 "limbaj.tab.c"
    break;

  case 107: /* boolean_expression: expression '>' expression  */
#line 579 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2033 "limbaj.tab.c"
    break;

  case 108: /* boolean_expression: expression '<' expression  */
#line 582 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2041 "limbaj.tab.c"
    break;

  case 109: /* boolean_expression: expression GE expression  */
#line 585 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2049 "limbaj.tab.c"
    break;

  case 110: /* boolean_expression: expression LE expression  */
#line 588 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2057 "limbaj.tab.c"
    break;

  case 111: /* boolean_expression: expression EQ expression  */
#line 591 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2065 "limbaj.tab.c"
    break;

  case 112: /* boolean_expression: expression NEQ expression  */
#line 594 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2073 "limbaj.tab.c"
    break;

  case 113: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 597 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2081 "limbaj.tab.c"
    break;

  case 114: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 600 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2089 "limbaj.tab.c"
    break;

  case 115: /* boolean_expression: '!' boolean_expression  */
#line 603 "limbaj.y"
                                            {
                      (yyval.node) = new ASTNode(ASTNode::Operator::NOT, (yyvsp[0].node), nullptr);
                   }
#line 2097 "limbaj.tab.c"
    break;


#line 2101 "limbaj.tab.c"

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

#line 608 "limbaj.y"

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

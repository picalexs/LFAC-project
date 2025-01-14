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
    #include <utility>
    using namespace std;
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
    extern int yylex();
    void yyerror(const char * s);
    class SymTable* current;

    SymTable globalSymTable("global");
    SymTable* currentSymTable = &globalSymTable;

    void printSymbolTables() 
    {
        globalSymTable.printAskedScopes(); //cele cerute
        globalSymTable.printAllScopes(); //toate
    }

    struct Param {
        char* type;
        char* name;
        int size;// daca e vector
    };

    struct ParamListNonSTL {
        Param* params;
        int count;
    };

    struct Arg {
        char* type;
    };

    struct ArgList {
        Arg* args;
        int count;
    };

#line 116 "limbaj.tab.c"

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
  YYSYMBOL_argument = 95,                  /* argument  */
  YYSYMBOL_expression = 96,                /* expression  */
  YYSYMBOL_boolean_expression = 97         /* boolean_expression  */
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
#define YYLAST   635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

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
       0,    98,    98,    98,   110,   111,   114,   115,   118,   126,
     147,   162,   181,   213,   236,   259,   279,   304,   318,   334,
     335,   338,   339,   344,   343,   370,   369,   382,   383,   386,
     387,   392,   391,   405,   406,   409,   410,   411,   416,   415,
     428,   435,   447,   454,   463,   488,   499,   527,   526,   537,
     538,   539,   540,   544,   545,   546,   547,   548,   552,   553,
     554,   555,   558,   588,   618,   643,   671,   679,   697,   704,
     723,   732,   733,   738,   742,   737,   748,   751,   750,   762,
     761,   773,   772,   783,   784,   787,   807,   810,   813,   821,
     831,   839,   847,   850,   855,   858,   870,   877,   884,   888,
     895,   898,   901,   904,   907,   910,   913,   916,   919,   927,
     945,   948,   951,   958,   967,   970,   973,   976,   984,   987,
     990,   993,   996,   999,  1002,  1005,  1008
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
  "type_of_statement", "return_statement", "argument_list", "argument",
  "expression", "boolean_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-207)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -207,    10,    18,  -207,    22,   108,    18,  -207,  -207,    24,
      43,    59,   108,  -207,  -207,    90,   132,     3,    79,    93,
      59,  -207,  -207,   131,  -207,   180,     4,   307,     4,   102,
     119,  -207,  -207,   123,   120,  -207,  -207,   205,  -207,  -207,
       4,     4,    38,  -207,  -207,   154,   166,  -207,  -207,   601,
       8,   307,   307,  -207,  -207,  -207,   570,   251,    30,   163,
    -207,   118,   158,  -207,  -207,  -207,   620,   307,     4,   167,
    -207,  -207,     4,     4,     4,     4,     4,     4,  -207,     7,
    -207,   504,     5,     4,     4,     4,     4,     4,     4,  -207,
     307,   307,   122,   118,   566,   172,   176,    -8,  -207,   191,
    -207,     6,  -207,   570,    19,    53,   195,    60,    60,   203,
     203,   203,   203,  -207,   246,  -207,   580,   580,   580,   580,
     580,   580,  -207,   192,  -207,   307,    70,    42,   171,   211,
     212,   216,   218,   228,     4,  -207,   322,   245,  -207,  -207,
     240,   244,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
     223,   231,  -207,   118,   118,  -207,   307,  -207,   307,   248,
     262,   614,   300,  -207,     4,     4,   307,   307,   108,   213,
     257,   580,  -207,   264,  -207,  -207,   265,     4,     4,   272,
    -207,    71,  -207,    77,  -207,  -207,  -207,  -207,   273,    67,
      74,   157,   177,   307,   266,   267,   526,   193,   278,   279,
     548,   243,  -207,  -207,  -207,   570,    19,    97,   126,   566,
    -207,  -207,   566,  -207,  -207,  -207,  -207,   313,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   343,   285,
     364,   286,   293,    89,  -207,   566,  -207,   566,   566,    44,
     296,  -207,   385,   406,   427,  -207,  -207,  -207,  -207,   297,
     282,   566,  -207,  -207,   448,   298,  -207,   566,   469,  -207
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    28,     1,     0,     5,    27,    30,    31,     0,
       0,    20,     4,     7,    29,     0,     0,     0,     0,     0,
      19,    22,     6,     0,     8,     0,     0,     0,     0,     0,
       0,     3,    21,     0,     0,    35,    36,     0,    34,    37,
       0,     0,   108,   110,   111,     0,     0,   113,   112,     0,
       0,     0,     0,   117,   114,   115,     0,     0,     0,     0,
      47,    42,     0,    32,    33,   106,     0,    97,     0,     0,
      17,    18,     0,     0,     0,     0,     0,     0,     9,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    42,     0,     0,     0,     0,    40,     0,
     107,     0,    96,    98,    99,     0,    71,   100,   101,   102,
     103,   104,   105,    11,     0,   116,   118,   119,   122,   123,
     121,   120,   124,   125,    15,     0,     0,    66,    68,     0,
       0,     0,     0,     0,     0,    58,     0,     0,    52,    53,
       0,    57,    59,    60,    61,    54,    55,    83,    84,    56,
      43,    45,    38,     0,    42,    85,     0,   109,    97,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,    94,    48,     0,    51,    50,     0,     0,     0,     0,
      41,     0,    95,     0,    13,    14,    12,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    65,    64,    62,    63,     0,     0,     0,
      25,    72,     0,    67,    69,    73,    79,     0,    86,    87,
      88,    89,    93,    92,    90,    91,    44,    46,     0,     0,
       0,     0,     0,     0,    39,     0,    24,     0,     0,    66,
       0,    70,     0,     0,     0,    81,    26,    74,    80,     0,
      76,     0,    77,    75,     0,     0,    82,     0,     0,    78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,  -207,  -207,    -4,  -207,  -207,   304,  -207,
    -207,  -207,  -207,  -207,   314,  -207,  -207,   290,  -207,  -207,
     -89,   175,  -207,  -207,  -206,  -134,  -131,    99,  -207,   -83,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
     -47,  -207,  -207,  -207,   183,   186,   161,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,   135,    19,    20,    21,   188,
      36,   229,     5,     6,     7,    15,    37,    38,    39,   179,
      97,    98,    31,    94,   136,   137,   138,   139,   140,    47,
     142,   231,   250,   253,   255,   143,   232,   144,   249,   145,
      48,   147,   148,   149,   101,   102,    56,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    13,   173,   228,   126,   174,   230,   152,    22,    40,
       3,   141,    72,    73,    74,    75,    76,    77,    41,    35,
     115,   155,    27,   113,    80,    82,   114,    90,    91,   242,
      42,   243,   244,    35,    72,    73,    74,    75,    76,    77,
     153,    90,    91,    43,    44,   254,     4,   146,     8,    28,
      16,   258,    67,   141,   156,    79,    67,    72,    73,    74,
      75,    76,    77,   122,   123,   181,    74,    75,    76,    77,
      17,    72,    73,    74,    75,    76,    77,    92,    72,    73,
      74,    75,    76,    77,    68,   163,   210,    69,   164,   146,
     164,    69,   211,    69,   173,    18,   173,   174,   162,   174,
     157,    72,    73,    74,    75,    76,    77,    23,   173,   173,
     173,   174,   174,   174,   213,   239,   128,    29,   153,   153,
     173,   214,    30,   174,   173,   156,   141,   174,    59,   141,
      72,    73,    74,    75,    76,    77,    60,    61,   124,   191,
     192,   125,   197,   201,   226,   141,     9,   141,    24,   206,
     241,    25,   141,    10,   141,   141,    95,    33,    62,   141,
     141,   141,   146,    96,   193,   146,   217,    34,   141,     9,
      70,   141,   215,   227,   141,   141,    10,    93,    26,    90,
      91,   146,    71,   146,    99,    40,    49,    50,   146,    58,
     146,   146,   216,   106,    41,   146,   146,   146,   150,    90,
      91,    65,    66,   151,   146,   154,    42,   146,   221,   158,
     146,   146,    77,    81,    90,    90,    91,   165,    40,    43,
      44,    45,    46,    63,    51,   166,   167,    52,   103,   105,
     168,    33,   169,   107,   108,   109,   110,   111,   112,    42,
      53,    34,   170,     9,   116,   117,   118,   119,   120,   121,
      10,    40,    43,    44,   194,   195,    54,    55,   225,   176,
      41,   175,    40,   -70,   184,    90,    91,    89,    51,   177,
      40,    52,    42,    90,    91,   161,    51,   178,   185,    52,
     202,   218,   219,    42,    53,    43,    44,   159,   160,   209,
     212,    42,    53,   222,   223,   171,    43,    44,   198,   199,
      54,    55,   235,   237,    43,    44,   203,   204,    54,    55,
     238,   245,    40,   252,   251,   257,   187,   103,    51,   103,
      14,    52,    90,    91,    32,   189,   190,    64,   180,   233,
     196,   200,   240,    42,    53,    90,    91,   205,   207,   208,
     172,   183,   182,     0,     0,     0,    43,    44,   127,   128,
      54,    55,   129,     0,   130,   131,   132,   133,     0,   134,
       9,   234,     0,     0,     0,     0,     0,    10,     0,   127,
     128,     0,     0,   129,     0,   130,   131,   132,   133,     0,
     134,     9,   236,     0,     0,     0,     0,     0,    10,     0,
     127,   128,     0,     0,   129,     0,   130,   131,   132,   133,
       0,   134,     9,   246,     0,     0,     0,     0,     0,    10,
       0,   127,   128,     0,     0,   129,     0,   130,   131,   132,
     133,     0,   134,     9,   247,     0,     0,     0,     0,     0,
      10,     0,   127,   128,     0,     0,   129,     0,   130,   131,
     132,   133,     0,   134,     9,   248,     0,     0,     0,     0,
       0,    10,     0,   127,   128,     0,     0,   129,     0,   130,
     131,   132,   133,     0,   134,     9,   256,     0,     0,     0,
       0,     0,    10,     0,   127,   128,     0,     0,   129,     0,
     130,   131,   132,   133,     0,   134,     9,   259,     0,     0,
       0,     0,     0,    10,     0,   127,   128,     0,     0,   129,
       0,   130,   131,   132,   133,     0,   134,     9,    72,    73,
      74,    75,    76,    77,    10,     0,    83,    84,     0,   100,
       0,     0,     0,     0,    85,    86,     0,     0,    87,    88,
      72,    73,    74,    75,    76,    77,     0,     0,    83,    84,
       0,   220,     0,     0,     0,     0,    85,    86,     0,     0,
      87,    88,    72,    73,    74,    75,    76,    77,     0,     0,
      83,    84,     0,   224,     0,     0,     0,     0,    85,    86,
       0,     0,    87,    88,    72,    73,    74,    75,    76,    77,
       0,     0,    83,    84,    72,    73,    74,    75,    76,    77,
      85,    86,   127,   128,    87,    88,   129,     0,   130,   131,
     132,   133,     0,   134,     9,    72,    73,    74,    75,    76,
      77,    10,     0,     0,     0,     0,     0,    78,    72,    73,
      74,    75,    76,    77,    72,    73,    74,    75,    76,    77,
     186,     0,     0,     0,     0,   100
};

static const yytype_int16 yycheck[] =
{
      27,     5,   136,   209,    93,   136,   212,    15,    12,     5,
       0,    94,     4,     5,     6,     7,     8,     9,    14,    23,
      15,    15,    19,    16,    51,    52,    19,    22,    23,   235,
      26,   237,   238,    37,     4,     5,     6,     7,     8,     9,
      48,    22,    23,    39,    40,   251,    28,    94,    26,    46,
      26,   257,    14,   136,    48,    47,    14,     4,     5,     6,
       7,     8,     9,    90,    91,   154,     6,     7,     8,     9,
      27,     4,     5,     6,     7,     8,     9,    47,     4,     5,
       6,     7,     8,     9,    46,    15,    15,    49,    46,   136,
      46,    49,    15,    49,   228,    36,   230,   228,   125,   230,
      47,     4,     5,     6,     7,     8,     9,    17,   242,   243,
     244,   242,   243,   244,    47,    26,    27,    38,    48,    48,
     254,    47,    29,   254,   258,    48,   209,   258,    26,   212,
       4,     5,     6,     7,     8,     9,    17,    14,    16,   166,
     167,    19,   169,   170,    47,   228,    38,   230,    16,   176,
     233,    19,   235,    45,   237,   238,    38,    26,    38,   242,
     243,   244,   209,    45,   168,   212,   193,    36,   251,    38,
      16,   254,    15,    47,   257,   258,    45,    14,    46,    22,
      23,   228,    16,   230,    26,     5,    25,    26,   235,    28,
     237,   238,    15,    26,    14,   242,   243,   244,    26,    22,
      23,    40,    41,    27,   251,    14,    26,   254,    15,    14,
     257,   258,     9,    52,    22,    22,    23,    46,     5,    39,
      40,    41,    42,    18,    11,    14,    14,    14,    67,    68,
      14,    26,    14,    72,    73,    74,    75,    76,    77,    26,
      27,    36,    14,    38,    83,    84,    85,    86,    87,    88,
      45,     5,    39,    40,    41,    42,    43,    44,    15,    19,
      14,    16,     5,    19,    16,    22,    23,    16,    11,    46,
       5,    14,    26,    22,    23,   114,    11,    46,    16,    14,
      16,    15,    15,    26,    27,    39,    40,    41,    42,    17,
      17,    26,    27,    15,    15,   134,    39,    40,    41,    42,
      43,    44,    17,    17,    39,    40,    41,    42,    43,    44,
      17,    15,     5,    31,    17,    17,    16,   156,    11,   158,
       6,    14,    22,    23,    20,   164,   165,    37,   153,    16,
     169,   170,   233,    26,    27,    22,    23,   176,   177,   178,
      18,   158,   156,    -1,    -1,    -1,    39,    40,    26,    27,
      43,    44,    30,    -1,    32,    33,    34,    35,    -1,    37,
      38,    18,    -1,    -1,    -1,    -1,    -1,    45,    -1,    26,
      27,    -1,    -1,    30,    -1,    32,    33,    34,    35,    -1,
      37,    38,    18,    -1,    -1,    -1,    -1,    -1,    45,    -1,
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
      -1,    32,    33,    34,    35,    -1,    37,    38,     4,     5,
       6,     7,     8,     9,    45,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    24,    25,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      24,    25,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    24,    25,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,     4,     5,     6,     7,     8,     9,
      20,    21,    26,    27,    24,    25,    30,    -1,    32,    33,
      34,    35,    -1,    37,    38,     4,     5,     6,     7,     8,
       9,    45,    -1,    -1,    -1,    -1,    -1,    16,     4,     5,
       6,     7,     8,     9,     4,     5,     6,     7,     8,     9,
      16,    -1,    -1,    -1,    -1,    15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,    52,     0,    28,    62,    63,    64,    26,    38,
      45,    53,    54,    55,    64,    65,    26,    27,    36,    56,
      57,    58,    55,    17,    16,    19,    46,    19,    46,    38,
      29,    72,    58,    26,    36,    55,    60,    66,    67,    68,
       5,    14,    26,    39,    40,    41,    42,    79,    90,    96,
      96,    11,    14,    27,    43,    44,    96,    97,    96,    26,
      17,    14,    38,    18,    67,    96,    96,    14,    46,    49,
      16,    16,     4,     5,     6,     7,     8,     9,    16,    47,
      97,    96,    97,    12,    13,    20,    21,    24,    25,    16,
      22,    23,    47,    14,    73,    38,    45,    70,    71,    26,
      15,    94,    95,    96,    97,    96,    26,    96,    96,    96,
      96,    96,    96,    16,    19,    15,    96,    96,    96,    96,
      96,    96,    97,    97,    16,    19,    70,    26,    27,    30,
      32,    33,    34,    35,    37,    55,    74,    75,    76,    77,
      78,    79,    80,    85,    87,    89,    90,    91,    92,    93,
      26,    27,    15,    48,    14,    15,    48,    47,    14,    41,
      42,    96,    97,    15,    46,    46,    14,    14,    14,    14,
      14,    96,    18,    75,    76,    16,    19,    46,    46,    69,
      71,    70,    95,    94,    16,    16,    16,    16,    59,    96,
      96,    97,    97,    55,    41,    42,    96,    97,    41,    42,
      96,    97,    16,    41,    42,    96,    97,    96,    96,    17,
      15,    15,    17,    47,    47,    15,    15,    97,    15,    15,
      15,    15,    15,    15,    15,    15,    47,    47,    74,    61,
      74,    81,    86,    16,    18,    17,    18,    17,    17,    26,
      77,    79,    74,    74,    74,    15,    18,    18,    18,    88,
      82,    17,    31,    83,    74,    84,    18,    17,    74,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    52,    51,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    59,    58,    61,    60,    62,    62,    63,
      63,    65,    64,    66,    66,    67,    67,    67,    69,    68,
      70,    70,    70,    71,    71,    71,    71,    73,    72,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    79,    79,    81,    82,    80,    83,    84,    83,    86,
      85,    88,    87,    89,    89,    90,    91,    91,    91,    91,
      92,    92,    92,    92,    93,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     5,
       5,     6,     8,     8,     8,     6,     8,     5,     5,     1,
       0,     2,     1,     0,    10,     0,    10,     1,     0,     2,
       1,     0,     6,     2,     1,     1,     1,     1,     0,     8,
       1,     3,     0,     2,     5,     2,     5,     0,     5,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     4,     1,     4,
       1,     3,     6,     0,     0,    10,     0,     0,     5,     0,
       8,     0,    11,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     3,     1,     0,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2
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
#line 98 "limbaj.y"
          {
            currentSymTable->enterScope("Global", "global");
        }
#line 1452 "limbaj.tab.c"
    break;

  case 3: /* PROGRAM: $@1 class_section var_section func_section main_function  */
#line 102 "limbaj.y"
        {
            currentSymTable->leaveScope();
            cout << "The program is correct!" << endl;
            printSymbolTables();
        }
#line 1462 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID ';'  */
#line 119 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-1].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-1].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-2].valtype), (yyvsp[-1].string));
                }
#line 1474 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 127 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    
                    auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }

                    string rtype=(yyvsp[-1].node)->getType();
                    if(strcmp((yyvsp[-4].valtype),rtype.c_str())!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got "<<rtype<<". Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), result);
                }
#line 1499 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: BOOL BOOLID ASSIGN boolean_expression ';'  */
#line 148 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    string rtype=(yyvsp[-1].node)->getType();
                    currentSymTable->addVar("bool", (yyvsp[-3].string), result);
                }
#line 1518 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 163 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-4].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if((yyvsp[-2].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector((yyvsp[-5].valtype), (yyvsp[-4].string), get<int>(result));
                }
#line 1541 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 182 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if((yyvsp[-4].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }

                    auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(valueResult)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    string rtype=(yyvsp[-1].node)->getType();

                    if(strcmp((yyvsp[-7].valtype),rtype.c_str())!=0 || strcmp((yyvsp[-7].valtype),"bool")==0 || rtype=="bool")
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got "<<rtype<<". Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>(result), valueResult);
                }
#line 1577 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID '[' expression ']' ASSIGN CHAR ';'  */
#line 213 "limbaj.y"
                                                            {
                    if (currentSymTable->isDefined((yyvsp[-6].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    if(strcmp((yyvsp[-7].valtype),"char")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got char Line: " << yylineno << endl;
                        return -1;
                    }
                    
                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if((yyvsp[-4].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("char", (yyvsp[-6].string), get<int>(result), (yyvsp[-1].charval));
                }
#line 1605 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: TYPE ID '[' expression ']' ASSIGN STRING ';'  */
#line 236 "limbaj.y"
                                                              {
                    if (currentSymTable->isDefined((yyvsp[-6].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    if(strcmp((yyvsp[-7].valtype),"string")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got string Line: " << yylineno << endl;
                        return -1;
                    }
                    
                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if((yyvsp[-4].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("string", (yyvsp[-6].string), get<int>(result), (yyvsp[-1].string));
                }
#line 1633 "limbaj.tab.c"
    break;

  case 15: /* var_declaration: BOOL BOOLID '[' expression ']' ';'  */
#line 259 "limbaj.y"
                                                    {
                    if (currentSymTable->isDefined((yyvsp[-4].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }

                    string rtype=(yyvsp[-2].node)->getType();
                    if((yyvsp[-2].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("bool", (yyvsp[-4].string), get<int>(result));
                }
#line 1658 "limbaj.tab.c"
    break;

  case 16: /* var_declaration: BOOL BOOLID '[' expression ']' ASSIGN boolean_expression ';'  */
#line 280 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    if((yyvsp[-4].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                        return -1;
                    }

                    auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(valueResult)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVector("bool", (yyvsp[-6].string), get<int>(result), valueResult);
                }
#line 1687 "limbaj.tab.c"
    break;

  case 17: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 305 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }

                    if(strcmp((yyvsp[-4].valtype),"char")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got char Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].charval));
                }
#line 1705 "limbaj.tab.c"
    break;

  case 18: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 319 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string), "identifier")) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    if(strcmp((yyvsp[-4].valtype),"string")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got string Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].string));
                }
#line 1722 "limbaj.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 344 "limbaj.y"
    {
        if (currentSymTable->isDefined((yyvsp[-3].string), "function")) 
        {
            cout << "Error: Function '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
            return -1;
        }
        vector<tuple<string,string,string>> tmp;
        for(int i=0;i<(yyvsp[-1].params)->count;i++)
        {
            tmp.push_back(make_tuple((yyvsp[-1].params)->params[i].type,(yyvsp[-1].params)->params[i].name,to_string((yyvsp[-1].params)->params[i].size)));
        }
        currentSymTable->enterScope((yyvsp[-3].string), "function", tmp, (yyvsp[-4].valtype));
        
        delete((yyvsp[-1].params)->params);
        delete((yyvsp[-1].params));
    }
#line 1743 "limbaj.tab.c"
    break;

  case 24: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 361 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1751 "limbaj.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 370 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1760 "limbaj.tab.c"
    break;

  case 26: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 375 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1768 "limbaj.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 392 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1777 "limbaj.tab.c"
    break;

  case 32: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 399 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1785 "limbaj.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 416 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1794 "limbaj.tab.c"
    break;

  case 39: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 421 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1802 "limbaj.tab.c"
    break;

  case 40: /* parameter_list: parameter  */
#line 428 "limbaj.y"
                           {
                    (yyval.params) = new ParamListNonSTL;
                    (yyval.params)->params = new Param[1];
                    (yyval.params)->params[0] = *(yyvsp[0].param);
                    (yyval.params)->count = 1;
                    delete (yyvsp[0].param);
                }
#line 1814 "limbaj.tab.c"
    break;

  case 41: /* parameter_list: parameter_list ',' parameter  */
#line 435 "limbaj.y"
                                              {
                    (yyval.params) = (yyvsp[-2].params);
                    Param* newParams = new Param[(yyval.params)->count + 1];
                    for (int i = 0; i < (yyval.params)->count; ++i) {
                        newParams[i] = (yyval.params)->params[i];
                    }
                    newParams[(yyval.params)->count] = *(yyvsp[0].param);
                    delete[] (yyval.params)->params;
                    (yyval.params)->params = newParams;
                    (yyval.params)->count++;
                    delete (yyvsp[0].param);
               }
#line 1831 "limbaj.tab.c"
    break;

  case 42: /* parameter_list: %empty  */
#line 447 "limbaj.y"
                               {
                    (yyval.params) = new ParamListNonSTL;
                    (yyval.params)->params = nullptr;
                    (yyval.params)->count = 0;
               }
#line 1841 "limbaj.tab.c"
    break;

  case 43: /* parameter: TYPE ID  */
#line 454 "limbaj.y"
                    {
                if(currentSymTable->isDefined((yyvsp[0].string), "identifier")){
                    cout << "Error: Parameter '" << (yyvsp[0].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.param) = new Param;
                (yyval.param)->type = (yyvsp[-1].valtype);
                (yyval.param)->name = (yyvsp[0].string);
            }
#line 1855 "limbaj.tab.c"
    break;

  case 44: /* parameter: TYPE ID '[' expression ']'  */
#line 463 "limbaj.y"
                                        {
                if(currentSymTable->isDefined((yyvsp[-3].string), "identifier")){
                    cout << "Error: Parameter '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }

                auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if((yyvsp[-1].node)->getType() != "int")
                {
                    cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                    return -1;
                }

                (yyval.param) = new Param;
                (yyval.param)->size = get<int>(result);
                (yyval.param)->type = new char[20];
                strcpy((yyval.param)->type,"vector<");
                strcat((yyval.param)->type,(yyvsp[-4].valtype));
                strcat((yyval.param)->type,">");
                (yyval.param)->name = (yyvsp[-3].string);
            }
#line 1885 "limbaj.tab.c"
    break;

  case 45: /* parameter: BOOL BOOLID  */
#line 488 "limbaj.y"
                          {
                if(currentSymTable->isDefined((yyvsp[0].string), "identifier")){
                    cout << "Error: Parameter '" << (yyvsp[0].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }

                (yyval.param) = new Param;
                (yyval.param)->type = new char[5];
                strcpy((yyval.param)->type,"bool");
                (yyval.param)->name = (yyvsp[0].string);
            }
#line 1901 "limbaj.tab.c"
    break;

  case 46: /* parameter: BOOL BOOLID '[' expression ']'  */
#line 499 "limbaj.y"
                                             {
                if(currentSymTable->isDefined((yyvsp[-3].string), "identifier")){
                    cout << "Error: Parameter '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                    return -1;
                }

                auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if((yyvsp[-1].node)->getType() != "int")
                {
                    cout<<"Error: Invalid array size! (size has to be of type int) Line: " << yylineno << endl;
                    return -1;
                }
                
                (yyval.param) = new Param;
                (yyval.param)->size = get<int>(result);
                (yyval.param)->type = new char[20];
                strcpy((yyval.param)->type,"vector<bool>");
                (yyval.param)->name = (yyvsp[-3].string);
            }
#line 1929 "limbaj.tab.c"
    break;

  case 47: /* $@6: %empty  */
#line 527 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1937 "limbaj.tab.c"
    break;

  case 48: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 531 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1945 "limbaj.tab.c"
    break;

  case 62: /* assignment: left_value ASSIGN expression  */
#line 558 "limbaj.y"
                                          {
                auto lResult=(yyvsp[-2].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                auto rResult=(yyvsp[0].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(rResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=(yyvsp[-2].node)->getType();
                string rtype=(yyvsp[0].node)->getType();
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=(yyvsp[-2].node)->getIdName();
                int index=(yyvsp[-2].node)->getVectorIndex();

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
#line 1980 "limbaj.tab.c"
    break;

  case 63: /* assignment: left_value ASSIGN boolean_expression  */
#line 588 "limbaj.y"
                                                  {
                auto lResult=(yyvsp[-2].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                auto rResult=(yyvsp[0].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(rResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=(yyvsp[-2].node)->getType();
                string rtype="bool";
                if (ltype != rtype || strcmp("bool",ltype.c_str())!=0) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=(yyvsp[-2].node)->getIdName();
                int index=(yyvsp[-2].node)->getVectorIndex();

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
#line 2015 "limbaj.tab.c"
    break;

  case 64: /* assignment: left_value ASSIGN STRING  */
#line 618 "limbaj.y"
                                      {
                auto lResult=(yyvsp[-2].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=(yyvsp[-2].node)->getType();
                if (strcmp("string",ltype.c_str())!=0) {
                    cout << "Error: Assignment type mismatch. Expected string but got " << (yyvsp[-2].node) << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=(yyvsp[-2].node)->getIdName();
                int index=(yyvsp[-2].node)->getVectorIndex();

                Value rResult=(yyvsp[0].string);

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
#line 2045 "limbaj.tab.c"
    break;

  case 65: /* assignment: left_value ASSIGN CHAR  */
#line 643 "limbaj.y"
                                    {
                auto lResult=(yyvsp[-2].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=(yyvsp[-2].node)->getType();
                string rtype="char";
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << ". Line: " << yylineno << endl;
                    return -1;
                }

                string idName=(yyvsp[-2].node)->getIdName();
                int index=(yyvsp[-2].node)->getVectorIndex();

                Value rResult=(yyvsp[0].charval);

                if(index!=-1){
                    currentSymTable->changeVectorElement(idName,index,rResult);
                }
                else{
                    currentSymTable->changeVar(idName,rResult);
                }
           }
#line 2076 "limbaj.tab.c"
    break;

  case 66: /* left_value: ID  */
#line 672 "limbaj.y"
            {
                if (!currentSymTable->isDefined((yyvsp[0].string), "identifier")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string));
            }
#line 2088 "limbaj.tab.c"
    break;

  case 67: /* left_value: ID '[' expression ']'  */
#line 679 "limbaj.y"
                                    {
                if(!currentSymTable->isDefined((yyvsp[-3].string), "identifier")){
                    cout << "Error: Variable '" << (yyvsp[-3].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }

                auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if((yyvsp[-1].node)->getType() != "int")
                {
                    cout<<"Error: Invalid array index! (index has to be of type int). Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node) = new ASTNode((yyvsp[-3].string), get<int>(result), true);
            }
#line 2111 "limbaj.tab.c"
    break;

  case 68: /* left_value: BOOLID  */
#line 697 "limbaj.y"
                    {
                if (!currentSymTable->isDefined((yyvsp[0].string), "identifier")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string));
            }
#line 2123 "limbaj.tab.c"
    break;

  case 69: /* left_value: BOOLID '[' expression ']'  */
#line 705 "limbaj.y"
            {
                if (!currentSymTable->isDefined((yyvsp[-3].string), "identifier")) {
                    cout << "Error: Variable '" << (yyvsp[-3].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }

                auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if((yyvsp[-1].node)->getType() != "int")
                {
                    cout<<"Error: Invalid array index! (index has to be of type int). Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node) = new ASTNode((yyvsp[-3].string), get<int>(result), true);
            }
#line 2146 "limbaj.tab.c"
    break;

  case 70: /* left_value: object_access  */
#line 723 "limbaj.y"
                           {
                if(!currentSymTable->isDefined((yyvsp[0].string),"class")){
                    cout << "Error: Class '" << (yyvsp[0].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode();
            }
#line 2158 "limbaj.tab.c"
    break;

  case 71: /* object_access: ID '.' ID  */
#line 732 "limbaj.y"
                          {(yyval.string)=(yyvsp[-2].string);}
#line 2164 "limbaj.tab.c"
    break;

  case 72: /* object_access: ID '.' ID '(' argument_list ')'  */
#line 733 "limbaj.y"
                                                { (yyval.string)=(yyvsp[-5].string);}
#line 2170 "limbaj.tab.c"
    break;

  case 73: /* $@7: %empty  */
#line 738 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 2178 "limbaj.tab.c"
    break;

  case 74: /* $@8: %empty  */
#line 742 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2186 "limbaj.tab.c"
    break;

  case 77: /* $@9: %empty  */
#line 751 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 2194 "limbaj.tab.c"
    break;

  case 78: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 755 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2202 "limbaj.tab.c"
    break;

  case 79: /* $@10: %empty  */
#line 762 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 2210 "limbaj.tab.c"
    break;

  case 80: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 766 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2218 "limbaj.tab.c"
    break;

  case 81: /* $@11: %empty  */
#line 773 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 2226 "limbaj.tab.c"
    break;

  case 82: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 777 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2234 "limbaj.tab.c"
    break;

  case 85: /* function_call: ID '(' argument_list ')'  */
#line 787 "limbaj.y"
                                         {
                  if (!currentSymTable->isDefined((yyvsp[-3].string), "function")) {
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called before being defined. Line: " << yylineno << endl;
                      return -1;
                  }
                  
                  vector<string> types;
                  for(int i=0;i<(yyvsp[-1].args)->count;i++)
                  {
                        types.push_back((yyvsp[-1].args)->args[i].type);
                  }
                  if(!currentSymTable->checkParamTypes((yyvsp[-3].string), types)){
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called with wrong parameters. Line: " << yylineno << endl;
                      return -1;
                  }
                  delete((yyvsp[-1].args)->args);
                  delete((yyvsp[-1].args));
              }
#line 2257 "limbaj.tab.c"
    break;

  case 86: /* print_statement: PRINT '(' CHAR ')'  */
#line 807 "limbaj.y"
                                    {
                    cout << "Print (char): " << (yyvsp[-1].charval) << endl;
                }
#line 2265 "limbaj.tab.c"
    break;

  case 87: /* print_statement: PRINT '(' STRING ')'  */
#line 810 "limbaj.y"
                                      {
                    cout << "Print (string): " << (yyvsp[-1].string) << endl;
                }
#line 2273 "limbaj.tab.c"
    break;

  case 88: /* print_statement: PRINT '(' expression ')'  */
#line 813 "limbaj.y"
                                          {
                    auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    (yyvsp[-1].node)->printResult();
                }
#line 2286 "limbaj.tab.c"
    break;

  case 89: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 821 "limbaj.y"
                                                  {
                    auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                        return -1;
                    }
                    (yyvsp[-1].node)->printResult();
                }
#line 2299 "limbaj.tab.c"
    break;

  case 90: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 831 "limbaj.y"
                                             {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        if(holds_alternative<monostate>(result)){
                            cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                            return -1;
                        }
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 2312 "limbaj.tab.c"
    break;

  case 91: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 839 "limbaj.y"
                                                     {
                        auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                        if(holds_alternative<monostate>(result)){
                            cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                            return -1;
                        }
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 2325 "limbaj.tab.c"
    break;

  case 92: /* type_of_statement: TYPEOF '(' STRING ')'  */
#line 847 "limbaj.y"
                                         {
                        cout<<"TypeOf: string"<<endl;
                  }
#line 2333 "limbaj.tab.c"
    break;

  case 93: /* type_of_statement: TYPEOF '(' CHAR ')'  */
#line 850 "limbaj.y"
                                       {
                        cout<<"TypeOf: char"<<endl;
                  }
#line 2341 "limbaj.tab.c"
    break;

  case 95: /* argument_list: argument_list ',' argument  */
#line 858 "limbaj.y"
                                           {
                    (yyval.args) = (yyvsp[-2].args);
                    Arg* newArgs = new Arg[(yyval.args)->count + 1];
                    for (int i = 0; i < (yyval.args)->count; ++i) {
                        newArgs[i] = (yyval.args)->args[i];
                    }
                    newArgs[(yyval.args)->count] = *(yyvsp[0].arg);
                    delete[] (yyval.args)->args;
                    (yyval.args)->args = newArgs;
                    (yyval.args)->count++;
                    delete (yyvsp[0].arg);
                }
#line 2358 "limbaj.tab.c"
    break;

  case 96: /* argument_list: argument  */
#line 870 "limbaj.y"
                         {
                    (yyval.args) = new ArgList;
                    (yyval.args)->args = new Arg[1];
                    (yyval.args)->args[0] = *(yyvsp[0].arg);
                    (yyval.args)->count = 1;
                    delete (yyvsp[0].arg);
                }
#line 2370 "limbaj.tab.c"
    break;

  case 97: /* argument_list: %empty  */
#line 877 "limbaj.y"
                              {
                    (yyval.args) = new ArgList;
                    (yyval.args)->args = nullptr;
                    (yyval.args)->count = 0;
                }
#line 2380 "limbaj.tab.c"
    break;

  case 98: /* argument: expression  */
#line 884 "limbaj.y"
                      {
                (yyval.arg) = new Arg;
                (yyval.arg)->type = strdup((yyvsp[0].node)->getType().c_str());
            }
#line 2389 "limbaj.tab.c"
    break;

  case 99: /* argument: boolean_expression  */
#line 888 "limbaj.y"
                                 {
                (yyval.arg) = new Arg;
                (yyval.arg)->type = strdup("bool");
            }
#line 2398 "limbaj.tab.c"
    break;

  case 100: /* expression: expression '+' expression  */
#line 895 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2406 "limbaj.tab.c"
    break;

  case 101: /* expression: expression '-' expression  */
#line 898 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2414 "limbaj.tab.c"
    break;

  case 102: /* expression: expression '*' expression  */
#line 901 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2422 "limbaj.tab.c"
    break;

  case 103: /* expression: expression '/' expression  */
#line 904 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2430 "limbaj.tab.c"
    break;

  case 104: /* expression: expression '%' expression  */
#line 907 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2438 "limbaj.tab.c"
    break;

  case 105: /* expression: expression '^' expression  */
#line 910 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2446 "limbaj.tab.c"
    break;

  case 106: /* expression: '-' expression  */
#line 913 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 2454 "limbaj.tab.c"
    break;

  case 107: /* expression: '(' expression ')'  */
#line 916 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 2462 "limbaj.tab.c"
    break;

  case 108: /* expression: ID  */
#line 919 "limbaj.y"
                {
                if (!currentSymTable->isDefined((yyvsp[0].string), "identifier")) 
                {
                    cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined. Line: " << yylineno << endl;
                    return -1;
                }
               (yyval.node) = new ASTNode((yyvsp[0].string));
           }
#line 2475 "limbaj.tab.c"
    break;

  case 109: /* expression: ID '[' expression ']'  */
#line 927 "limbaj.y"
                                   {
                if (!currentSymTable->isDefined((yyvsp[-3].string), "identifier")) 
                {
                    cout << "Error: Identifier '" << (yyvsp[-3].string) << "' not defined. Line: " << yylineno << endl;
                    return -1;
                }
                auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(result)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }
                if((yyvsp[-1].node)->getType() != "int")
                {
                    cout<<"Error: Invalid array index! (index has to be of type int). Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node) = new ASTNode((yyvsp[-3].string), get<int>(result),true);
           }
#line 2498 "limbaj.tab.c"
    break;

  case 110: /* expression: INT  */
#line 945 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 2506 "limbaj.tab.c"
    break;

  case 111: /* expression: FLOAT  */
#line 948 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 2514 "limbaj.tab.c"
    break;

  case 112: /* expression: function_call  */
#line 951 "limbaj.y"
                          {
                if(!currentSymTable->isDefined((yyvsp[0].string), "function")){
                    cout << "Error: Function '" << (yyvsp[0].string) << "' called before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node) = new ASTNode();
           }
#line 2526 "limbaj.tab.c"
    break;

  case 113: /* expression: object_access  */
#line 958 "limbaj.y"
                          {
                if(!currentSymTable->isDefined((yyvsp[0].string),"class")){
                    cout << "Error: Class '" << (yyvsp[0].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node) = new ASTNode();
           }
#line 2538 "limbaj.tab.c"
    break;

  case 114: /* boolean_expression: TRUE  */
#line 967 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true,true);
                   }
#line 2546 "limbaj.tab.c"
    break;

  case 115: /* boolean_expression: FALSE  */
#line 970 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false,false);
                   }
#line 2554 "limbaj.tab.c"
    break;

  case 116: /* boolean_expression: '(' boolean_expression ')'  */
#line 973 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 2562 "limbaj.tab.c"
    break;

  case 117: /* boolean_expression: BOOLID  */
#line 976 "limbaj.y"
                            {
                        if (!currentSymTable->isDefined((yyvsp[0].string), "identifier")) 
                        {
                            cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined. Line: " << yylineno << endl;
                            return -1;
                        }
                        (yyval.node) = new ASTNode((yyvsp[0].string));
                   }
#line 2575 "limbaj.tab.c"
    break;

  case 118: /* boolean_expression: expression '>' expression  */
#line 984 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2583 "limbaj.tab.c"
    break;

  case 119: /* boolean_expression: expression '<' expression  */
#line 987 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2591 "limbaj.tab.c"
    break;

  case 120: /* boolean_expression: expression GE expression  */
#line 990 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2599 "limbaj.tab.c"
    break;

  case 121: /* boolean_expression: expression LE expression  */
#line 993 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2607 "limbaj.tab.c"
    break;

  case 122: /* boolean_expression: expression EQ expression  */
#line 996 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2615 "limbaj.tab.c"
    break;

  case 123: /* boolean_expression: expression NEQ expression  */
#line 999 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2623 "limbaj.tab.c"
    break;

  case 124: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 1002 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2631 "limbaj.tab.c"
    break;

  case 125: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 1005 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2639 "limbaj.tab.c"
    break;

  case 126: /* boolean_expression: '!' boolean_expression  */
#line 1008 "limbaj.y"
                                            {
                      (yyval.node) = new ASTNode(ASTNode::Operator::NOT, (yyvsp[0].node), nullptr);
                   }
#line 2647 "limbaj.tab.c"
    break;


#line 2651 "limbaj.tab.c"

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

#line 1013 "limbaj.y"

 /*____________________________________________________________________________________________________________*/

void yyerror(const char * s) {
    cout << "Error: " << s << " at line: " << yylineno <<endl;
    return;
}

int main(int argc, char** argv) {
    current = new SymTable("Global");
    yyin = fopen(argv[1], "r");

    currentSymTable = &globalSymTable;
    
    yyparse();
    delete current;
    return 0;
}

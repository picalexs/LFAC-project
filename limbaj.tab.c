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

    SymTable globalSymTable("global");
    SymTable* currentSymTable = &globalSymTable;

    void printSymbolTables() 
    {
        globalSymTable.printAskedScopes(); //cele cerute
        globalSymTable.printAllScopes(); //toate
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
#define YYLAST   646

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

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
       0,    66,    66,    66,    78,    79,    82,    83,    86,    94,
     115,   130,   149,   181,   204,   227,   247,   272,   286,   302,
     303,   306,   307,   312,   311,   331,   330,   343,   344,   347,
     348,   353,   352,   366,   367,   370,   371,   372,   377,   376,
     389,   390,   391,   394,   400,   399,   410,   411,   412,   413,
     417,   418,   419,   420,   421,   425,   426,   427,   428,   431,
     461,   491,   516,   544,   552,   570,   577,   596,   601,   602,
     607,   611,   606,   617,   620,   619,   631,   630,   642,   641,
     652,   653,   656,   665,   668,   671,   675,   681,   685,   689,
     692,   697,   700,   701,   702,   703,   704,   708,   711,   714,
     717,   720,   723,   726,   729,   732,   740,   758,   761,   764,
     767,   772,   775,   778,   781,   789,   792,   795,   798,   801,
     804,   807,   810,   813
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

#define YYPACT_NINF (-201)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -201,    28,   -23,  -201,    52,     8,   -23,  -201,  -201,    58,
      89,    81,     8,  -201,  -201,   101,    55,   -15,    91,   112,
      81,  -201,  -201,    53,  -201,    71,    18,   300,    18,   117,
     110,  -201,  -201,   131,   126,  -201,  -201,    64,  -201,  -201,
      18,    18,     1,  -201,  -201,   150,   154,  -201,  -201,   612,
       5,   300,   300,  -201,  -201,  -201,   581,    70,    30,   159,
    -201,   137,   158,  -201,  -201,  -201,   631,   300,    18,   166,
    -201,  -201,    18,    18,    18,    18,    18,    18,  -201,    26,
    -201,   515,   163,    18,    18,    18,    18,    18,    18,  -201,
     300,   300,   144,   137,   577,   168,    -8,  -201,   181,  -201,
       3,   581,    39,    61,   187,    98,    98,   189,   189,   189,
     189,  -201,   316,  -201,   341,   341,   341,   341,   341,   341,
    -201,   190,  -201,   300,     6,    34,   175,   197,   211,   219,
     220,   221,    18,  -201,   333,   231,  -201,  -201,   217,   218,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
     137,   137,  -201,   300,  -201,   300,   236,   243,   625,   132,
    -201,    18,    18,   300,   300,     8,   246,   253,   341,  -201,
     245,  -201,  -201,   293,   232,  -201,     7,   581,    39,    11,
    -201,  -201,  -201,  -201,   248,   223,   237,   165,   184,   300,
     238,   247,   537,   195,   251,   254,   559,   233,  -201,  -201,
    -201,   581,    39,   577,  -201,  -201,   577,  -201,  -201,  -201,
    -201,   200,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
     354,   257,   375,   258,   259,    68,  -201,   577,  -201,   577,
     577,   -29,   256,  -201,   396,   417,   438,  -201,  -201,  -201,
    -201,   260,   250,   577,  -201,  -201,   459,   261,  -201,   577,
     480,  -201
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
       0,     0,   105,   107,   108,     0,     0,   110,   109,     0,
       0,     0,     0,   114,   111,   112,     0,     0,     0,     0,
      44,    42,     0,    32,    33,   103,     0,    96,     0,     0,
      17,    18,     0,     0,     0,     0,     0,     0,     9,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    42,     0,     0,     0,    40,     0,   104,
       0,    93,    95,     0,    68,    97,    98,    99,   100,   101,
     102,    11,     0,   113,   115,   116,   119,   120,   118,   117,
     121,   122,    15,     0,     0,    63,    65,     0,     0,     0,
       0,     0,     0,    55,     0,     0,    49,    50,     0,    54,
      56,    57,    58,    51,    52,    80,    81,    53,    43,    38,
       0,    42,    82,     0,   106,    96,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,    91,    45,
       0,    48,    47,     0,     0,    41,     0,    92,    94,     0,
      13,    14,    12,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    62,
      61,    59,    60,     0,    25,    69,     0,    64,    66,    70,
      76,     0,    83,    84,    85,    86,    90,    89,    87,    88,
       0,     0,     0,     0,     0,     0,    39,     0,    24,     0,
       0,    63,     0,    67,     0,     0,     0,    78,    26,    71,
      77,     0,    73,     0,    74,    72,     0,     0,    79,     0,
       0,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,  -201,  -201,    -4,  -201,  -201,   262,  -201,
    -201,  -201,  -201,  -201,   277,  -201,  -201,   226,  -201,  -201,
     -91,   118,  -201,  -201,  -200,   -31,     4,    66,  -201,   -78,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
     -53,  -201,  -201,  -201,   145,    47,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,   133,    19,    20,    21,   184,
      36,   221,     5,     6,     7,    15,    37,    38,    39,   174,
      96,    97,    31,    94,   134,   135,   136,   137,   138,    47,
     140,   223,   242,   245,   247,   141,   224,   142,   241,   143,
      48,   145,   146,   147,   100,    56,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    13,   124,   220,    27,     4,   222,   149,    22,    72,
      73,    74,    75,    76,    77,    67,   139,   161,   152,    35,
      69,   160,   204,    40,    80,    82,   205,   234,     3,   235,
     236,    28,    41,    35,    72,    73,    74,    75,    76,    77,
     150,   144,   111,   246,    42,   112,     9,    68,    67,   250,
      69,   153,    79,    10,   150,   150,   139,    43,    44,   153,
     176,    90,    91,   120,   121,    72,    73,    74,    75,    76,
      77,    24,    49,    50,    25,    58,    40,    92,     8,    33,
     161,   144,    63,    69,    16,    41,    89,    65,    66,    34,
      33,     9,    90,    91,   231,   126,   159,    42,    10,    81,
      34,    26,     9,   170,    74,    75,    76,    77,   154,    10,
      43,    44,    45,    46,   101,   103,    17,    18,    23,   105,
     106,   107,   108,   109,   110,   139,   178,    60,   139,    29,
     114,   115,   116,   117,   118,   119,   187,   188,   171,   193,
     197,    30,   139,    59,   139,    61,   202,   233,   183,   139,
     144,   139,   139,   144,    90,    91,   139,   139,   139,   158,
     122,   189,   211,   123,    62,   139,    70,   144,   139,   144,
      71,   139,   139,    93,   144,    95,   144,   144,   113,   168,
     209,   144,   144,   144,    98,    90,    91,    90,    91,   170,
     144,   170,   104,   144,   148,   151,   144,   144,    77,   210,
     177,   155,   101,   170,   170,   170,    90,    91,   185,   186,
     215,   163,    90,   192,   196,   170,   225,    90,    91,   170,
     201,   162,    90,    91,   171,   164,   171,    72,    73,    74,
      75,    76,    77,   165,   166,   167,   173,   -67,   171,   171,
     171,    72,    73,    74,    75,    76,    77,   172,   219,   203,
     171,    40,   180,   212,   171,    90,    91,    51,    40,   181,
      52,   198,   213,    64,    51,   206,   216,    52,   175,   217,
     207,   237,    42,    53,   227,   229,   230,   243,   249,    42,
      53,   244,    32,    14,   208,    43,    44,   190,   191,    54,
      55,   232,    43,    44,   194,   195,    54,    55,    40,     0,
     179,     0,     0,     0,    51,    40,     0,    52,     0,     0,
       0,    51,     0,     0,    52,     0,     0,     0,     0,    42,
      53,    40,     0,     0,     0,     0,    42,    53,     0,     0,
      41,     0,    43,    44,   199,   200,    54,    55,     0,    43,
      44,     0,    42,    54,    55,    72,    73,    74,    75,    76,
      77,   169,     0,     0,     0,    43,    44,   156,   157,   125,
     126,     0,     0,   127,     0,   128,   129,   130,   131,     0,
     132,     9,   226,     0,     0,     0,     0,     0,    10,     0,
     125,   126,     0,     0,   127,     0,   128,   129,   130,   131,
       0,   132,     9,   228,     0,     0,     0,     0,     0,    10,
       0,   125,   126,     0,     0,   127,     0,   128,   129,   130,
     131,     0,   132,     9,   238,     0,     0,     0,     0,     0,
      10,     0,   125,   126,     0,     0,   127,     0,   128,   129,
     130,   131,     0,   132,     9,   239,     0,     0,     0,     0,
       0,    10,     0,   125,   126,     0,     0,   127,     0,   128,
     129,   130,   131,     0,   132,     9,   240,     0,     0,     0,
       0,     0,    10,     0,   125,   126,     0,     0,   127,     0,
     128,   129,   130,   131,     0,   132,     9,   248,     0,     0,
       0,     0,     0,    10,     0,   125,   126,     0,     0,   127,
       0,   128,   129,   130,   131,     0,   132,     9,   251,     0,
       0,     0,     0,     0,    10,     0,   125,   126,     0,     0,
     127,     0,   128,   129,   130,   131,     0,   132,     9,    72,
      73,    74,    75,    76,    77,    10,     0,    83,    84,     0,
      99,     0,     0,     0,     0,    85,    86,     0,     0,    87,
      88,    72,    73,    74,    75,    76,    77,     0,     0,    83,
      84,     0,   214,     0,     0,     0,     0,    85,    86,     0,
       0,    87,    88,    72,    73,    74,    75,    76,    77,     0,
       0,    83,    84,     0,   218,     0,     0,     0,     0,    85,
      86,     0,     0,    87,    88,    72,    73,    74,    75,    76,
      77,     0,     0,    83,    84,     0,     0,     0,     0,     0,
       0,    85,    86,   125,   126,    87,    88,   127,     0,   128,
     129,   130,   131,     0,   132,     9,    72,    73,    74,    75,
      76,    77,    10,     0,     0,     0,     0,     0,    78,    72,
      73,    74,    75,    76,    77,    72,    73,    74,    75,    76,
      77,   182,     0,     0,     0,     0,    99
};

static const yytype_int16 yycheck[] =
{
      27,     5,    93,   203,    19,    28,   206,    15,    12,     4,
       5,     6,     7,     8,     9,    14,    94,    46,    15,    23,
      49,    15,    15,     5,    51,    52,    15,   227,     0,   229,
     230,    46,    14,    37,     4,     5,     6,     7,     8,     9,
      48,    94,    16,   243,    26,    19,    38,    46,    14,   249,
      49,    48,    47,    45,    48,    48,   134,    39,    40,    48,
     151,    22,    23,    90,    91,     4,     5,     6,     7,     8,
       9,    16,    25,    26,    19,    28,     5,    47,    26,    26,
      46,   134,    18,    49,    26,    14,    16,    40,    41,    36,
      26,    38,    22,    23,    26,    27,   123,    26,    45,    52,
      36,    46,    38,   134,     6,     7,     8,     9,    47,    45,
      39,    40,    41,    42,    67,    68,    27,    36,    17,    72,
      73,    74,    75,    76,    77,   203,   153,    17,   206,    38,
      83,    84,    85,    86,    87,    88,   163,   164,   134,   166,
     167,    29,   220,    26,   222,    14,   173,   225,    16,   227,
     203,   229,   230,   206,    22,    23,   234,   235,   236,   112,
      16,   165,   189,    19,    38,   243,    16,   220,   246,   222,
      16,   249,   250,    14,   227,    38,   229,   230,    15,   132,
      15,   234,   235,   236,    26,    22,    23,    22,    23,   220,
     243,   222,    26,   246,    26,    14,   249,   250,     9,    15,
     153,    14,   155,   234,   235,   236,    22,    23,   161,   162,
      15,    14,    22,   166,   167,   246,    16,    22,    23,   250,
     173,    46,    22,    23,   220,    14,   222,     4,     5,     6,
       7,     8,     9,    14,    14,    14,    19,    19,   234,   235,
     236,     4,     5,     6,     7,     8,     9,    16,    15,    17,
     246,     5,    16,    15,   250,    22,    23,    11,     5,    16,
      14,    16,    15,    37,    11,    17,    15,    14,   150,    15,
      47,    15,    26,    27,    17,    17,    17,    17,    17,    26,
      27,    31,    20,     6,    47,    39,    40,    41,    42,    43,
      44,   225,    39,    40,    41,    42,    43,    44,     5,    -1,
     155,    -1,    -1,    -1,    11,     5,    -1,    14,    -1,    -1,
      -1,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    26,
      27,     5,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      14,    -1,    39,    40,    41,    42,    43,    44,    -1,    39,
      40,    -1,    26,    43,    44,     4,     5,     6,     7,     8,
       9,    18,    -1,    -1,    -1,    39,    40,    41,    42,    26,
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
      -1,    32,    33,    34,    35,    -1,    37,    38,    18,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    26,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    -1,    37,    38,     4,
       5,     6,     7,     8,     9,    45,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    24,
      25,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    24,    25,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    24,    25,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    26,    27,    24,    25,    30,    -1,    32,
      33,    34,    35,    -1,    37,    38,     4,     5,     6,     7,
       8,     9,    45,    -1,    -1,    -1,    -1,    -1,    16,     4,
       5,     6,     7,     8,     9,     4,     5,     6,     7,     8,
       9,    16,    -1,    -1,    -1,    -1,    15
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
      17,    14,    38,    18,    67,    95,    95,    14,    46,    49,
      16,    16,     4,     5,     6,     7,     8,     9,    16,    47,
      96,    95,    96,    12,    13,    20,    21,    24,    25,    16,
      22,    23,    47,    14,    73,    38,    70,    71,    26,    15,
      94,    95,    96,    95,    26,    95,    95,    95,    95,    95,
      95,    16,    19,    15,    95,    95,    95,    95,    95,    95,
      96,    96,    16,    19,    70,    26,    27,    30,    32,    33,
      34,    35,    37,    55,    74,    75,    76,    77,    78,    79,
      80,    85,    87,    89,    90,    91,    92,    93,    26,    15,
      48,    14,    15,    48,    47,    14,    41,    42,    95,    96,
      15,    46,    46,    14,    14,    14,    14,    14,    95,    18,
      75,    76,    16,    19,    69,    71,    70,    95,    96,    94,
      16,    16,    16,    16,    59,    95,    95,    96,    96,    55,
      41,    42,    95,    96,    41,    42,    95,    96,    16,    41,
      42,    95,    96,    17,    15,    15,    17,    47,    47,    15,
      15,    96,    15,    15,    15,    15,    15,    15,    15,    15,
      74,    61,    74,    81,    86,    16,    18,    17,    18,    17,
      17,    26,    77,    79,    74,    74,    74,    15,    18,    18,
      18,    88,    82,    17,    31,    83,    74,    84,    18,    17,
      74,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    52,    51,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    59,    58,    61,    60,    62,    62,    63,
      63,    65,    64,    66,    66,    67,    67,    67,    69,    68,
      70,    70,    70,    71,    73,    72,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    79,    79,
      81,    82,    80,    83,    84,    83,    86,    85,    88,    87,
      89,    89,    90,    91,    91,    91,    91,    92,    92,    92,
      92,    93,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     5,
       5,     6,     8,     8,     8,     6,     8,     5,     5,     1,
       0,     2,     1,     0,    10,     0,    10,     1,     0,     2,
       1,     0,     6,     2,     1,     1,     1,     1,     0,     8,
       1,     3,     0,     2,     0,     5,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     1,     4,     1,     4,     1,     3,     6,
       0,     0,    10,     0,     0,     5,     0,     8,     0,    11,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     3,     1,     3,     1,     0,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2
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
#line 66 "limbaj.y"
          {
            currentSymTable->enterScope("Global", "global");
        }
#line 1432 "limbaj.tab.c"
    break;

  case 3: /* PROGRAM: $@1 class_section var_section func_section main_function  */
#line 70 "limbaj.y"
        {
            currentSymTable->leaveScope();
            cout << "The program is correct!" << endl;
            printSymbolTables();
        }
#line 1442 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID ';'  */
#line 87 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-1].string))) {
                        cout << "Error: Variable '" << (yyvsp[-1].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-2].valtype), (yyvsp[-1].string));
                }
#line 1454 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 95 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
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
#line 1479 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: BOOL BOOLID ASSIGN boolean_expression ';'  */
#line 116 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
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
#line 1498 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 131 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
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
#line 1521 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 150 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
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
#line 1557 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID '[' expression ']' ASSIGN CHAR ';'  */
#line 181 "limbaj.y"
                                                            {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
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
#line 1585 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: TYPE ID '[' expression ']' ASSIGN STRING ';'  */
#line 204 "limbaj.y"
                                                              {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
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
#line 1613 "limbaj.tab.c"
    break;

  case 15: /* var_declaration: BOOL BOOLID '[' expression ']' ';'  */
#line 227 "limbaj.y"
                                                    {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
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
#line 1638 "limbaj.tab.c"
    break;

  case 16: /* var_declaration: BOOL BOOLID '[' expression ']' ASSIGN boolean_expression ';'  */
#line 248 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
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
#line 1667 "limbaj.tab.c"
    break;

  case 17: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 273 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
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
#line 1685 "limbaj.tab.c"
    break;

  case 18: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 287 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
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
#line 1702 "limbaj.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 312 "limbaj.y"
    {
        if (currentSymTable->isDefined((yyvsp[-3].string))) 
        {
            cout << "Error: Function '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones. Line: " << yylineno << endl;
            return -1;
        }
        /* currentSymTable->addFunc($2, $3); */
        currentSymTable->enterScope((yyvsp[-3].string),"function");
    }
#line 1716 "limbaj.tab.c"
    break;

  case 24: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 322 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1724 "limbaj.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 331 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1733 "limbaj.tab.c"
    break;

  case 26: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 336 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1741 "limbaj.tab.c"
    break;

  case 31: /* $@4: %empty  */
#line 353 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1750 "limbaj.tab.c"
    break;

  case 32: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 360 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1758 "limbaj.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 377 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1767 "limbaj.tab.c"
    break;

  case 39: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 382 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1775 "limbaj.tab.c"
    break;

  case 44: /* $@6: %empty  */
#line 400 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1783 "limbaj.tab.c"
    break;

  case 45: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 404 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1791 "limbaj.tab.c"
    break;

  case 59: /* assignment: left_value ASSIGN expression  */
#line 431 "limbaj.y"
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
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
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
#line 1826 "limbaj.tab.c"
    break;

  case 60: /* assignment: left_value ASSIGN boolean_expression  */
#line 461 "limbaj.y"
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
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
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
#line 1861 "limbaj.tab.c"
    break;

  case 61: /* assignment: left_value ASSIGN STRING  */
#line 491 "limbaj.y"
                                      {
                auto lResult=(yyvsp[-2].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=(yyvsp[-2].node)->getType();
                if (strcmp("string",ltype.c_str())!=0) {
                    cout << "Error: Assignment type mismatch. Expected string but got " << (yyvsp[-2].node) << endl;
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
#line 1891 "limbaj.tab.c"
    break;

  case 62: /* assignment: left_value ASSIGN CHAR  */
#line 516 "limbaj.y"
                                    {
                auto lResult=(yyvsp[-2].node)->evaluate(*currentSymTable);
                if(holds_alternative<monostate>(lResult)){
                    cout<<"Error: Evaluation error occured! Line: " << yylineno << endl;
                    return -1;
                }

                string ltype=(yyvsp[-2].node)->getType();
                string rtype="char";
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
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
#line 1922 "limbaj.tab.c"
    break;

  case 63: /* left_value: ID  */
#line 545 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[0].string), "identifier")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string));
            }
#line 1934 "limbaj.tab.c"
    break;

  case 64: /* left_value: ID '[' expression ']'  */
#line 552 "limbaj.y"
                                    {
                if(!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "identifier")){
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
#line 1957 "limbaj.tab.c"
    break;

  case 65: /* left_value: BOOLID  */
#line 570 "limbaj.y"
                    {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[0].string), "identifier")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined. Line: " << yylineno << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string));
            }
#line 1969 "limbaj.tab.c"
    break;

  case 66: /* left_value: BOOLID '[' expression ']'  */
#line 578 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "identifier")) {
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
#line 1992 "limbaj.tab.c"
    break;

  case 67: /* left_value: object_access  */
#line 596 "limbaj.y"
                           {
                (yyval.node)=nullptr;
            }
#line 2000 "limbaj.tab.c"
    break;

  case 70: /* $@7: %empty  */
#line 607 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 2008 "limbaj.tab.c"
    break;

  case 71: /* $@8: %empty  */
#line 611 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2016 "limbaj.tab.c"
    break;

  case 74: /* $@9: %empty  */
#line 620 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 2024 "limbaj.tab.c"
    break;

  case 75: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 624 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2032 "limbaj.tab.c"
    break;

  case 76: /* $@10: %empty  */
#line 631 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 2040 "limbaj.tab.c"
    break;

  case 77: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 635 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2048 "limbaj.tab.c"
    break;

  case 78: /* $@11: %empty  */
#line 642 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 2056 "limbaj.tab.c"
    break;

  case 79: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 646 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 2064 "limbaj.tab.c"
    break;

  case 82: /* function_call: ID '(' argument_list ')'  */
#line 657 "limbaj.y"
              {
                  if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "function")) {
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called before being defined. Line: " << yylineno << endl;
                      return -1;
                  }
              }
#line 2075 "limbaj.tab.c"
    break;

  case 83: /* print_statement: PRINT '(' CHAR ')'  */
#line 665 "limbaj.y"
                                    {
                    cout << "Print (char): " << (yyvsp[-1].charval) << endl;
                }
#line 2083 "limbaj.tab.c"
    break;

  case 84: /* print_statement: PRINT '(' STRING ')'  */
#line 668 "limbaj.y"
                                      {
                    cout << "Print (string): " << (yyvsp[-1].string) << endl;
                }
#line 2091 "limbaj.tab.c"
    break;

  case 85: /* print_statement: PRINT '(' expression ')'  */
#line 671 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 2100 "limbaj.tab.c"
    break;

  case 86: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 675 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 2109 "limbaj.tab.c"
    break;

  case 87: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 681 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 2118 "limbaj.tab.c"
    break;

  case 88: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 685 "limbaj.y"
                                                     {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 2127 "limbaj.tab.c"
    break;

  case 89: /* type_of_statement: TYPEOF '(' STRING ')'  */
#line 689 "limbaj.y"
                                         {
                        cout<<"TypeOf: string"<<endl;
                  }
#line 2135 "limbaj.tab.c"
    break;

  case 90: /* type_of_statement: TYPEOF '(' CHAR ')'  */
#line 692 "limbaj.y"
                                       {
                        cout<<"TypeOf: char"<<endl;
                  }
#line 2143 "limbaj.tab.c"
    break;

  case 97: /* expression: expression '+' expression  */
#line 708 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2151 "limbaj.tab.c"
    break;

  case 98: /* expression: expression '-' expression  */
#line 711 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2159 "limbaj.tab.c"
    break;

  case 99: /* expression: expression '*' expression  */
#line 714 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2167 "limbaj.tab.c"
    break;

  case 100: /* expression: expression '/' expression  */
#line 717 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2175 "limbaj.tab.c"
    break;

  case 101: /* expression: expression '%' expression  */
#line 720 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2183 "limbaj.tab.c"
    break;

  case 102: /* expression: expression '^' expression  */
#line 723 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2191 "limbaj.tab.c"
    break;

  case 103: /* expression: '-' expression  */
#line 726 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 2199 "limbaj.tab.c"
    break;

  case 104: /* expression: '(' expression ')'  */
#line 729 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 2207 "limbaj.tab.c"
    break;

  case 105: /* expression: ID  */
#line 732 "limbaj.y"
                {
                if (!currentSymTable->existsId((yyvsp[0].string))) 
                {
                    cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined. Line: " << yylineno << endl;
                    return -1;
                }
               (yyval.node) = new ASTNode((yyvsp[0].string));
           }
#line 2220 "limbaj.tab.c"
    break;

  case 106: /* expression: ID '[' expression ']'  */
#line 740 "limbaj.y"
                                   {
                if (!currentSymTable->existsId((yyvsp[-3].string))) 
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
#line 2243 "limbaj.tab.c"
    break;

  case 107: /* expression: INT  */
#line 758 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 2251 "limbaj.tab.c"
    break;

  case 108: /* expression: FLOAT  */
#line 761 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 2259 "limbaj.tab.c"
    break;

  case 109: /* expression: function_call  */
#line 764 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2267 "limbaj.tab.c"
    break;

  case 110: /* expression: object_access  */
#line 767 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2275 "limbaj.tab.c"
    break;

  case 111: /* boolean_expression: TRUE  */
#line 772 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true,true);
                   }
#line 2283 "limbaj.tab.c"
    break;

  case 112: /* boolean_expression: FALSE  */
#line 775 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false,false);
                   }
#line 2291 "limbaj.tab.c"
    break;

  case 113: /* boolean_expression: '(' boolean_expression ')'  */
#line 778 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 2299 "limbaj.tab.c"
    break;

  case 114: /* boolean_expression: BOOLID  */
#line 781 "limbaj.y"
                            {
                        if (!currentSymTable->existsId((yyvsp[0].string))) 
                        {
                            cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined. Line: " << yylineno << endl;
                            return -1;
                        }
                        (yyval.node) = new ASTNode((yyvsp[0].string));
                   }
#line 2312 "limbaj.tab.c"
    break;

  case 115: /* boolean_expression: expression '>' expression  */
#line 789 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2320 "limbaj.tab.c"
    break;

  case 116: /* boolean_expression: expression '<' expression  */
#line 792 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2328 "limbaj.tab.c"
    break;

  case 117: /* boolean_expression: expression GE expression  */
#line 795 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2336 "limbaj.tab.c"
    break;

  case 118: /* boolean_expression: expression LE expression  */
#line 798 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2344 "limbaj.tab.c"
    break;

  case 119: /* boolean_expression: expression EQ expression  */
#line 801 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2352 "limbaj.tab.c"
    break;

  case 120: /* boolean_expression: expression NEQ expression  */
#line 804 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2360 "limbaj.tab.c"
    break;

  case 121: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 807 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2368 "limbaj.tab.c"
    break;

  case 122: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 810 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2376 "limbaj.tab.c"
    break;

  case 123: /* boolean_expression: '!' boolean_expression  */
#line 813 "limbaj.y"
                                            {
                      (yyval.node) = new ASTNode(ASTNode::Operator::NOT, (yyvsp[0].node), nullptr);
                   }
#line 2384 "limbaj.tab.c"
    break;


#line 2388 "limbaj.tab.c"

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

#line 818 "limbaj.y"

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

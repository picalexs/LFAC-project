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
#define YYLAST   611

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

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
     115,   130,   145,   168,   186,   201,   219,   233,   249,   250,
     253,   254,   259,   258,   281,   280,   293,   294,   297,   298,
     303,   302,   316,   317,   320,   321,   322,   327,   326,   339,
     340,   341,   344,   350,   349,   360,   361,   362,   363,   367,
     368,   369,   370,   371,   375,   376,   377,   378,   381,   392,
     402,   411,   424,   432,   440,   447,   455,   460,   461,   466,
     470,   465,   476,   479,   478,   490,   489,   501,   500,   511,
     512,   515,   524,   527,   530,   534,   540,   544,   548,   551,
     556,   559,   560,   561,   562,   563,   567,   570,   573,   576,
     579,   582,   585,   588,   591,   599,   602,   605,   608,   613,
     616,   619,   622,   632,   635,   638,   641,   644,   647,   650,
     653,   656
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

#define YYPACT_NINF (-197)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -197,    32,    42,  -197,    53,   -16,    42,  -197,  -197,    58,
      68,    76,   -16,  -197,  -197,   101,    64,    73,    49,    97,
      76,  -197,  -197,   208,  -197,     1,   174,   256,   174,   109,
     124,  -197,  -197,   132,   113,  -197,  -197,   207,  -197,  -197,
     174,   174,    -3,  -197,  -197,   136,   150,  -197,  -197,   123,
      30,   256,   256,  -197,  -197,  -197,   552,    77,    51,   147,
    -197,   129,   146,  -197,  -197,  -197,   596,   256,   149,  -197,
    -197,   174,   174,   174,   174,   174,   174,  -197,     2,  -197,
     486,    -6,   174,   174,   174,   174,   174,   174,  -197,   256,
     256,     7,   129,   548,   151,     5,  -197,   164,  -197,    33,
     552,    86,   166,   311,   311,   173,   173,   173,   173,  -197,
     287,  -197,   562,   562,   562,   562,   562,   562,  -197,   170,
    -197,   256,    34,    -2,   169,   179,   182,   212,   221,   233,
     174,    96,  -197,   304,   206,  -197,  -197,   230,   235,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,   129,
     129,  -197,   256,   256,   241,   583,   187,  -197,   174,   174,
     256,   256,   -16,   197,   237,   562,  -197,  -197,   242,  -197,
    -197,   245,   243,  -197,    37,   552,    86,    63,  -197,  -197,
    -197,   248,    60,    67,   127,   141,   256,   251,   258,   508,
     172,   259,   275,   530,   184,  -197,  -197,  -197,   552,    86,
     548,  -197,  -197,   548,  -197,  -197,  -197,  -197,   246,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,   325,   274,   346,
     276,   277,    70,  -197,   548,  -197,   548,   548,   -36,   279,
     291,  -197,   367,   388,   409,  -197,  -197,  -197,  -197,   285,
     280,   548,  -197,  -197,   430,   290,  -197,   548,   451,  -197
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    27,     1,     0,     5,    26,    29,    30,     0,
       0,    19,     4,     7,    28,     0,     0,     0,     0,     0,
      18,    21,     6,     0,     8,     0,     0,     0,     0,     0,
       0,     3,    20,     0,     0,    34,    35,     0,    33,    36,
       0,     0,   104,   105,   106,     0,     0,   108,   107,     0,
       0,     0,     0,   112,   109,   110,     0,     0,     0,     0,
      43,    41,     0,    31,    32,   102,     0,    95,     0,    16,
      17,     0,     0,     0,     0,     0,     0,     9,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    41,     0,     0,     0,    39,     0,   103,     0,
      92,    94,    67,    96,    97,    98,    99,   100,   101,    11,
       0,   111,   113,   114,   117,   118,   116,   115,   119,   120,
      14,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,    48,    49,     0,    53,    55,
      56,    57,    50,    51,    79,    80,    52,    42,    37,     0,
      41,    81,     0,    95,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    90,    64,    44,     0,    47,
      46,     0,     0,    40,     0,    91,    93,     0,    13,    12,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    61,    60,    58,    59,
       0,    24,    68,     0,    63,    65,    69,    75,     0,    82,
      83,    84,    85,    89,    88,    86,    87,     0,     0,     0,
       0,     0,     0,    38,     0,    23,     0,     0,    62,     0,
       0,    66,     0,     0,     0,    77,    25,    70,    76,     0,
      72,     0,    73,    71,     0,     0,    78,     0,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,  -197,  -197,  -197,  -197,    -4,  -197,  -197,   292,  -197,
    -197,  -197,  -197,  -197,   308,  -197,  -197,   273,  -197,  -197,
     -89,   175,  -197,  -197,  -196,  -131,  -128,    93,  -197,   -79,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
     -43,  -197,  -197,  -197,   168,   145,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,   132,    19,    20,    21,   181,
      36,   218,     5,     6,     7,    15,    37,    38,    39,   172,
      95,    96,    31,    93,   133,   134,   135,   136,   137,    47,
     139,   220,   240,   243,   245,   140,   221,   141,   239,   142,
      48,   144,   145,   146,    99,    56,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    13,   168,   122,   217,   169,    40,   219,    22,   111,
     158,    67,    67,    68,   138,    41,    89,    90,   109,    35,
     148,   110,     9,   120,    79,    81,   121,    42,   232,    10,
     233,   234,     3,    35,    71,    72,    73,    74,    75,    76,
      43,    44,    45,    46,   158,   244,    68,    68,   151,   157,
     143,   248,   201,   149,   138,    71,    72,    73,    74,    75,
      76,   174,   118,   119,    71,    72,    73,    74,    75,    76,
       4,    71,    72,    73,    74,    75,    76,    78,   202,     8,
      24,   152,   149,    25,    16,   149,   168,    29,   168,   169,
     143,   169,    27,    88,   156,    17,   228,   124,    91,    89,
      90,   168,   168,   168,   169,   169,   169,   204,    89,    90,
      26,   152,    18,   168,   205,   229,   169,   168,    23,    28,
     169,   138,   166,    17,   138,   176,    30,    71,    72,    73,
      74,    75,    76,   184,   185,    59,   190,   194,   138,    77,
     138,    60,   206,   231,   199,   138,    61,   138,   138,    89,
      90,    62,    69,   138,   138,   138,   207,   143,   186,   208,
     143,    92,   138,    89,    90,   138,    70,    94,   138,   138,
      49,    50,    97,    58,   143,   102,   143,   147,   150,    40,
     153,   143,    76,   143,   143,    65,    66,   212,    41,   143,
     143,   143,    89,   160,    89,    90,   161,    80,   143,   216,
      42,   143,    40,   180,   143,   143,    89,    90,    51,    89,
      90,    52,   100,    43,    44,   159,   103,   104,   105,   106,
     107,   108,   170,    42,    53,    63,   162,   112,   113,   114,
     115,   116,   117,    33,    33,   163,    43,    44,   187,   188,
      54,    55,    40,    34,    34,     9,     9,   164,    51,   171,
      40,    52,    10,    10,   -66,   155,    51,   178,   195,    52,
     200,    40,   222,    42,    53,   203,   209,    51,    89,    90,
      52,    42,    53,   210,   213,   165,    43,    44,   191,   192,
      54,    55,    42,    53,    43,    44,   196,   197,    54,    55,
     214,   224,    40,   226,   227,    43,    44,   175,   100,    54,
      55,    41,   241,   182,   183,   166,   235,   247,   189,   193,
      64,   242,    32,    42,    14,   230,   198,    73,    74,    75,
      76,   177,   167,     0,   173,     0,    43,    44,     0,   154,
     123,   124,     0,     0,   125,     0,   126,   127,   128,   129,
       0,   130,     9,   223,     0,     0,     0,     0,     0,   131,
       0,   123,   124,     0,     0,   125,     0,   126,   127,   128,
     129,     0,   130,     9,   225,     0,     0,     0,     0,     0,
     131,     0,   123,   124,     0,     0,   125,     0,   126,   127,
     128,   129,     0,   130,     9,   236,     0,     0,     0,     0,
       0,   131,     0,   123,   124,     0,     0,   125,     0,   126,
     127,   128,   129,     0,   130,     9,   237,     0,     0,     0,
       0,     0,   131,     0,   123,   124,     0,     0,   125,     0,
     126,   127,   128,   129,     0,   130,     9,   238,     0,     0,
       0,     0,     0,   131,     0,   123,   124,     0,     0,   125,
       0,   126,   127,   128,   129,     0,   130,     9,   246,     0,
       0,     0,     0,     0,   131,     0,   123,   124,     0,     0,
     125,     0,   126,   127,   128,   129,     0,   130,     9,   249,
       0,     0,     0,     0,     0,   131,     0,   123,   124,     0,
       0,   125,     0,   126,   127,   128,   129,     0,   130,     9,
      71,    72,    73,    74,    75,    76,   131,     0,    82,    83,
       0,    98,     0,     0,     0,     0,    84,    85,     0,     0,
      86,    87,    71,    72,    73,    74,    75,    76,     0,     0,
      82,    83,     0,   211,     0,     0,     0,     0,    84,    85,
       0,     0,    86,    87,    71,    72,    73,    74,    75,    76,
       0,     0,    82,    83,     0,   215,     0,     0,     0,     0,
      84,    85,     0,     0,    86,    87,    71,    72,    73,    74,
      75,    76,     0,     0,    82,    83,    71,    72,    73,    74,
      75,    76,    84,    85,   123,   124,    86,    87,   125,     0,
     126,   127,   128,   129,     0,   130,     9,    71,    72,    73,
      74,    75,    76,   131,     0,     0,     0,     0,     0,   179,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,    98
};

static const yytype_int16 yycheck[] =
{
      27,     5,   133,    92,   200,   133,     5,   203,    12,    15,
      46,    14,    14,    49,    93,    14,    22,    23,    16,    23,
      15,    19,    38,    16,    51,    52,    19,    26,   224,    45,
     226,   227,     0,    37,     4,     5,     6,     7,     8,     9,
      39,    40,    41,    42,    46,   241,    49,    49,    15,    15,
      93,   247,    15,    48,   133,     4,     5,     6,     7,     8,
       9,   150,    89,    90,     4,     5,     6,     7,     8,     9,
      28,     4,     5,     6,     7,     8,     9,    47,    15,    26,
      16,    48,    48,    19,    26,    48,   217,    38,   219,   217,
     133,   219,    19,    16,   121,    27,    26,    27,    47,    22,
      23,   232,   233,   234,   232,   233,   234,    47,    22,    23,
      46,    48,    36,   244,    47,    45,   244,   248,    17,    46,
     248,   200,    26,    27,   203,   152,    29,     4,     5,     6,
       7,     8,     9,   160,   161,    26,   163,   164,   217,    16,
     219,    17,    15,   222,   171,   224,    14,   226,   227,    22,
      23,    38,    16,   232,   233,   234,    15,   200,   162,   186,
     203,    14,   241,    22,    23,   244,    16,    38,   247,   248,
      25,    26,    26,    28,   217,    26,   219,    26,    14,     5,
      14,   224,     9,   226,   227,    40,    41,    15,    14,   232,
     233,   234,    22,    14,    22,    23,    14,    52,   241,    15,
      26,   244,     5,    16,   247,   248,    22,    23,    11,    22,
      23,    14,    67,    39,    40,    46,    71,    72,    73,    74,
      75,    76,    16,    26,    27,    18,    14,    82,    83,    84,
      85,    86,    87,    26,    26,    14,    39,    40,    41,    42,
      43,    44,     5,    36,    36,    38,    38,    14,    11,    19,
       5,    14,    45,    45,    19,   110,    11,    16,    16,    14,
      17,     5,    16,    26,    27,    17,    15,    11,    22,    23,
      14,    26,    27,    15,    15,   130,    39,    40,    41,    42,
      43,    44,    26,    27,    39,    40,    41,    42,    43,    44,
      15,    17,     5,    17,    17,    39,    40,   152,   153,    43,
      44,    14,    17,   158,   159,    26,    15,    17,   163,   164,
      37,    31,    20,    26,     6,   222,   171,     6,     7,     8,
       9,   153,    18,    -1,   149,    -1,    39,    40,    -1,    42,
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
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15
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
      14,    15,    48,    14,    42,    95,    96,    15,    46,    46,
      14,    14,    14,    14,    14,    95,    26,    18,    75,    76,
      16,    19,    69,    71,    70,    95,    96,    94,    16,    16,
      16,    59,    95,    95,    96,    96,    55,    41,    42,    95,
      96,    41,    42,    95,    96,    16,    41,    42,    95,    96,
      17,    15,    15,    17,    47,    47,    15,    15,    96,    15,
      15,    15,    15,    15,    15,    15,    15,    74,    61,    74,
      81,    86,    16,    18,    17,    18,    17,    17,    26,    45,
      77,    79,    74,    74,    74,    15,    18,    18,    18,    88,
      82,    17,    31,    83,    74,    84,    18,    17,    74,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    52,    51,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    59,    58,    61,    60,    62,    62,    63,    63,
      65,    64,    66,    66,    67,    67,    67,    69,    68,    70,
      70,    70,    71,    73,    72,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    79,    79,    81,
      82,    80,    83,    84,    83,    86,    85,    88,    87,    89,
      89,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      93,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     5,
       5,     6,     8,     8,     6,     8,     5,     5,     1,     0,
       2,     1,     0,    10,     0,    10,     1,     0,     2,     1,
       0,     6,     2,     1,     1,     1,     1,     0,     8,     1,
       3,     0,     2,     0,     5,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     1,     4,     2,     4,     1,     3,     6,     0,
       0,    10,     0,     0,     5,     0,     8,     0,    11,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     3,     1,     3,     1,     0,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2
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
#line 1423 "limbaj.tab.c"
    break;

  case 3: /* PROGRAM: $@1 class_section var_section func_section main_function  */
#line 70 "limbaj.y"
        {
            currentSymTable->leaveScope();
            cout << "The program is correct!" << endl;
            printSymbolTables();
        }
#line 1433 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID ';'  */
#line 87 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-1].string))) {
                        cout << "Error: Variable '" << (yyvsp[-1].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-2].valtype), (yyvsp[-1].string));
                }
#line 1445 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 95 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }
                    
                    auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured!"<<endl;
                        return -1;
                    }

                    string rtype=(yyvsp[-1].node)->getType();
                    if(strcmp((yyvsp[-4].valtype),rtype.c_str())!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got "<<rtype<<endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), result);
                }
#line 1470 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: BOOL BOOLID ASSIGN boolean_expression ';'  */
#line 116 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-1].node)->evaluate(*currentSymTable);
                    if(holds_alternative<monostate>(result)){
                        cout<<"Error: Evaluation error occured!"<<endl;
                        return -1;
                    }
                    string rtype=(yyvsp[-1].node)->getType();
                    currentSymTable->addVar("bool", (yyvsp[-3].string), result);
                }
#line 1489 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 131 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                    if((yyvsp[-2].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        return -1;
                    }
                    currentSymTable->addVector((yyvsp[-5].valtype), (yyvsp[-4].string), get<int>(result));
                }
#line 1508 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 146 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                    string rtype=(yyvsp[-1].node)->getType();

                    if(strcmp((yyvsp[-7].valtype),rtype.c_str())!=0 || strcmp((yyvsp[-7].valtype),"bool")==0 || rtype=="bool")
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-7].valtype)<<" but got "<<rtype<<endl;
                        return -1;
                    }
                    if((yyvsp[-4].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        return -1;
                    }
                    currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>(result), valueResult);
                }
#line 1535 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID '[' expression ']' ASSIGN STRING ';'  */
#line 168 "limbaj.y"
                                                              {
                    // if (currentSymTable->isDefined($2)) {
                    //     cout << "Error: Variable '" << $2 << "' already defined in this scope or previous ones." << endl;
                    //     return -1;
                    // }
                    // else 
                    // {
                    //     if(strcmp($1,"string")!=0)
                    //     {
                    //         cout<<"Error: Assignment type mismatch. Expected "<<$1<<" but got string"<<endl;
                    //         return -1;
                    //     }
                    //     else
                    //     {
                    //         currentSymTable->addVector("string", $2, get<int>($4));
                    //     }
                    // }
                }
#line 1558 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: BOOL BOOLID '[' expression ']' ';'  */
#line 186 "limbaj.y"
                                                    {
                    if (currentSymTable->isDefined((yyvsp[-4].string))) {
                        cout << "Error: Variable '" << (yyvsp[-4].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                    string rtype=(yyvsp[-2].node)->getType();
                    if((yyvsp[-2].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        return -1;
                    }
                    currentSymTable->addVector("bool", (yyvsp[-4].string), get<int>(result));
                }
#line 1578 "limbaj.tab.c"
    break;

  case 15: /* var_declaration: BOOL BOOLID '[' expression ']' ASSIGN boolean_expression ';'  */
#line 202 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-6].string))) {
                        cout << "Error: Variable '" << (yyvsp[-6].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }

                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                    string rtype=(yyvsp[-1].node)->getType();

                    if((yyvsp[-4].node)->getType() != "int")
                    {
                        cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                        return -1;
                    }
                    currentSymTable->addVector("bool", (yyvsp[-6].string), get<int>(result), valueResult);
                }
#line 1600 "limbaj.tab.c"
    break;

  case 16: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 220 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }

                    if(strcmp((yyvsp[-4].valtype),"char")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got char"<<endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].charval));
                }
#line 1618 "limbaj.tab.c"
    break;

  case 17: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 234 "limbaj.y"
                {
                    if (currentSymTable->isDefined((yyvsp[-3].string))) {
                        cout << "Error: Variable '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
                        return -1;
                    }
                    if(strcmp((yyvsp[-4].valtype),"string")!=0)
                    {
                        cout<<"Error: Assignment type mismatch. Expected "<<(yyvsp[-4].valtype)<<" but got string"<<endl;
                        return -1;
                    }
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].string));
                }
#line 1635 "limbaj.tab.c"
    break;

  case 22: /* $@2: %empty  */
#line 259 "limbaj.y"
    {
        if (currentSymTable->isDefined((yyvsp[-3].string))) 
        {
            cout << "Error: Function '" << (yyvsp[-3].string) << "' already defined in this scope or previous ones." << endl;
            return -1;
        }
        else 
        {
             /* currentSymTable->addFunc($2, $3); */
            currentSymTable->enterScope((yyvsp[-3].string),"function");
        }
    }
#line 1652 "limbaj.tab.c"
    break;

  case 23: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 272 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1660 "limbaj.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 281 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1669 "limbaj.tab.c"
    break;

  case 25: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 286 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1677 "limbaj.tab.c"
    break;

  case 30: /* $@4: %empty  */
#line 303 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1686 "limbaj.tab.c"
    break;

  case 31: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 310 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1694 "limbaj.tab.c"
    break;

  case 37: /* $@5: %empty  */
#line 327 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1703 "limbaj.tab.c"
    break;

  case 38: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 332 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1711 "limbaj.tab.c"
    break;

  case 43: /* $@6: %empty  */
#line 350 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1719 "limbaj.tab.c"
    break;

  case 44: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 354 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1727 "limbaj.tab.c"
    break;

  case 58: /* assignment: left_value ASSIGN expression  */
#line 381 "limbaj.y"
                                          {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                (yyvsp[0].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype=(yyvsp[0].node)->getType();
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    return -1;
                }
           }
#line 1743 "limbaj.tab.c"
    break;

  case 59: /* assignment: left_value ASSIGN boolean_expression  */
#line 392 "limbaj.y"
                                                  {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype="bool";
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    return -1;
                }
           }
#line 1758 "limbaj.tab.c"
    break;

  case 60: /* assignment: left_value ASSIGN STRING  */
#line 402 "limbaj.y"
                                      {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                cout<<"Assignment: "<<ltype<<" string"<<endl;
                if (strcmp("string",ltype.c_str())!=0) {
                    cout << "Error: Assignment type mismatch. Expected string but got " << (yyvsp[-2].node) << endl;
                    return -1;
                }
           }
#line 1772 "limbaj.tab.c"
    break;

  case 61: /* assignment: left_value ASSIGN CHAR  */
#line 411 "limbaj.y"
                                    {
                (yyvsp[-2].node)->evaluate(*currentSymTable);
                string ltype=(yyvsp[-2].node)->getType();
                string rtype="char";
                cout<<"Assignment: "<<ltype<<" "<<rtype<<endl;
                if (ltype != rtype) {
                    cout << "Error: Assignment type mismatch. Expected " << ltype << " but got " << rtype << endl;
                    return -1;
                }
           }
#line 1787 "limbaj.tab.c"
    break;

  case 62: /* left_value: ID  */
#line 425 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[0].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[0].string) << "' used before being defined." << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode((yyvsp[0].string));
            }
#line 1799 "limbaj.tab.c"
    break;

  case 63: /* left_value: ID '[' expression ']'  */
#line 433 "limbaj.y"
            {
                if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "variable")) {
                    cout << "Error: Variable '" << (yyvsp[-3].string) << "' used before being defined." << endl;
                    return -1;
                }
                (yyval.node)=new ASTNode((yyvsp[-3].string));
            }
#line 1811 "limbaj.tab.c"
    break;

  case 64: /* left_value: BOOL ID  */
#line 440 "limbaj.y"
                     {
                // if (!currentSymTable->isUsedBeforeDefined($1, "variable")) {
                //     cout << "Error: Variable '" << $1 << "' used before being defined." << endl;
                //     return -1;
                // }
                // $$=new ASTNode($1, true);
            }
#line 1823 "limbaj.tab.c"
    break;

  case 65: /* left_value: BOOLID '[' expression ']'  */
#line 448 "limbaj.y"
            {
                // if (!currentSymTable->isUsedBeforeDefined($1, "variable")) {
                //     cout << "Error: Variable '" << $1 << "' used before being defined." << endl;
                //     return -1;
                // }
                // $$=new ASTNode($1, true);
            }
#line 1835 "limbaj.tab.c"
    break;

  case 66: /* left_value: object_access  */
#line 455 "limbaj.y"
                           {
                (yyval.node)=nullptr;
            }
#line 1843 "limbaj.tab.c"
    break;

  case 69: /* $@7: %empty  */
#line 466 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 1851 "limbaj.tab.c"
    break;

  case 70: /* $@8: %empty  */
#line 470 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1859 "limbaj.tab.c"
    break;

  case 73: /* $@9: %empty  */
#line 479 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 1867 "limbaj.tab.c"
    break;

  case 74: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 483 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1875 "limbaj.tab.c"
    break;

  case 75: /* $@10: %empty  */
#line 490 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 1883 "limbaj.tab.c"
    break;

  case 76: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 494 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1891 "limbaj.tab.c"
    break;

  case 77: /* $@11: %empty  */
#line 501 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 1899 "limbaj.tab.c"
    break;

  case 78: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 505 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1907 "limbaj.tab.c"
    break;

  case 81: /* function_call: ID '(' argument_list ')'  */
#line 516 "limbaj.y"
              {
                  if (!currentSymTable->isUsedBeforeDefined((yyvsp[-3].string), "function")) {
                      cout << "Error: Function '" << (yyvsp[-3].string) << "' called before being defined." << endl;
                      return -1;
                  }
              }
#line 1918 "limbaj.tab.c"
    break;

  case 82: /* print_statement: PRINT '(' CHAR ')'  */
#line 524 "limbaj.y"
                                    {
                    cout << "Print (char): " << (yyvsp[-1].charval) << endl;
                }
#line 1926 "limbaj.tab.c"
    break;

  case 83: /* print_statement: PRINT '(' STRING ')'  */
#line 527 "limbaj.y"
                                      {
                    cout << "Print (string): " << (yyvsp[-1].string) << endl;
                }
#line 1934 "limbaj.tab.c"
    break;

  case 84: /* print_statement: PRINT '(' expression ')'  */
#line 530 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1943 "limbaj.tab.c"
    break;

  case 85: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 534 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1952 "limbaj.tab.c"
    break;

  case 86: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 540 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1961 "limbaj.tab.c"
    break;

  case 87: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 544 "limbaj.y"
                                                     {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1970 "limbaj.tab.c"
    break;

  case 88: /* type_of_statement: TYPEOF '(' STRING ')'  */
#line 548 "limbaj.y"
                                         {
                        cout<<"TypeOf: string"<<endl;
                  }
#line 1978 "limbaj.tab.c"
    break;

  case 89: /* type_of_statement: TYPEOF '(' CHAR ')'  */
#line 551 "limbaj.y"
                                       {
                        cout<<"TypeOf: char"<<endl;
                  }
#line 1986 "limbaj.tab.c"
    break;

  case 96: /* expression: expression '+' expression  */
#line 567 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1994 "limbaj.tab.c"
    break;

  case 97: /* expression: expression '-' expression  */
#line 570 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2002 "limbaj.tab.c"
    break;

  case 98: /* expression: expression '*' expression  */
#line 573 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2010 "limbaj.tab.c"
    break;

  case 99: /* expression: expression '/' expression  */
#line 576 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2018 "limbaj.tab.c"
    break;

  case 100: /* expression: expression '%' expression  */
#line 579 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2026 "limbaj.tab.c"
    break;

  case 101: /* expression: expression '^' expression  */
#line 582 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 2034 "limbaj.tab.c"
    break;

  case 102: /* expression: '-' expression  */
#line 585 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 2042 "limbaj.tab.c"
    break;

  case 103: /* expression: '(' expression ')'  */
#line 588 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 2050 "limbaj.tab.c"
    break;

  case 104: /* expression: ID  */
#line 591 "limbaj.y"
                {
                if (!currentSymTable->existsId((yyvsp[0].string))) 
                {
                    cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined." << endl;
                    return -1;
                }
               (yyval.node) = new ASTNode((yyvsp[0].string));
           }
#line 2063 "limbaj.tab.c"
    break;

  case 105: /* expression: INT  */
#line 599 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 2071 "limbaj.tab.c"
    break;

  case 106: /* expression: FLOAT  */
#line 602 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 2079 "limbaj.tab.c"
    break;

  case 107: /* expression: function_call  */
#line 605 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2087 "limbaj.tab.c"
    break;

  case 108: /* expression: object_access  */
#line 608 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 2095 "limbaj.tab.c"
    break;

  case 109: /* boolean_expression: TRUE  */
#line 613 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true, true);
                   }
#line 2103 "limbaj.tab.c"
    break;

  case 110: /* boolean_expression: FALSE  */
#line 616 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false, false);
                   }
#line 2111 "limbaj.tab.c"
    break;

  case 111: /* boolean_expression: '(' boolean_expression ')'  */
#line 619 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 2119 "limbaj.tab.c"
    break;

  case 112: /* boolean_expression: BOOLID  */
#line 622 "limbaj.y"
                            {
                        if (!currentSymTable->existsId((yyvsp[0].string))) 
                        {
                            cout << "Error: Identifier '" << (yyvsp[0].string) << "' not defined." << endl;
                            return -1;
                        }
                        else{
                            (yyval.node) = new ASTNode((yyvsp[0].string));
                        }
                   }
#line 2134 "limbaj.tab.c"
    break;

  case 113: /* boolean_expression: expression '>' expression  */
#line 632 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2142 "limbaj.tab.c"
    break;

  case 114: /* boolean_expression: expression '<' expression  */
#line 635 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2150 "limbaj.tab.c"
    break;

  case 115: /* boolean_expression: expression GE expression  */
#line 638 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2158 "limbaj.tab.c"
    break;

  case 116: /* boolean_expression: expression LE expression  */
#line 641 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2166 "limbaj.tab.c"
    break;

  case 117: /* boolean_expression: expression EQ expression  */
#line 644 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2174 "limbaj.tab.c"
    break;

  case 118: /* boolean_expression: expression NEQ expression  */
#line 647 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2182 "limbaj.tab.c"
    break;

  case 119: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 650 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2190 "limbaj.tab.c"
    break;

  case 120: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 653 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 2198 "limbaj.tab.c"
    break;

  case 121: /* boolean_expression: '!' boolean_expression  */
#line 656 "limbaj.y"
                                            {
                      (yyval.node) = new ASTNode(ASTNode::Operator::NOT, (yyvsp[0].node), nullptr);
                   }
#line 2206 "limbaj.tab.c"
    break;


#line 2210 "limbaj.tab.c"

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

#line 661 "limbaj.y"

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

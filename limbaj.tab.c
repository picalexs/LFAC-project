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
  YYSYMBOL_TYPE = 31,                      /* TYPE  */
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
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_var_section = 50,               /* var_section  */
  YYSYMBOL_var_declarations = 51,          /* var_declarations  */
  YYSYMBOL_var_declaration = 52,           /* var_declaration  */
  YYSYMBOL_func_section = 53,              /* func_section  */
  YYSYMBOL_func_definitions = 54,          /* func_definitions  */
  YYSYMBOL_func_definition = 55,           /* func_definition  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_method_definition = 57,         /* method_definition  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_class_section = 59,             /* class_section  */
  YYSYMBOL_class_definitions = 60,         /* class_definitions  */
  YYSYMBOL_class_definition = 61,          /* class_definition  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_class_body = 63,                /* class_body  */
  YYSYMBOL_class_member = 64,              /* class_member  */
  YYSYMBOL_constructor_definition = 65,    /* constructor_definition  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_parameter_list = 67,            /* parameter_list  */
  YYSYMBOL_parameter = 68,                 /* parameter  */
  YYSYMBOL_main_function = 69,             /* main_function  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_statement_list = 71,            /* statement_list  */
  YYSYMBOL_statement_with_semicolon = 72,  /* statement_with_semicolon  */
  YYSYMBOL_statement_without_semicolon = 73, /* statement_without_semicolon  */
  YYSYMBOL_assignment = 74,                /* assignment  */
  YYSYMBOL_left_value = 75,                /* left_value  */
  YYSYMBOL_object_access = 76,             /* object_access  */
  YYSYMBOL_if_statement = 77,              /* if_statement  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_79_8 = 79,                      /* $@8  */
  YYSYMBOL_else_statement = 80,            /* else_statement  */
  YYSYMBOL_81_9 = 81,                      /* $@9  */
  YYSYMBOL_while_statement = 82,           /* while_statement  */
  YYSYMBOL_83_10 = 83,                     /* $@10  */
  YYSYMBOL_for_statement = 84,             /* for_statement  */
  YYSYMBOL_85_11 = 85,                     /* $@11  */
  YYSYMBOL_predefined_function_call = 86,  /* predefined_function_call  */
  YYSYMBOL_function_call = 87,             /* function_call  */
  YYSYMBOL_print_statement = 88,           /* print_statement  */
  YYSYMBOL_type_of_statement = 89,         /* type_of_statement  */
  YYSYMBOL_return_statement = 90,          /* return_statement  */
  YYSYMBOL_argument_list = 91,             /* argument_list  */
  YYSYMBOL_expression = 92,                /* expression  */
  YYSYMBOL_boolean_expression = 93         /* boolean_expression  */
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
#define YYLAST   482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

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
       0,    61,    61,    61,    76,    77,    80,    81,    84,    87,
      97,   108,   112,   116,   120,   127,   128,   131,   132,   137,
     136,   151,   150,   163,   164,   167,   168,   173,   172,   186,
     187,   190,   191,   192,   197,   196,   209,   210,   211,   214,
     220,   219,   230,   231,   232,   233,   237,   238,   239,   240,
     241,   245,   246,   247,   248,   251,   252,   255,   256,   257,
     258,   259,   262,   263,   268,   272,   267,   278,   281,   280,
     292,   291,   303,   302,   313,   314,   317,   320,   323,   326,
     330,   334,   339,   343,   347,   350,   353,   354,   355,   356,
     357,   361,   364,   367,   370,   373,   376,   379,   382,   385,
     388,   391,   394,   399,   402,   405,   408,   411,   414,   417,
     420,   423,   426,   429
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
  "NEQ", "AND", "OR", "LE", "GE", "ID", "CLASS", "MAIN", "IF", "ELSE",
  "WHILE", "FOR", "PRINT", "TYPEOF", "FUNC", "RETURN", "TYPE", "INT",
  "FLOAT", "CHAR", "STRING", "TRUE", "FALSE", "';'", "'['", "']'", "'('",
  "')'", "','", "'.'", "'>'", "'<'", "$accept", "PROGRAM", "$@1",
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

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -139,    12,    -1,  -139,     3,    24,    -1,  -139,  -139,    41,
      48,    24,  -139,  -139,    68,    -8,    59,    86,    48,  -139,
    -139,    45,   247,  -139,    82,    97,   117,  -139,  -139,    89,
     104,  -139,  -139,   109,  -139,  -139,    82,    96,  -139,  -139,
     101,   111,  -139,  -139,   159,  -139,   163,    51,    82,   268,
     106,  -139,   124,   138,  -139,  -139,   151,   159,  -139,  -139,
     179,    -6,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,  -139,    82,    82,   159,   159,  -139,    65,    20,
     124,   447,   152,    61,  -139,   133,    90,   241,   127,  -139,
    -139,   196,   196,   151,   151,   151,   151,   326,   326,   326,
     326,   326,   326,   241,  -139,   160,    82,  -139,   168,   -26,
     139,   147,   149,   158,   164,    82,  -139,  -139,  -139,   315,
     169,  -139,  -139,   204,   220,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,   124,   124,  -139,   159,   318,
    -139,    82,   217,   159,   159,    24,   257,   280,   326,  -139,
     202,  -139,  -139,   159,   230,  -139,   177,   241,   127,  -139,
     233,   297,   216,     8,    11,   159,   -25,   219,   221,   222,
     208,    21,   223,   224,    40,  -139,   241,   127,   447,  -139,
     447,  -139,   159,  -139,  -139,    84,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   332,   260,   349,   193,   284,   285,
      92,  -139,   447,  -139,  -139,   447,   447,    -5,   226,  -139,
     366,   383,   400,  -139,  -139,  -139,  -139,   286,   234,   447,
    -139,  -139,   417,   288,  -139,   447,   434,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    24,     1,     0,     5,    23,    26,    27,     0,
      16,     4,     7,    25,     0,     0,     0,     0,    15,    18,
       6,     0,     0,     8,     0,     0,     0,     3,    17,     0,
       0,    31,    32,     0,    30,    33,     0,    99,   100,   101,
       0,     0,   103,   104,     0,   102,     0,     0,     0,     0,
       0,    40,    38,     0,    28,    29,    97,    90,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,    12,     0,     0,
      38,     0,     0,     0,    36,     0,     0,    87,    89,    98,
     105,    91,    92,    93,    94,    95,    96,   110,   111,   109,
     108,   106,   107,     0,   112,   113,     0,     9,     0,    57,
       0,     0,     0,     0,     0,     0,    60,    61,    51,     0,
       0,    45,    46,     0,    50,    52,    53,    54,    47,    48,
      74,    75,    49,    39,    34,     0,    38,    76,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,    85,    41,
       0,    44,    43,     0,     0,    37,     0,    86,    88,    10,
       0,     0,    62,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    55,    56,     0,    21,
       0,    58,    90,    64,    70,     0,    77,    78,    81,    79,
      80,    84,    82,    83,     0,     0,     0,     0,     0,     0,
       0,    35,     0,    20,    63,     0,     0,    57,     0,    59,
       0,     0,     0,    72,    22,    65,    71,     0,    67,     0,
      68,    66,     0,     0,    73,     0,     0,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,  -139,    -4,  -139,  -139,   291,  -139,
    -139,  -139,  -139,  -139,   300,  -139,  -139,   277,  -139,  -139,
     -76,   176,  -139,  -139,  -114,  -116,  -113,   114,  -139,  -138,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
     -60,  -139,  -139,  -139,   136,   -22,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    10,    11,   118,    17,    18,    19,   160,
      32,   195,     5,     6,     7,    14,    33,    34,    35,   154,
      83,    84,    27,    81,   119,   120,   121,   122,   123,   124,
     125,   198,   218,   221,   223,   126,   199,   127,   217,   128,
      45,   130,   131,   132,    86,   103,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    12,    49,   150,   108,    22,   151,    20,   169,   172,
      75,    76,     3,   141,    56,    57,    57,    31,   142,   142,
       4,   129,    60,     8,    75,    76,    78,    75,    76,    31,
      23,    24,    47,   106,   141,    87,    90,    75,    76,   142,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     183,   101,   102,   184,    61,     9,    75,    76,   107,   129,
     156,    15,   209,   190,   194,    29,   196,    75,    76,    62,
      63,    64,    65,    66,    30,    67,     9,    16,   150,    21,
     150,   151,   193,   151,   139,   104,   105,    36,   210,    77,
      25,   211,   212,   148,   150,   150,   150,   151,   151,   151,
      75,    76,    37,   134,   135,   222,   150,    89,    26,   151,
     150,   226,   207,   151,    38,    39,   157,    50,   129,   161,
     129,    54,   200,    48,   170,   173,   116,   117,    51,    29,
      52,   176,   137,   138,   129,    53,   129,    57,    30,    58,
       9,   165,   129,    75,    76,   129,   129,    80,   158,    59,
     129,   129,   129,   163,   164,    82,   171,   174,    85,   129,
      87,    67,   129,   177,    36,   129,   129,    62,    63,    64,
      65,    66,   133,    67,   136,   185,    75,    68,    69,    37,
     143,    70,    71,    62,    63,    64,    65,    66,   144,    67,
     145,    38,    39,    68,    69,    42,    43,    70,    71,   146,
      44,    72,    64,    65,    66,   147,    67,   152,    73,    74,
     140,   135,    62,    63,    64,    65,    66,   153,    67,   179,
     135,    89,    68,    69,    73,    74,    70,    71,    62,    63,
      64,    65,    66,   -59,    67,   204,   138,   162,    68,    69,
     175,   178,    70,    71,   180,    62,    63,    64,    65,    66,
     189,    67,    36,    73,    74,    68,    69,   182,   220,    70,
      71,   186,    36,   187,   188,   191,   192,    37,   213,    73,
      74,   202,    62,    63,    64,    65,    66,   166,    67,    38,
      39,    40,    41,    42,    43,    36,    73,    74,    44,    38,
      39,   167,   168,    42,    43,   205,   206,   219,    44,   225,
     166,    62,    63,    64,    65,    66,    13,    67,    79,    28,
      55,   155,    38,    39,   208,     0,    42,    43,   197,     0,
       0,    44,    62,    63,    64,    65,    66,   149,    67,     0,
      62,    63,    64,    65,    66,   109,    67,   181,   110,     0,
     111,   112,   113,   114,   201,   115,     9,     0,     0,   116,
     117,     0,   109,     0,     0,   110,   159,   111,   112,   113,
     114,   203,   115,     9,     0,     0,   116,   117,     0,   109,
       0,     0,   110,     0,   111,   112,   113,   114,   214,   115,
       9,     0,     0,   116,   117,     0,   109,     0,     0,   110,
       0,   111,   112,   113,   114,   215,   115,     9,     0,     0,
     116,   117,     0,   109,     0,     0,   110,     0,   111,   112,
     113,   114,   216,   115,     9,     0,     0,   116,   117,     0,
     109,     0,     0,   110,     0,   111,   112,   113,   114,   224,
     115,     9,     0,     0,   116,   117,     0,   109,     0,     0,
     110,     0,   111,   112,   113,   114,   227,   115,     9,     0,
       0,   116,   117,     0,   109,     0,     0,   110,     0,   111,
     112,   113,   114,     0,   115,     9,     0,   109,   116,   117,
     110,     0,   111,   112,   113,   114,     0,   115,     9,     0,
       0,   116,   117
};

static const yytype_int16 yycheck[] =
{
      22,     5,    24,   119,    80,    13,   119,    11,   146,   147,
      16,    17,     0,    39,    36,    41,    41,    21,    44,    44,
      21,    81,    44,    20,    16,    17,    48,    16,    17,    33,
      38,    39,    22,    13,    39,    57,    42,    16,    17,    44,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      42,    73,    74,    42,    44,    31,    16,    17,    38,   119,
     136,    20,   200,    42,   178,    20,   180,    16,    17,     4,
       5,     6,     7,     8,    29,    10,    31,    29,   194,    11,
     196,   194,    42,   196,   106,    75,    76,     5,   202,    38,
      31,   205,   206,   115,   210,   211,   212,   210,   211,   212,
      16,    17,    20,    42,    43,   219,   222,    42,    22,   222,
     226,   225,    20,   226,    32,    33,   138,    20,   178,   141,
     180,    12,    38,    41,   146,   147,    34,    35,    11,    20,
      41,   153,    42,    43,   194,    31,   196,    41,    29,    38,
      31,   145,   202,    16,    17,   205,   206,    41,   138,    38,
     210,   211,   212,   143,   144,    31,   146,   147,    20,   219,
     182,    10,   222,   153,     5,   225,   226,     4,     5,     6,
       7,     8,    20,    10,    41,   165,    16,    14,    15,    20,
      41,    18,    19,     4,     5,     6,     7,     8,    41,    10,
      41,    32,    33,    14,    15,    36,    37,    18,    19,    41,
      41,    38,     6,     7,     8,    41,    10,    38,    45,    46,
      42,    43,     4,     5,     6,     7,     8,    13,    10,    42,
      43,    42,    14,    15,    45,    46,    18,    19,     4,     5,
       6,     7,     8,    13,    10,    42,    43,    20,    14,    15,
      38,    11,    18,    19,    11,     4,     5,     6,     7,     8,
      42,    10,     5,    45,    46,    14,    15,    41,    24,    18,
      19,    42,     5,    42,    42,    42,    42,    20,    42,    45,
      46,    11,     4,     5,     6,     7,     8,    20,    10,    32,
      33,    34,    35,    36,    37,     5,    45,    46,    41,    32,
      33,    34,    35,    36,    37,    11,    11,    11,    41,    11,
      20,     4,     5,     6,     7,     8,     6,    10,    40,    18,
      33,   135,    32,    33,   200,    -1,    36,    37,   182,    -1,
      -1,    41,     4,     5,     6,     7,     8,    12,    10,    -1,
       4,     5,     6,     7,     8,    20,    10,    40,    23,    -1,
      25,    26,    27,    28,    12,    30,    31,    -1,    -1,    34,
      35,    -1,    20,    -1,    -1,    23,    38,    25,    26,    27,
      28,    12,    30,    31,    -1,    -1,    34,    35,    -1,    20,
      -1,    -1,    23,    -1,    25,    26,    27,    28,    12,    30,
      31,    -1,    -1,    34,    35,    -1,    20,    -1,    -1,    23,
      -1,    25,    26,    27,    28,    12,    30,    31,    -1,    -1,
      34,    35,    -1,    20,    -1,    -1,    23,    -1,    25,    26,
      27,    28,    12,    30,    31,    -1,    -1,    34,    35,    -1,
      20,    -1,    -1,    23,    -1,    25,    26,    27,    28,    12,
      30,    31,    -1,    -1,    34,    35,    -1,    20,    -1,    -1,
      23,    -1,    25,    26,    27,    28,    12,    30,    31,    -1,
      -1,    34,    35,    -1,    20,    -1,    -1,    23,    -1,    25,
      26,    27,    28,    -1,    30,    31,    -1,    20,    34,    35,
      23,    -1,    25,    26,    27,    28,    -1,    30,    31,    -1,
      -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,    21,    59,    60,    61,    20,    31,
      50,    51,    52,    61,    62,    20,    29,    53,    54,    55,
      52,    11,    13,    38,    39,    31,    22,    69,    55,    20,
      29,    52,    57,    63,    64,    65,     5,    20,    32,    33,
      34,    35,    36,    37,    41,    87,    92,    93,    41,    92,
      20,    11,    41,    31,    12,    64,    92,    41,    38,    38,
      92,    93,     4,     5,     6,     7,     8,    10,    14,    15,
      18,    19,    38,    45,    46,    16,    17,    38,    92,    40,
      41,    70,    31,    67,    68,    20,    91,    92,    93,    42,
      42,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    13,    38,    67,    20,
      23,    25,    26,    27,    28,    30,    34,    35,    52,    71,
      72,    73,    74,    75,    76,    77,    82,    84,    86,    87,
      88,    89,    90,    20,    42,    43,    41,    42,    43,    92,
      42,    39,    44,    41,    41,    41,    41,    41,    92,    12,
      72,    73,    38,    13,    66,    68,    67,    92,    93,    38,
      56,    92,    20,    93,    93,    52,    20,    34,    35,    76,
      92,    93,    76,    92,    93,    38,    92,    93,    11,    42,
      11,    40,    41,    42,    42,    93,    42,    42,    42,    42,
      42,    42,    42,    42,    71,    58,    71,    91,    78,    83,
      38,    12,    11,    12,    42,    11,    11,    20,    74,    76,
      71,    71,    71,    42,    12,    12,    12,    85,    79,    11,
      24,    80,    71,    81,    12,    11,    71,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    49,    48,    50,    50,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    54,    54,    56,
      55,    58,    57,    59,    59,    60,    60,    62,    61,    63,
      63,    64,    64,    64,    66,    65,    67,    67,    67,    68,
      70,    69,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    75,
      75,    75,    76,    76,    78,    79,    77,    80,    81,    80,
      83,    82,    85,    84,    86,    86,    87,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     1,     0,     2,     1,     3,     6,
       8,     5,     5,     5,     5,     1,     0,     2,     1,     0,
      10,     0,    10,     1,     0,     2,     1,     0,     6,     2,
       1,     1,     1,     1,     0,     8,     1,     3,     0,     2,
       0,     5,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     4,     1,
       1,     1,     3,     6,     0,     0,    10,     0,     0,     5,
       0,     8,     0,    11,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     2,     3,     1,     3,     1,
       0,     3,     3,     3,     3,     3,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3
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
#line 61 "limbaj.y"
          {
            currentSymTable->enterScope("Global", "global");
        }
#line 1385 "limbaj.tab.c"
    break;

  case 3: /* PROGRAM: $@1 class_section var_section func_section main_function  */
#line 65 "limbaj.y"
        {
            if (errorCount == 0) 
            {
                currentSymTable->leaveScope();
                cout << "The program is correct!" << endl;
                printSymbolTables();
            }
        }
#line 1398 "limbaj.tab.c"
    break;

  case 8: /* var_declaration: TYPE ID ';'  */
#line 84 "limbaj.y"
                              {
                    currentSymTable->addVar((yyvsp[-2].valtype), (yyvsp[-1].string));
                }
#line 1406 "limbaj.tab.c"
    break;

  case 9: /* var_declaration: TYPE ID '[' expression ']' ';'  */
#line 88 "limbaj.y"
                {
                    auto result=(yyvsp[-2].node)->evaluate(*currentSymTable);
                    if((yyvsp[-2].node)->getType() == "int")
                    {
                        currentSymTable->addVector((yyvsp[-5].valtype), (yyvsp[-4].string), get<int>(result));
                    }else{
                        cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                    }
                }
#line 1420 "limbaj.tab.c"
    break;

  case 10: /* var_declaration: TYPE ID '[' expression ']' ASSIGN expression ';'  */
#line 98 "limbaj.y"
                {
                    auto result=(yyvsp[-4].node)->evaluate(*currentSymTable);
                    auto valueResult = (yyvsp[-1].node)->evaluate(*currentSymTable);
                    if((yyvsp[-4].node)->getType() == "int")
                    {
                        currentSymTable->addVector((yyvsp[-7].valtype), (yyvsp[-6].string), get<int>(result), valueResult);
                    }else{
                        cout<<"Error: Invalid array size! (size has to be of type int)"<<endl;
                    }
                }
#line 1435 "limbaj.tab.c"
    break;

  case 11: /* var_declaration: TYPE ID ASSIGN expression ';'  */
#line 109 "limbaj.y"
                {
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), 101);
                }
#line 1443 "limbaj.tab.c"
    break;

  case 12: /* var_declaration: TYPE ID ASSIGN boolean_expression ';'  */
#line 113 "limbaj.y"
                {
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), 1);
                }
#line 1451 "limbaj.tab.c"
    break;

  case 13: /* var_declaration: TYPE ID ASSIGN CHAR ';'  */
#line 117 "limbaj.y"
                {
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].charval));
                }
#line 1459 "limbaj.tab.c"
    break;

  case 14: /* var_declaration: TYPE ID ASSIGN STRING ';'  */
#line 121 "limbaj.y"
                {
                    currentSymTable->addVar((yyvsp[-4].valtype), (yyvsp[-3].string), (yyvsp[-1].string));
                }
#line 1467 "limbaj.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 137 "limbaj.y"
    {
        currentSymTable->addFunc((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"function");
    }
#line 1476 "limbaj.tab.c"
    break;

  case 20: /* func_definition: FUNC TYPE ID '(' parameter_list ')' $@2 BGIN statement_list END  */
#line 142 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1484 "limbaj.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 151 "limbaj.y"
    {
        currentSymTable->addMethod((yyvsp[-4].valtype), (yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string),"method");
    }
#line 1493 "limbaj.tab.c"
    break;

  case 22: /* method_definition: FUNC TYPE ID '(' parameter_list ')' $@3 BGIN statement_list END  */
#line 156 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1501 "limbaj.tab.c"
    break;

  case 27: /* $@4: %empty  */
#line 173 "limbaj.y"
    {
        currentSymTable->addClass((yyvsp[0].string));
        currentSymTable->enterScope((yyvsp[0].string), "class");
    }
#line 1510 "limbaj.tab.c"
    break;

  case 28: /* class_definition: CLASS ID $@4 BGIN class_body END  */
#line 180 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1518 "limbaj.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 197 "limbaj.y"
    {
        currentSymTable->addConstructor((yyvsp[-3].string));
        currentSymTable->enterScope((yyvsp[-3].string), "constructor"); 
    }
#line 1527 "limbaj.tab.c"
    break;

  case 35: /* constructor_definition: ID '(' parameter_list ')' $@5 BGIN statement_list END  */
#line 202 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1535 "limbaj.tab.c"
    break;

  case 40: /* $@6: %empty  */
#line 220 "limbaj.y"
    {
        currentSymTable->enterScope("main", "main");
    }
#line 1543 "limbaj.tab.c"
    break;

  case 41: /* main_function: MAIN BGIN $@6 statement_list END  */
#line 224 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1551 "limbaj.tab.c"
    break;

  case 64: /* $@7: %empty  */
#line 268 "limbaj.y"
    {
        currentSymTable->enterScope("IF","block");
    }
#line 1559 "limbaj.tab.c"
    break;

  case 65: /* $@8: %empty  */
#line 272 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1567 "limbaj.tab.c"
    break;

  case 68: /* $@9: %empty  */
#line 281 "limbaj.y"
    {
        currentSymTable->enterScope("ELSE","block");                
    }
#line 1575 "limbaj.tab.c"
    break;

  case 69: /* else_statement: ELSE $@9 BGIN statement_list END  */
#line 285 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1583 "limbaj.tab.c"
    break;

  case 70: /* $@10: %empty  */
#line 292 "limbaj.y"
    {
        currentSymTable->enterScope("WHILE","block");
    }
#line 1591 "limbaj.tab.c"
    break;

  case 71: /* while_statement: WHILE '(' boolean_expression ')' $@10 BGIN statement_list END  */
#line 296 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1599 "limbaj.tab.c"
    break;

  case 72: /* $@11: %empty  */
#line 303 "limbaj.y"
    {
        currentSymTable->enterScope("FOR","block");
    }
#line 1607 "limbaj.tab.c"
    break;

  case 73: /* for_statement: FOR '(' var_declaration boolean_expression ';' assignment ')' $@11 BGIN statement_list END  */
#line 307 "limbaj.y"
    {
        currentSymTable->leaveScope();
    }
#line 1615 "limbaj.tab.c"
    break;

  case 77: /* print_statement: PRINT '(' CHAR ')'  */
#line 320 "limbaj.y"
                                    {
                    cout << "Print: " << (yyvsp[-1].charval) << endl;
                }
#line 1623 "limbaj.tab.c"
    break;

  case 78: /* print_statement: PRINT '(' STRING ')'  */
#line 323 "limbaj.y"
                                      {
                    cout << "Print: " << (yyvsp[-1].string) << endl;
                }
#line 1631 "limbaj.tab.c"
    break;

  case 79: /* print_statement: PRINT '(' expression ')'  */
#line 326 "limbaj.y"
                                          {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1640 "limbaj.tab.c"
    break;

  case 80: /* print_statement: PRINT '(' boolean_expression ')'  */
#line 330 "limbaj.y"
                                                  {
                    (yyvsp[-1].node)->evaluate(*currentSymTable);
                    (yyvsp[-1].node)->printResult();
                }
#line 1649 "limbaj.tab.c"
    break;

  case 81: /* print_statement: PRINT '(' object_access ')'  */
#line 334 "limbaj.y"
                                             {
                    cout<<"cccc\n";
                }
#line 1657 "limbaj.tab.c"
    break;

  case 82: /* type_of_statement: TYPEOF '(' expression ')'  */
#line 339 "limbaj.y"
                                             {
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1666 "limbaj.tab.c"
    break;

  case 83: /* type_of_statement: TYPEOF '(' boolean_expression ')'  */
#line 343 "limbaj.y"
                                                     {\
                        (yyvsp[-1].node)->evaluate(*currentSymTable);
                        cout<<"TypeOf: "<<(yyvsp[-1].node)->getType()<<endl;
                  }
#line 1675 "limbaj.tab.c"
    break;

  case 91: /* expression: expression '+' expression  */
#line 361 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1683 "limbaj.tab.c"
    break;

  case 92: /* expression: expression '-' expression  */
#line 364 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::SUBTRACT, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1691 "limbaj.tab.c"
    break;

  case 93: /* expression: expression '*' expression  */
#line 367 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MULTIPLY, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1699 "limbaj.tab.c"
    break;

  case 94: /* expression: expression '/' expression  */
#line 370 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::DIVIDE, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1707 "limbaj.tab.c"
    break;

  case 95: /* expression: expression '%' expression  */
#line 373 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::MODULO, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1715 "limbaj.tab.c"
    break;

  case 96: /* expression: expression '^' expression  */
#line 376 "limbaj.y"
                                       {
               (yyval.node) = new ASTNode(ASTNode::Operator::POWER, (yyvsp[-2].node), (yyvsp[0].node));
           }
#line 1723 "limbaj.tab.c"
    break;

  case 97: /* expression: '-' expression  */
#line 379 "limbaj.y"
                                         {
               (yyval.node) = new ASTNode(ASTNode::Operator::UMINUS, (yyvsp[0].node), nullptr);
           }
#line 1731 "limbaj.tab.c"
    break;

  case 98: /* expression: '(' expression ')'  */
#line 382 "limbaj.y"
                                {
               (yyval.node) = (yyvsp[-1].node);
           }
#line 1739 "limbaj.tab.c"
    break;

  case 99: /* expression: ID  */
#line 385 "limbaj.y"
                {
               (yyval.node) = new ASTNode((yyvsp[0].string), true);
           }
#line 1747 "limbaj.tab.c"
    break;

  case 100: /* expression: INT  */
#line 388 "limbaj.y"
                 {
               (yyval.node) = new ASTNode((yyvsp[0].intval));
           }
#line 1755 "limbaj.tab.c"
    break;

  case 101: /* expression: FLOAT  */
#line 391 "limbaj.y"
                   {
               (yyval.node) = new ASTNode((yyvsp[0].floatval));
           }
#line 1763 "limbaj.tab.c"
    break;

  case 102: /* expression: function_call  */
#line 394 "limbaj.y"
                          {
                (yyval.node) = nullptr; //tmp
           }
#line 1771 "limbaj.tab.c"
    break;

  case 103: /* boolean_expression: TRUE  */
#line 399 "limbaj.y"
                          {
                       (yyval.node) = new ASTNode(true);
                   }
#line 1779 "limbaj.tab.c"
    break;

  case 104: /* boolean_expression: FALSE  */
#line 402 "limbaj.y"
                           {
                       (yyval.node) = new ASTNode(false);
                   }
#line 1787 "limbaj.tab.c"
    break;

  case 105: /* boolean_expression: '(' boolean_expression ')'  */
#line 405 "limbaj.y"
                                                {
                       (yyval.node) = (yyvsp[-1].node);
                   }
#line 1795 "limbaj.tab.c"
    break;

  case 106: /* boolean_expression: expression '>' expression  */
#line 408 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1803 "limbaj.tab.c"
    break;

  case 107: /* boolean_expression: expression '<' expression  */
#line 411 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LT, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1811 "limbaj.tab.c"
    break;

  case 108: /* boolean_expression: expression GE expression  */
#line 414 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::GE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1819 "limbaj.tab.c"
    break;

  case 109: /* boolean_expression: expression LE expression  */
#line 417 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::LE, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1827 "limbaj.tab.c"
    break;

  case 110: /* boolean_expression: expression EQ expression  */
#line 420 "limbaj.y"
                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1835 "limbaj.tab.c"
    break;

  case 111: /* boolean_expression: expression NEQ expression  */
#line 423 "limbaj.y"
                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1843 "limbaj.tab.c"
    break;

  case 112: /* boolean_expression: boolean_expression AND boolean_expression  */
#line 426 "limbaj.y"
                                                               {
                       (yyval.node) = new ASTNode(ASTNode::Operator::AND, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1851 "limbaj.tab.c"
    break;

  case 113: /* boolean_expression: boolean_expression OR boolean_expression  */
#line 429 "limbaj.y"
                                                              {
                       (yyval.node) = new ASTNode(ASTNode::Operator::OR, (yyvsp[-2].node), (yyvsp[0].node));
                   }
#line 1859 "limbaj.tab.c"
    break;


#line 1863 "limbaj.tab.c"

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

#line 437 "limbaj.y"

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

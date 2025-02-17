# Custom Programming Language

A statically-typed programming language designed and implemented using Bison/YACC and C++. The language includes features such as custom syntax, lexical analysis, parsing, semantic analysis, symbol table management, and expression evaluation through Abstract Syntax Trees (ASTs).

## Features
- **Statically-Typed Language**: Supports predefined types (`int`, `float`, `char`, `string`, `bool`), arrays, and user-defined classes.
- **Class Support**: Defines classes with fields and methods, supporting object initialization and member access. Classes must be declared in the global scope.
- **Variable & Function Definitions**: Allows global variables and function definitions. Function calls support expressions, other function calls, and identifiers as parameters.
- **Control Structures**: Includes `if`, `for`, and `while` statements for structured programming.
- **Arithmetic & Boolean Expressions**: Evaluates arithmetic and boolean expressions with strict type checking (no implicit casting).
- **Assignment Statements**: Supports assignment of expressions to variables, array elements, or class members in the form `left_value = expression`.
- **Symbol Table Management**: Implements symbol tables for managing variables, functions, and classes within different scopes (global, function, class, block).
- **Abstract Syntax Tree (AST)**: Constructs and evaluates ASTs for expressions, supporting operations on integers, floats, booleans, and strings.
- **Predefined Functions**: Includes `Print(expr)` to output evaluated expressions and `TypeOf(expr)` to output the type of an expression.
- **Error Checking**: Detects and reports errors for undeclared variables, duplicate declarations, type mismatches, and invalid assignments.

## Technologies Used
- **Bison/YACC**: Utilized for parsing and generating the syntax and grammar rules of the language.
- **Flex**: Employed for lexical analysis, converting raw input into tokens for further processing by the parser.
- **C++**: The core programming language used for implementing the compiler, symbol table management, AST construction, and evaluation.

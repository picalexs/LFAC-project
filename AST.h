#ifndef AST_H
#define AST_H

#include <string>
#include "SymTable.h"

class ASTNode
{
public:
    enum class NodeType
    {
        INT,
        FLOAT,
        BOOL,
        IDENTIFIER,
        CHAR,
        STRING,
        OPERATOR,
        VECTORINT,
        VECTORFLOAT,
        VECTORBOOL,
        VECTORCHAR,
        VECTORSTRING
    };
    enum class Operator
    {
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE,
        MODULO,
        POWER,
        AND,
        OR,
        EQ,
        NEQ,
        GT,
        LT,
        GE,
        LE,
        UMINUS,
        NOT
    };

    NodeType type;
    variant<int, float, bool, char, string, Operator> value;
    int index=-1;

    ASTNode *left;
    ASTNode *right;
    Value evaluatedResult;

    ASTNode(int val) : type(NodeType::INT), value(val), left(nullptr), right(nullptr) {}
    ASTNode(float val) : type(NodeType::FLOAT), value(val), left(nullptr), right(nullptr) {}
    ASTNode(bool val, bool isBool) : type(NodeType::BOOL), value(val), left(nullptr), right(nullptr) {}
    ASTNode(const string &id, int idx, bool placeholder) : type(NodeType::IDENTIFIER), value(id), left(nullptr), right(nullptr), index(idx) {}
    ASTNode(const char* val) : type(NodeType::CHAR), value(val), left(nullptr), right(nullptr) {}
    ASTNode(Operator op, ASTNode *left, ASTNode *right) : type(NodeType::OPERATOR), value(op), left(left), right(right) {}

    ~ASTNode();

    Value evaluate(SymTable &symTable);
    void printResult() const;
    string getType() const;
    string getVectorName() const;
    string getVectorIndex() const;
};
#endif

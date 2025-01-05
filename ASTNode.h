#ifndef ASTNODE_H
#define ASTNODE_H

#include <string>
#include <memory>
#include "SymTable.h"
using namespace std;

class ASTNode {
public:
    enum class NodeType { INT, FLOAT, BOOL, STRING, IDENTIFIER, OPERATOR };
    enum class Operator { 
        ADD, SUBTRACT, MULTIPLY, DIVIDE, MODULO, POWER, 
        AND, OR, EQ, NEQ, GT, LT, GE, LE, 
        UMINUS, NOT 
    };

    NodeType type;
    union {
        int intVal;
        float floatVal;
        bool boolVal;
        string* stringVal;
        Operator op;
    } value;
    
    ASTNode* left;
    ASTNode* right;

    ASTNode(int val);
    ASTNode(float val);
    ASTNode(bool val);
    ASTNode(const string& val);
    ASTNode(const string& id, bool isIdentifier);
    ASTNode(Operator op, ASTNode* left, ASTNode* right);

    variant<int, float, bool, string> evaluate(SymTable& symTable);

    void printNode() const;
};
#endif

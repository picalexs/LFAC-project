#ifndef AST_H
#define AST_H

#include <string>
#include "SymTable.h"

class ASTNode {
public:
    enum class NodeType { INT, FLOAT, BOOL, IDENTIFIER, CHAR, STRING, OPERATOR };
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
    Value evaluatedResult;

    ASTNode(int val);
    ASTNode(float val);
    ASTNode(bool val, bool isBool);
    ASTNode(const string& val);
    ASTNode(Operator op, ASTNode* left, ASTNode* right);
    ~ASTNode();

    Value evaluate(SymTable& symTable);
    void printResult() const;
    string getType() const;

};
#endif

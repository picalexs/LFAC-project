#ifndef AST_H
#define AST_H

#include <string>
#include "SymTable.h"

class ASTNode {
public:
    enum class NodeType { INT, FLOAT, BOOL, CHAR, STRING, IDENTIFIER, OPERATOR };
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
        char charVal;
        string* stringVal;
        Operator op;
    } value;
    
    ASTNode* left;
    ASTNode* right;
    Value evaluatedResult;

    ASTNode(int val);
    ASTNode(float val);
    ASTNode(bool val, bool isBool);
    ASTNode(char val);
    ASTNode(const string& val);
    ASTNode(const string& id, bool isIdentifier);
    ASTNode(Operator op, ASTNode* left, ASTNode* right);
    ~ASTNode();

    Value evaluate(SymTable& symTable);
    void printResult() const;
    string getType() const;

};
#endif

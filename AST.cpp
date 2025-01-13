#include "AST.h"
#include <iostream>
#include <cmath>
#include <variant>

template <typename T>
bool checkOperands(const VectorValue &leftVal, const VectorValue &rightVal)
{
    return holds_alternative<T>(leftVal) && holds_alternative<T>(rightVal);
}

ASTNode::ASTNode(int val)
{
    cout<<"ASTNode::ASTNode(int val)"<<val<<"\n";
    type = NodeType::INT;
    value.intVal = val;
}

ASTNode::ASTNode(float val)
{
    cout<<"ASTNode::ASTNode(float val)"<<val<<"\n";
    type = NodeType::FLOAT;
    value.floatVal = val;
}

ASTNode::ASTNode(bool val)
{
    cout<<"ASTNode::ASTNode(bool val)"<<val<<"\n";
    type = NodeType::BOOL;
    value.boolVal = val;
}

ASTNode::ASTNode(const string &val)
{
    cout<<"ASTNode::ASTNode(const string &val)"<<val<<"\n";
    type = NodeType::STRING;
    value.stringVal = new string(val);
}

ASTNode::ASTNode(const string &id, bool isIdentifier)
{
    cout<<"ASTNode::ASTNode(const string &id, bool isIdentifier)"<<id<<"\n";
    if (isIdentifier)
    {
        type = NodeType::IDENTIFIER;
        value.stringVal = new string(id);
    }
}

ASTNode::ASTNode(Operator op, ASTNode *left, ASTNode *right)
{
    cout<<"ASTNode::ASTNode(Operator op, ASTNode *left, ASTNode *right)\n";
    type = NodeType::OPERATOR;
    value.op = op;
    this->left = left;
    this->right = right;
}

ASTNode::~ASTNode()
{
    if (type == NodeType::STRING || type == NodeType::IDENTIFIER)
    {
        delete value.stringVal;
    }
    if (left)
    {
        delete left;
    }
    if (right)
    {
        delete right;
    }
}

VectorValue ASTNode::evaluate(SymTable &symTable)
{
    switch (type)
    {
    case NodeType::INT:
        cout<<"int\n";
        evaluatedResult = value.intVal;
        return evaluatedResult;
    case NodeType::FLOAT:
        cout<<"float\n";
        evaluatedResult = value.floatVal;
        return evaluatedResult;
    case NodeType::BOOL:
        cout<<"bool\n";
        evaluatedResult = value.boolVal;
        return evaluatedResult;
    case NodeType::STRING:
        cout<<"string\n";
        evaluatedResult = *value.stringVal;
        return evaluatedResult;
    case NodeType::IDENTIFIER:
        evaluatedResult = symTable.getIdValue(*value.stringVal);
        if(holds_alternative<int>(evaluatedResult))
        {
            cout<<"identifier: "<<*value.stringVal<<" value: "<<get<int>(evaluatedResult)<<"\n";
        }
        else if(holds_alternative<float>(evaluatedResult))
        {
            cout<<"identifier: "<<*value.stringVal<<" value: "<<get<float>(evaluatedResult)<<"\n";
        }
        else if(holds_alternative<bool>(evaluatedResult))
        {
            cout<<"identifier: "<<*value.stringVal<<" value: "<<(get<bool>(evaluatedResult) ? "true" : "false")<<"\n";
        }
        else if(holds_alternative<char>(evaluatedResult))
        {
            cout<<"identifier: "<<*value.stringVal<<" value: "<<get<char>(evaluatedResult)<<"\n";
        }
        else if(holds_alternative<string>(evaluatedResult))
        {
            cout<<"identifier: "<<*value.stringVal<<" value: "<<get<string>(evaluatedResult)<<"\n";
        }
        return evaluatedResult;
    case NodeType::OPERATOR:
    {
        auto leftVal = left->evaluate(symTable);
        if (right)
        {
            auto rightVal = right->evaluate(symTable);
            switch (value.op)
            {
            case Operator::ADD:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) + get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) + get<float>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<string>(leftVal, rightVal))
                {
                    evaluatedResult = get<string>(leftVal) + get<string>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::SUBTRACT:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) - get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) - get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::MULTIPLY:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) * get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) * get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::DIVIDE:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) / get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) / get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::MODULO:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) % get<int>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::POWER:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = static_cast<int>(pow(get<int>(leftVal), get<int>(rightVal)));
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = static_cast<float>(pow(get<float>(leftVal), get<float>(rightVal)));
                    return evaluatedResult;
                }
                break;
            case Operator::EQ:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) == get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) == get<float>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<bool>(leftVal, rightVal))
                {
                    evaluatedResult = get<bool>(leftVal) == get<bool>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<string>(leftVal, rightVal))
                {
                    evaluatedResult = get<string>(leftVal) == get<string>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::NEQ:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) != get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) != get<float>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<bool>(leftVal, rightVal))
                {
                    evaluatedResult = get<bool>(leftVal) != get<bool>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<string>(leftVal, rightVal))
                {
                    evaluatedResult = get<string>(leftVal) != get<string>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::GT:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) > get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) > get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::LT:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) < get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) < get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::GE:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) >= get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) >= get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::LE:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    evaluatedResult = get<int>(leftVal) <= get<int>(rightVal);
                    return evaluatedResult;
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    evaluatedResult = get<float>(leftVal) <= get<float>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::AND:
                if (checkOperands<bool>(leftVal, rightVal))
                {
                    evaluatedResult = get<bool>(leftVal) && get<bool>(rightVal);
                    return evaluatedResult;
                }
                break;
            case Operator::OR:
                if (checkOperands<bool>(leftVal, rightVal))
                {
                    evaluatedResult = get<bool>(leftVal) || get<bool>(rightVal);
                    return evaluatedResult;
                }
                break;
            }
        }
        else
        {
            switch (value.op)
            {
            case Operator::UMINUS:
                if (holds_alternative<int>(leftVal))
                {
                    evaluatedResult = -get<int>(leftVal);
                    return evaluatedResult;
                }
                else if (holds_alternative<float>(leftVal))
                {
                    evaluatedResult = -get<float>(leftVal);
                    return evaluatedResult;
                }
                break;
            case Operator::NOT:
                if (holds_alternative<bool>(leftVal))
                {
                    evaluatedResult = !get<bool>(leftVal);
                    return evaluatedResult;
                }
                break;
            }
        }
    }
    default:
        return 0;
    }
}

void ASTNode::printResult() const
{
    if (holds_alternative<int>(evaluatedResult))
    {
        cout << "PRINT (int): " << get<int>(evaluatedResult) << endl;
    }
    else if (holds_alternative<float>(evaluatedResult))
    {
        cout << "PRINT (float): " << get<float>(evaluatedResult) << endl;
    }
    else if (holds_alternative<bool>(evaluatedResult))
    {
        cout << "PRINT (bool): " << (get<bool>(evaluatedResult) ? "true" : "false") << endl;
    }
    else if(holds_alternative<char>(evaluatedResult))
    {
        cout << "PRINT (char): " << get<char>(evaluatedResult) << endl;
    }
    else if (holds_alternative<string>(evaluatedResult))
    {
        cout << "PRINT (string): " << get<string>(evaluatedResult) << endl;
    }
}

string ASTNode::getType() const
{
    if(holds_alternative<int>(evaluatedResult))
    {
        return "int";
    }
    else if(holds_alternative<float>(evaluatedResult))
    {
        return "float";
    }
    else if(holds_alternative<bool>(evaluatedResult))
    {
        return "bool";
    }
    else if(holds_alternative<char>(evaluatedResult))
    {
        return "char";
    }
    else if(holds_alternative<string>(evaluatedResult))
    {
        return "string";
    }
    return "undefined";
}
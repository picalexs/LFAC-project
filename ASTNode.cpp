#include "ASTNode.h"
#include <iostream>
#include <cmath>
#include <variant>

template <typename T>
bool checkOperands(const variant<int, float, bool, string> &leftVal, const variant<int, float, bool, string> &rightVal)
{
    return holds_alternative<T>(leftVal) && holds_alternative<T>(rightVal);
}

ASTNode::ASTNode(int val)
{
    type = NodeType::INT;
    value.intVal = val;
}

ASTNode::ASTNode(float val)
{
    type = NodeType::FLOAT;
    value.floatVal = val;
}

ASTNode::ASTNode(bool val)
{
    type = NodeType::BOOL;
    value.boolVal = val;
}

ASTNode::ASTNode(const string &val)
{
    type = NodeType::STRING;
    value.stringVal = new string(val);
}

ASTNode::ASTNode(const string &id, bool isIdentifier)
{
    if (isIdentifier)
    {
        type = NodeType::IDENTIFIER;
        value.stringVal = new string(id);
    }
}

ASTNode::ASTNode(Operator op, ASTNode *left, ASTNode *right)
{
    type = NodeType::OPERATOR;
    value.op = op;
    this->left = left;
    this->right = right;
}

variant<int, float, bool, string> ASTNode::evaluate(SymTable &symTable)
{
    switch (type)
    {
    case NodeType::INT:
        return value.intVal;
    case NodeType::FLOAT:
        return value.floatVal;
    case NodeType::BOOL:
        return value.boolVal;
    case NodeType::STRING:
        return *value.stringVal;
    case NodeType::IDENTIFIER:
        // return symTable.getVar(*value.stringVal).value;
        return 101; // tmp test value
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
                    return get<int>(leftVal) + get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) + get<float>(rightVal);
                }
                break;
            case Operator::SUBTRACT:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) - get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) - get<float>(rightVal);
                }
                break;
            case Operator::MULTIPLY:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) * get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) * get<float>(rightVal);
                }
                break;
            case Operator::DIVIDE:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) / get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) / get<float>(rightVal);
                }
                break;
            case Operator::MODULO:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) % get<int>(rightVal);
                }
                break;
            case Operator::POWER:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return static_cast<int>(pow(get<int>(leftVal), get<int>(rightVal)));
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return static_cast<float>(pow(get<float>(leftVal), get<float>(rightVal)));
                }
                break;
            case Operator::EQ:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) == get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) == get<float>(rightVal);
                }
                else if (checkOperands<bool>(leftVal, rightVal))
                {
                    return get<bool>(leftVal) == get<bool>(rightVal);
                }
                else if (checkOperands<string>(leftVal, rightVal))
                {
                    return get<string>(leftVal) == get<string>(rightVal);
                }
                break;
            case Operator::NEQ:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) != get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) != get<float>(rightVal);
                }
                else if (checkOperands<bool>(leftVal, rightVal))
                {
                    return get<bool>(leftVal) != get<bool>(rightVal);
                }
                else if (checkOperands<string>(leftVal, rightVal))
                {
                    return get<string>(leftVal) != get<string>(rightVal);
                }
                break;
            case Operator::GT:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) > get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) > get<float>(rightVal);
                }
                break;
            case Operator::LT:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) < get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) < get<float>(rightVal);
                }
                break;
            case Operator::GE:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) >= get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) >= get<float>(rightVal);
                }
                break;
            case Operator::LE:
                if (checkOperands<int>(leftVal, rightVal))
                {
                    return get<int>(leftVal) <= get<int>(rightVal);
                }
                else if (checkOperands<float>(leftVal, rightVal))
                {
                    return get<float>(leftVal) <= get<float>(rightVal);
                }
                break;
            case Operator::AND:
                if (checkOperands<bool>(leftVal, rightVal))
                {
                    return get<bool>(leftVal) && get<bool>(rightVal);
                }
                break;
            case Operator::OR:
                if (checkOperands<bool>(leftVal, rightVal))
                {
                    return get<bool>(leftVal) || get<bool>(rightVal);
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
                    return -get<int>(leftVal);
                }
                else if (holds_alternative<float>(leftVal))
                {
                    return -get<float>(leftVal);
                }
                break;
            case Operator::NOT:
                if (holds_alternative<bool>(leftVal))
                {
                    return !get<bool>(leftVal);
                }
                break;
            }
        }
    }
    break;
    default:
        return 0;
    }
}

void ASTNode::printNode() const
{
    switch (type)
    {
    case NodeType::INT:
        std::cout << "Int: " << value.intVal;
        break;
    case NodeType::FLOAT:
        std::cout << "Float: " << value.floatVal;
        break;
    case NodeType::BOOL:
        std::cout << "Bool: " << (value.boolVal ? "true" : "false");
        break;
    case NodeType::STRING:
        std::cout << "String: " << *value.stringVal;
        break;
    case NodeType::IDENTIFIER:
        std::cout << "Identifier: " << *value.stringVal;
        break;
    case NodeType::OPERATOR:
        std::cout << "Operator: " << static_cast<int>(value.op);
        break;
    }
}

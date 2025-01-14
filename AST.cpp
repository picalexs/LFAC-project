#include "AST.h"
#include <iostream>
#include <cmath>
#include <variant>

template <typename T>
bool checkOperands(const Value &leftVal, const Value &rightVal)
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

ASTNode::ASTNode(bool val, bool isBool)
{
    type = NodeType::BOOL;
    value.boolVal = val;
}

ASTNode::ASTNode(const string &val)
{
    type = NodeType::IDENTIFIER;
    value.stringVal = new string(val);
}

ASTNode::ASTNode(Operator op, ASTNode *left, ASTNode *right)
{
    type = NodeType::OPERATOR;
    value.op = op;
    this->left = left;
    this->right = right;
}

ASTNode::~ASTNode()
{
    if (type == NodeType::IDENTIFIER)
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

Value ASTNode::evaluate(SymTable &symTable)
{
    switch (type)
    {
    case NodeType::INT:
        evaluatedResult = value.intVal;
        return evaluatedResult;
    case NodeType::FLOAT:
        evaluatedResult = value.floatVal;
        return evaluatedResult;
    case NodeType::BOOL:
        evaluatedResult = value.boolVal;
        return evaluatedResult;
    case NodeType::CHAR:
        evaluatedResult = value.charVal;
        return evaluatedResult;
    case NodeType::STRING:
        evaluatedResult = *value.stringVal;
        return evaluatedResult;
    case NodeType::IDENTIFIER:
    {
        Value symValue = symTable.getValue(*value.stringVal);
        if (holds_alternative<int>(symValue))
        {
            type = NodeType::INT;
            evaluatedResult = get<int>(symValue);
        }
        else if (holds_alternative<float>(symValue))
        {
            type = NodeType::FLOAT;
            evaluatedResult = get<float>(symValue);
        }
        else if (holds_alternative<bool>(symValue))
        {
            type = NodeType::BOOL;
            evaluatedResult = get<bool>(symValue);
        }
        else if (holds_alternative<char>(symValue))
        {
            type = NodeType::CHAR;
            evaluatedResult = get<char>(symValue);
        }
        else if (holds_alternative<string>(symValue))
        {
            type = NodeType::STRING;
            evaluatedResult = get<string>(symValue);
        }
        else
        {
            cout << "Error: Unsupported type for variable '" << *value.stringVal << "'\n";
            return monostate{};
        }
        return evaluatedResult;
    }
    case NodeType::OPERATOR:
    {
        auto leftVal = left->evaluate(symTable);
        if (!right)
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
                cout << "Error: Unsupported type for unary operator '-'\n";
                return monostate{};
            case Operator::NOT:
                if (holds_alternative<bool>(leftVal))
                {
                    evaluatedResult = !get<bool>(leftVal);
                    return evaluatedResult;
                }
                cout << "Error: Unsupported type for unary operator '!'\n";
                return monostate{};
            default:
                cout << "Error: Unsupported operator!" << endl;
                return monostate{};
            }
        }

        auto rightVal = right->evaluate(symTable);
        switch (value.op)
        {
        case Operator::ADD:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) + get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) + get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '+'\n";
            return monostate{};
        case Operator::SUBTRACT:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) - get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) - get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '-'\n";
            return monostate{};
        case Operator::MULTIPLY:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) * get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) * get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '*'\n";
            return monostate{};
        case Operator::DIVIDE:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) / get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) / get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '/'\n";
            return monostate{};
        case Operator::MODULO:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) % get<int>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '%'\n";
            return monostate{};
        case Operator::POWER:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = static_cast<int>(pow(get<int>(leftVal), get<int>(rightVal)));
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = static_cast<float>(pow(get<float>(leftVal), get<float>(rightVal)));
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '^'\n";
            return monostate{};
        case Operator::EQ:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) == get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) == get<float>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<bool>(leftVal, rightVal))
            {
                evaluatedResult = get<bool>(leftVal) == get<bool>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '=='\n";
            return monostate{};
        case Operator::NEQ:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) != get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) != get<float>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<bool>(leftVal, rightVal))
            {
                evaluatedResult = get<bool>(leftVal) != get<bool>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '!='\n";
            return monostate{};
        case Operator::GT:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) > get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) > get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '>'\n";
            return monostate{};
        case Operator::LT:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) < get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) < get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '<'\n";
            return monostate{};
        case Operator::GE:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) >= get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) >= get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '>='\n";
            return monostate{};
        case Operator::LE:
            if (checkOperands<int>(leftVal, rightVal))
            {
                evaluatedResult = get<int>(leftVal) <= get<int>(rightVal);
                return evaluatedResult;
            }
            if (checkOperands<float>(leftVal, rightVal))
            {
                evaluatedResult = get<float>(leftVal) <= get<float>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '<='\n";
            return monostate{};
        case Operator::AND:
            if (checkOperands<bool>(leftVal, rightVal))
            {
                evaluatedResult = get<bool>(leftVal) && get<bool>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '&&'\n";
            return monostate{};
        case Operator::OR:
            if (checkOperands<bool>(leftVal, rightVal))
            {
                evaluatedResult = get<bool>(leftVal) || get<bool>(rightVal);
                return evaluatedResult;
            }
            cout << "Error: Unsupported operands for operator '||'\n";
            return monostate{};
        default:
            cout << "Error: Unsupported operator!" << endl;
            return monostate{};
        }
    }
    default:
        cout << "Error: Unsupported node type!" << endl;
        return monostate{};
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
    else if (holds_alternative<char>(evaluatedResult))
    {
        cout << "PRINT (char): " << get<char>(evaluatedResult) << endl;
    }
    else if (holds_alternative<string>(evaluatedResult))
    {
        cout << "PRINT (string): " << get<string>(evaluatedResult) << endl;
    }
    else
    {
        cout << "PRINT (undefined): " << endl;
    }
}

string ASTNode::getType() const
{
    if (holds_alternative<int>(evaluatedResult))
    {
        return "int";
    }
    else if (holds_alternative<float>(evaluatedResult))
    {
        return "float";
    }
    else if (holds_alternative<bool>(evaluatedResult))
    {
        return "bool";
    }
    else if (holds_alternative<char>(evaluatedResult))
    {
        return "char";
    }
    else if (holds_alternative<string>(evaluatedResult))
    {
        return "string";
    }
    return "undefined";
}
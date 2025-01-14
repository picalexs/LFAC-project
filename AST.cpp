#include "AST.h"
#include <iostream>
#include <cmath>
#include <variant>

template <typename T>
bool checkOperands(const Value &leftVal, const Value &rightVal)
{
    return std::holds_alternative<T>(leftVal) && std::holds_alternative<T>(rightVal);
}

template <typename T>
T getIfType(const Value &val) {
    if (std::holds_alternative<T>(val)) {
        return std::get<T>(val);
    }
    throw std::bad_variant_access();
}

ASTNode::~ASTNode()
{
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
    cout << "+";
    flush(cout);
    switch (type)
    {
    case NodeType::INT:
        evaluatedResult = get<int>(value);
        return evaluatedResult;
    case NodeType::FLOAT:
        evaluatedResult = get<float>(value);
        return evaluatedResult;
    case NodeType::BOOL:
        evaluatedResult = get<bool>(value);
        return evaluatedResult;
    case NodeType::CHAR:
        evaluatedResult = get<char>(value);
        return evaluatedResult;
    case NodeType::STRING:
        evaluatedResult = get<string>(value);
        return evaluatedResult;
    case NodeType::VECTORINT:
        evaluatedResult = get<vector<int>>(symTable.getValue(get<string>(value)));
        return evaluatedResult;
    case NodeType::VECTORFLOAT:
        evaluatedResult = get<vector<float>>(symTable.getValue(get<string>(value)));
        return evaluatedResult;
    case NodeType::VECTORBOOL:
        evaluatedResult = get<vector<bool>>(symTable.getValue(get<string>(value)));
        return evaluatedResult;
    case NodeType::VECTORCHAR:
        evaluatedResult = get<vector<char>>(symTable.getValue(get<string>(value)));
        return evaluatedResult;
    case NodeType::VECTORSTRING:
        evaluatedResult = get<vector<string>>(symTable.getValue(get<string>(value)));
        return evaluatedResult;
    case NodeType::IDENTIFIER:
    {
        cout << "!!";
        flush(cout);
        cout << get<string>(value) << "!!";
        flush(cout);

        Value symValue = symTable.getValue(get<string>(value));
        if (holds_alternative<int>(symValue))
        {
            cout << "1??";
            flush(cout);
            type = NodeType::INT;
            evaluatedResult = get<int>(symValue);
        }
        else if (holds_alternative<float>(symValue))
        {
            cout << "2??";
            flush(cout);
            type = NodeType::FLOAT;
            evaluatedResult = get<float>(symValue);
        }
        else if (holds_alternative<bool>(symValue))
        {
            cout << "3??";
            flush(cout);
            type = NodeType::BOOL;
            evaluatedResult = get<bool>(symValue);
        }
        else if (holds_alternative<char>(symValue))
        {
            cout << "4??";
            flush(cout);
            type = NodeType::CHAR;
            evaluatedResult = get<char>(symValue);
        }
        else if (holds_alternative<string>(symValue))
        {
            cout << "5??";
            flush(cout);
            type = NodeType::STRING;
            evaluatedResult = get<string>(symValue);
        }
        else if (holds_alternative<vector<int>>(symValue))
        {
            cout << "??";
            flush(cout);
            if (index != -1)
            {
                if (index < 0 || index > get<vector<int>>(symValue).size())
                {
                    cout << "Error: Index out of bounds for vector '" << get<string>(value) << "'\n";
                    cout<<index<<endl;
                    return monostate{};
                }
                type = NodeType::INT;
                evaluatedResult = get<vector<int>>(symValue)[index];
                return evaluatedResult;
            }

            type = NodeType::VECTORINT;
            evaluatedResult = get<vector<int>>(symValue);
        }
        else if (holds_alternative<vector<float>>(symValue))
        {
            cout << "??2";
            flush(cout);
            if (index != -1)
            {
                if (index < 0 || index >= get<vector<float>>(symValue).size())
                {
                    cout << "Error: Index out of bounds for vector '" << get<string>(value) << "'\n";
                    return monostate{};
                }
                type = NodeType::FLOAT;
                evaluatedResult = get<vector<float>>(symValue)[index];
                return evaluatedResult;
            }
            type = NodeType::VECTORFLOAT;
            evaluatedResult = get<vector<float>>(symValue);
        }
        else if (holds_alternative<vector<bool>>(symValue))
        {
            cout << "??3";
            flush(cout);
            if (index != -1)
            {
                if (index < 0 || index >= get<vector<bool>>(symValue).size())
                {
                    cout << "Error: Index out of bounds for vector '" << get<string>(value) << "'\n";
                    return monostate{};
                }
                type = NodeType::BOOL;
                evaluatedResult = get<vector<bool>>(symValue)[index];
                return evaluatedResult;
            }
            type = NodeType::VECTORBOOL;
            evaluatedResult = get<vector<bool>>(symValue);
        }
        else if (holds_alternative<vector<char>>(symValue))
        {
            cout << "??4";
            flush(cout);
            if (index != -1)
            {
                if (index < 0 || index >= get<vector<char>>(symValue).size())
                {
                    cout << "Error: Index out of bounds for vector '" << get<string>(value) << "'\n";
                    return monostate{};
                }
                type = NodeType::CHAR;
                evaluatedResult = get<vector<char>>(symValue)[index];
                return evaluatedResult;
            }
            type = NodeType::VECTORCHAR;
            evaluatedResult = get<vector<char>>(symValue);
        }
        else if (holds_alternative<vector<string>>(symValue))
        {
            cout << "??5";
            flush(cout);
            if (index != -1)
            {
                if (index < 0 || index >= get<vector<string>>(symValue).size())
                {
                    cout << "Error: Index out of bounds for vector '" << get<string>(value) << "'\n";
                    return monostate{};
                }
                type = NodeType::STRING;
                evaluatedResult = get<vector<string>>(symValue)[index];
                return evaluatedResult;
            }
            type = NodeType::VECTORSTRING;
            evaluatedResult = get<vector<string>>(symValue);
        }
        else
        {
            cout << "Error: Unsupported type for variable '" << get<string>(value) << "'\n";
            return monostate{};
        }
        return evaluatedResult;
    }
    case NodeType::OPERATOR:
    {
        auto leftVal = left->evaluate(symTable);
        if (!right)
        {
            switch (get<Operator>(value))
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
        switch (get<Operator>(value))
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
    else if (holds_alternative<vector<int>>(evaluatedResult))
    {
        cout << "PRINT (vector<int>): ";
        for (auto &val : get<vector<int>>(evaluatedResult))
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else if (holds_alternative<vector<float>>(evaluatedResult))
    {
        cout << "PRINT (vector<float>): ";
        for (auto &val : get<vector<float>>(evaluatedResult))
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else if (holds_alternative<vector<bool>>(evaluatedResult))
    {
        cout << "PRINT (vector<bool>): ";
        for (auto val : get<vector<bool>>(evaluatedResult))
        {
            cout << (val ? "true" : "false") << " ";
        }
        cout << endl;
    }
    else if (holds_alternative<vector<char>>(evaluatedResult))
    {
        cout << "PRINT (vector<char>): ";
        for (auto &val : get<vector<char>>(evaluatedResult))
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else if (holds_alternative<vector<string>>(evaluatedResult))
    {
        cout << "PRINT (vector<string>): ";
        for (auto &val : get<vector<string>>(evaluatedResult))
        {
            cout << val << " ";
        }
        cout << endl;
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
    else if (holds_alternative<vector<int>>(evaluatedResult))
    {
        return "vector<int>";
    }
    else if (holds_alternative<vector<float>>(evaluatedResult))
    {
        return "vector<float>";
    }
    else if (holds_alternative<vector<bool>>(evaluatedResult))
    {
        return "vector<bool>";
    }
    else if (holds_alternative<vector<char>>(evaluatedResult))
    {
        return "vector<char>";
    }
    else if (holds_alternative<vector<string>>(evaluatedResult))
    {
        return "vector<string>";
    }
    return "undefined";
}

string ASTNode::getVectorName() const
{
    cout << "a";
    return get<string>(value);
}

string ASTNode::getVectorIndex() const
{
    return index != -1 ? to_string(index) : "";
}
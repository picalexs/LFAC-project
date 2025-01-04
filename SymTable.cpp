#include "SymTable.h"
#include <iostream>
#include <fstream>

void ParamList::addParam(const string &type, const string &name)
{
    types.push_back(type);
    names.push_back(name);
}

string ParamList::toString() const
{
    string result;
    for (size_t i = 0; i < types.size(); i++)
    {
        result += types[i] + " " + names[i];
        if (i < types.size() - 1)
        {
            result += ", ";
        }
    }
    return result;
}

void SymTable::enterScope(const string &scopeName)
{
    scopeNames.push(scopeName); // Push the scope name
    cout << "Entering " << scopeName << " scope." << endl;
    scopeStack.push(currentVars);
    currentVars.clear();
}

void SymTable::leaveScope()
{
    if (!scopeStack.empty() && !scopeNames.empty())
    {
        cout << "Leaving " << scopeNames.top() << " scope." << endl;
        scopeNames.pop(); // Pop the scope name
        currentVars = scopeStack.top();
        scopeStack.pop();
    }
}

bool SymTable::existsId(const string &id)
{
    return currentVars.find(id) != currentVars.end();
}

void SymTable::addVar(const string &type, const string &name, const Value &value)
{
    IdInfo varInfo("variable", type, name, value);
    currentVars[name] = varInfo;
}

void SymTable::addFunc(const string &returnType, const string &name)
{
    IdInfo funcInfo("function", returnType, name);
    currentVars[name] = funcInfo;
}

void SymTable::addClass(const string &name)
{
    IdInfo classInfo("class", "", name);
    currentVars[name] = classInfo;
}

string SymTable::getType(const string &id)
{
    if (existsId(id))
    {
        return currentVars[id].type;
    }
    return "";
}

bool SymTable::removeId(const string &id)
{
    if (existsId(id))
    {
        currentVars.erase(id);
        return true;
    }
    return false;
}

void SymTable::printVars() const
{
    cout << "Variables in " << tableName << " scope: " << endl;
    for (const auto &entry : currentVars)
    {
        if (entry.second.idType == "variable")
        {
            cout << "Variable: " << entry.second.name << " : " << entry.second.type << " = ";

            try
            {
                if (holds_alternative<int>(entry.second.value))
                {
                    cout << get<int>(entry.second.value);
                }
                else if (holds_alternative<float>(entry.second.value))
                {
                    cout << get<float>(entry.second.value);
                }
                else if (holds_alternative<bool>(entry.second.value))
                {
                    cout << (get<bool>(entry.second.value) ? "true" : "false");
                }
                else if (holds_alternative<string>(entry.second.value))
                {
                    cout << get<string>(entry.second.value);
                }
                else if (holds_alternative<char>(entry.second.value))
                {
                    cout << get<char>(entry.second.value);
                }
                else if (holds_alternative<vector<int>>(entry.second.value))
                {
                    cout << "[ ";
                    for (auto val : get<vector<int>>(entry.second.value))
                    {
                        cout << val << " ";
                    }
                    cout << "]";
                }
                else if (holds_alternative<vector<float>>(entry.second.value))
                {
                    cout << "[ ";
                    for (auto val : get<vector<float>>(entry.second.value))
                    {
                        cout << val << " ";
                    }
                    cout << "]";
                }
                else if (holds_alternative<vector<bool>>(entry.second.value))
                {
                    cout << "[ ";
                    for (auto val : get<vector<bool>>(entry.second.value))
                    {
                        cout << (val ? "true" : "false") << " ";
                    }
                    cout << "]";
                }
                else if (holds_alternative<vector<char>>(entry.second.value))
                {
                    cout << "[ ";
                    for (auto val : get<vector<char>>(entry.second.value))
                    {
                        cout << val << " ";
                    }
                    cout << "]";
                }
                else if (holds_alternative<vector<string>>(entry.second.value))
                {
                    cout << "[ ";
                    for (auto val : get<vector<string>>(entry.second.value))
                    {
                        cout << val << " ";
                    }
                    cout << "]";
                }
                else
                {
                    cout << "undefined";
                }
            }
            catch (...)
            {
                cout << "undefined";
            }
            cout << endl;
        }
    }
}

void SymTable::printFuncs() const
{
    cout << "Functions in " << tableName << " scope: " << endl;
    for (const auto &entry : currentVars)
    {
        if (entry.second.idType == "function")
        {
            cout << "Function: " << entry.second.name << " : " << entry.second.type;
            if (!entry.second.params.toString().empty())
            {
                cout << " (" << entry.second.params.toString() << ")";
            }
            cout << endl;
        }
    }
}

void SymTable::printClasses() const
{
    cout << "Classes in " << tableName << " scope: " << endl;
    for (const auto &entry : currentVars)
    {
        if (entry.second.idType == "class")
        {
            cout << "Class: " << entry.second.name << endl;
        }
    }
}

void SymTable::printGlobalScopes() const
{
    printVars();
    printFuncs();
    printClasses();
}

void SymTable::printAllScopes() const
{
    cout << "=== All Scopes ===\n";
    stack<unordered_map<string, IdInfo>> tempStack = scopeStack;
    stack<string> tempScopeNames = scopeNames;

    printGlobalScopes();

    while (!tempStack.empty())
    {
        cout << "Scope: " << tempScopeNames.top() << endl;
        for (const auto &entry : tempStack.top())
        {
            if (entry.second.idType == "variable")
            {
                cout << "Variable: " << entry.second.name << " : " << entry.second.type << endl;
            }
            else if (entry.second.idType == "function")
            {
                cout << "Function: " << entry.second.name << " : " << entry.second.type << endl;
            }
            else if (entry.second.idType == "class")
            {
                cout << "Class: " << entry.second.name << endl;
            }
        }
        tempScopeNames.pop();
        tempStack.pop();
    }
}

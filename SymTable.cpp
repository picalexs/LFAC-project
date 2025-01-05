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
            result += ", ";
    }
    return result;
}

void SymTable::enterScope(const string &scopeName, const string &scopeType)
{
    scopeNames.push(scopeName);
    scopeTypes.push(scopeType);
    cout << "+Entering " << scopeType << " scope: " << scopeName << "\n";
    scopeStack.push(currentVars);
    currentVars.clear();
}

void SymTable::leaveScope()
{
    if (!scopeStack.empty() && !scopeNames.empty() && !scopeTypes.empty())
    {
        string scopeName = scopeNames.top();
        string scopeType = scopeTypes.top();

        cout << "-Leaving " << scopeType << " scope: " << scopeName << "\n";

        if(scopeType == "global")
        {
            globalScope = currentVars;
        }
        else if(scopeType == "class")
        {
            classScopes[scopeName] = currentVars;
        }
        else if(scopeType == "function")
        {
            functionScopes[scopeName] = currentVars;
        }
        else if(scopeType=="block"){
            blockScopes[scopeName] = currentVars;
        }
        else if(scopeType == "constructor")
        {
            constructorScopes[scopeName] = currentVars;
        }
        else if(scopeType=="method")
        {
            methodScopes[scopeName] = currentVars;
        }
        else if(scopeType == "main")
        {
            mainScope = currentVars;
        }
        else
        {
            cout << "Error: Unknown scope type: " << scopeType <<' '<<scopeName<< "\n";
        }

        scopeNames.pop();
        scopeTypes.pop();
        currentVars = scopeStack.top();
        scopeStack.pop();
    }
}

string SymTable::getScope()
{
    if (!scopeNames.empty())
    {
        return scopeNames.top();
    }
    return "No scope";
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

void SymTable::addConstructor(const string &name)
{
    IdInfo constructorInfo("constructor", "", name);
    currentVars[name] = constructorInfo;
}

void SymTable::addMethod(const string &returnType, const string &name)
{
    IdInfo methodInfo("method", returnType, name);
    currentVars[name] = methodInfo;
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
void SymTable::printScope(const string &scopeType, const map<string, map<string, IdInfo>> &scopes) const
{
    cout << "=== " << scopeType << " ===\n";
    for (const auto &scope : scopes)
    {
        cout << scopeType << ": " << scope.first << "\n";
        for (const auto &entry : scope.second)
        {
            cout << "  " << entry.second.idType << ": " << entry.second.name;
            if (entry.second.idType != "class" && entry.second.idType != "constructor")
                cout << " : " << entry.second.type;
            cout << endl;
        }
    }
    cout << endl;
}

void SymTable::printGlobalScope() const
{
    cout << "=== Global Scope ===\n";
    for (const auto &entry : globalScope)
    {
        cout << "  " << entry.second.idType << ": " << entry.second.name;
        if (entry.second.idType != "class")
            cout << " : " << entry.second.type;
        cout << endl;
    }
}

void SymTable::printClassScopes() const
{
    printScope("Class Scope", classScopes);
}

void SymTable::printFunctionScopes() const
{
    printScope("Function Scope", functionScopes);
}

void SymTable::printBlockScopes() const
{
    printScope("Block Scope", blockScopes);
}

void SymTable::printConstructorScopes() const
{
    printScope("Constructor Scope", constructorScopes);
}

void SymTable::printMethodScopes() const
{
    printScope("Method Scope", methodScopes);
}

void SymTable::printAllScopes() const
{
    printGlobalScope();
    printClassScopes();
    printFunctionScopes();
}

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

void clearFile(const string &fileName)
{
    ofstream fout(fileName, ios::trunc);
    fout.close();
}

void writeToFile(const string &fileName, const string &content)
{
    ofstream fout(fileName, ios::app);
    fout << content;
    fout.close();
}

template <typename T>
string getVectorSizeString(const Value &value)
{
    if (holds_alternative<vector<T>>(value))
    {
        return "[" + to_string(get<vector<T>>(value).size()) + "]";
    }
    return "";
}

void SymTable::enterScope(const string &scopeName, const string &scopeType)
{
    scopeNames.push(scopeName);
    scopeTypes.push(scopeType);
    indentLevel++;

    if (scopeType == "global")
    {
        clearFile(SCOPE_TREE_FILE);
    }

    writeToFile(SCOPE_TREE_FILE, std::string(indentLevel * 3, ' ') + ">Entering " + scopeType + " scope: " + scopeName + "\n");

    scopeStack.push(currentVars);
    currentVars.clear();
}

void SymTable::leaveScope()
{
    if (!scopeStack.empty() && !scopeNames.empty() && !scopeTypes.empty())
    {
        string scopeName = scopeNames.top();
        string scopeType = scopeTypes.top();

        writeToFile(SCOPE_TREE_FILE, std::string(indentLevel * 3, ' ') + "<Leaving " + scopeType + " scope: " + scopeName + "\n");

        if (scopeType == "global")
        {
            globalScope = currentVars;
        }
        else if (scopeType == "class")
        {
            classScopes[scopeName] = currentVars;
        }
        else if (scopeType == "function")
        {
            functionScopes[scopeName] = currentVars;
        }
        else if (scopeType == "constructor")
        {
            constructorScopes[scopeName] = currentVars;
        }
        else if (scopeType == "method")
        {
            methodScopes[scopeName] = currentVars;
        }
        else if (scopeType == "main")
        {
            mainScope = currentVars;
        }
        else if (scopeType != "block")
        {
            cout << "Error: Unknown scope type: " << scopeType << ' ' << scopeName << "\n";
        }

        scopeNames.pop();
        scopeTypes.pop();
        currentVars = scopeStack.top();
        scopeStack.pop();
        indentLevel--;
    }
}

string SymTable::getScope()
{
    if (scopeNames.empty())
    {
        return "Global Scope";
    }
    return scopeNames.top();
}

bool SymTable::existsId(const string &id)
{
    if (currentVars.find(id) != currentVars.end())
    {
        return true;
    }

    stack<map<string, IdInfo>> tempStack = scopeStack;
    while (!tempStack.empty())
    {
        const auto &scope = tempStack.top();
        if (scope.find(id) != scope.end())
        {
            return true;
        }
        tempStack.pop();
    }

    if (globalScope.find(id) != globalScope.end())
    {
        return true;
    }
    return false;
}

Value SymTable::returnIdValue(const string &id, map<string, IdInfo> &vars)
{
    if (holds_alternative<int>(vars[id].value))
    {
        return get<int>(vars[id].value);
    }
    else if (holds_alternative<float>(vars[id].value))
    {
        return get<float>(vars[id].value);
    }
    else if (holds_alternative<bool>(vars[id].value))
    {
        return get<bool>(vars[id].value);
    }
    else if (holds_alternative<char>(vars[id].value))
    {
        return get<char>(vars[id].value);
    }
    else if (holds_alternative<string>(vars[id].value))
    {
        return get<string>(vars[id].value);
    }
    else
    {
        cout << "Error: Unsupported type for variable '" << id << "'\n";
        return {};
    }
}

Value SymTable::getIdValue(const string &id)
{
    if (currentVars.find(id) != currentVars.end())
    {
        return returnIdValue(id, currentVars);
    }

    stack<map<string, IdInfo>> tempScopeStack = scopeStack;
    map<string, IdInfo> tempCurrentVars = currentVars;

    while (!tempScopeStack.empty())
    {
        if (tempScopeStack.top().find(id) != tempScopeStack.top().end())
        {
            return returnIdValue(id, tempScopeStack.top());
        }
        tempScopeStack.pop();
    }

    if (globalScope.find(id) != globalScope.end())
    {
        return returnIdValue(id, globalScope);
    }

    cout << "Error: Symbol '" << id << "' is not defined.\n";
    return {};
}

bool SymTable::isDefined(const string &id)
{
    stack<map<string, IdInfo>> tempScopeStack = scopeStack;
    map<string, IdInfo> tempCurrentVars = currentVars;

    if (tempCurrentVars.find(id) != tempCurrentVars.end())
    {
        return true;
    }

    while (!tempScopeStack.empty())
    {
        if (tempScopeStack.top().find(id) != tempScopeStack.top().end())
        {
            return true;
        }
        tempScopeStack.pop();
    }

    return false;
}

bool SymTable::existsFunc(const string &funcName)
{
    if (currentVars.find(funcName) != currentVars.end() &&
        currentVars[funcName].idType == "function")
    {
        return true;
    }

    stack<map<string, IdInfo>> tempStack = scopeStack;
    while (!tempStack.empty())
    {
        const auto &scope = tempStack.top();
        if (scope.find(funcName) != scope.end() && scope.at(funcName).idType == "function")
        {
            return true;
        }
        tempStack.pop();
    }

    return functionScopes.find(funcName) != functionScopes.end();
}

bool SymTable::existsClass(const string &className)
{
    if (currentVars.find(className) != currentVars.end() &&
        currentVars[className].idType == "class")
    {
        return true;
    }

    stack<map<string, IdInfo>> tempStack = scopeStack;
    while (!tempStack.empty())
    {
        const auto &scope = tempStack.top();
        if (scope.find(className) != scope.end() && scope.at(className).idType == "class")
        {
            return true;
        }
        tempStack.pop();
    }

    return classScopes.find(className) != classScopes.end();
}

bool SymTable::isUsedBeforeDefined(const string &id, const string &type)
{
    if (type == "variable")
    {
        return existsId(id);
    }
    else if (type == "function")
    {
        return existsFunc(id);
    }
    else if (type == "class")
    {
        return existsClass(id);
    }

    cout << "Error: Unknown type '" << type << "' for symbol '" << id << "'.\n";
    return false;
}

void SymTable::addVar(const string &type, const string &name, const Value &value)
{
    Value finalValue = value;
    if (type == "int")
    {
        finalValue = 0;
    }
    else if (type == "float")
    {
        finalValue = 0.0f;
    }
    else if (type == "bool")
    {
        finalValue = false;
    }
    else if(type == "char")
    {
        finalValue = '\0';
    }
    else if (type == "string")
    {
        finalValue = "";
    }
    else
    {
        cout << "Error: Unsupported type '" << type << "'!" << endl;
        return;
    }

    string sizeStr;
    sizeStr = getVectorSizeString<int>(finalValue) + getVectorSizeString<float>(finalValue) +
              getVectorSizeString<bool>(finalValue) + getVectorSizeString<string>(finalValue);

    string content = std::string(indentLevel * 3, ' ') + "+variable: " + name + " : " + type + sizeStr + "\n";
    writeToFile(SCOPE_TREE_FILE, content);

    IdInfo varInfo("variable", type, name, finalValue);
    cout << "Adding variable " << name << " of type " << type << endl;
    currentVars[name] = varInfo;
}

void SymTable::addVector(const string &type, const string &name, int size, const Value &defaultValue)
{
    if (size <= 0)
    {
        cout << "Error: Invalid array size! (size must be a positive integer)" << endl;
        return;
    }

    if (type == "int")
    {
        vector<int> tmp(size);
        addVar(type, name, tmp);
    }
    else if (type == "float")
    {
        vector<float> tmp(size);
        addVar(type, name, tmp);
    }
    else if (type == "bool")
    {
        vector<bool> tmp(size);
        addVar(type, name, tmp);
    }
    else if (type == "string")
    {
        vector<string> tmp(size);
        addVar(type, name, tmp);
    }
    else
    {
        cout << "Error: Unsupported array type '" << type << "'!" << endl;
    }
}

void SymTable::addEntity(const string &entityType, const string &name, const string &returnType)
{
    string content = std::string(indentLevel * 3, ' ') + "+" + entityType + ": " + name;
    if (!returnType.empty())
        content += " : " + returnType;
    content += "\n";
    writeToFile(SCOPE_TREE_FILE, content);

    IdInfo entityInfo(entityType, returnType, name);
    currentVars[name] = entityInfo;
}

void SymTable::addFunc(const string &returnType, const string &name, const vector<pair<string, string>> &params)
{
    ParamList paramList;
    for (const auto &param : params)
    {
        paramList.addParam(param.first, param.second);

        IdInfo paramInfo("variable", param.first, param.second);
        currentVars[param.second] = paramInfo;
    }

    IdInfo funcInfo("function", returnType, name);
    funcInfo.params = paramList;

    currentVars[name] = funcInfo;
}

void SymTable::addClass(const string &name)
{
    addEntity("class", name);
}

void SymTable::addConstructor(const string &name)
{
    addEntity("constructor", name);
}

void SymTable::addMethod(const string &returnType, const string &name)
{
    addEntity("method", name, returnType);
}

void SymTable::printScope(const string &fileName, const string &scopeType, const map<string, map<string, IdInfo>> &scopes) const
{
    writeToFile(fileName, "=== " + scopeType + " ===\n");
    for (const auto &scope : scopes)
    {
        writeToFile(fileName, std::string(indentLevel, ' ') + scopeType + ": " + scope.first + "\n");
        for (const auto &entry : scope.second)
        {
            string content = "  " + entry.second.idType + ": " + entry.second.name;
            if (entry.second.idType != "class" && entry.second.idType != "constructor")
            {
                content += " : " + entry.second.type;
            }
            content += getVectorSizeString<int>(entry.second.value) +
                       getVectorSizeString<float>(entry.second.value) +
                       getVectorSizeString<bool>(entry.second.value) +
                       getVectorSizeString<string>(entry.second.value) + "\n";
            writeToFile(fileName, content);
        }
    }
    writeToFile(fileName, "\n");
}

void SymTable::printGlobalScope(const string &fileName) const
{
    map<string, map<string, IdInfo>> globalTmp;
    globalTmp["Global Scope"] = globalScope;
    printScope(fileName, "Global Scope", globalTmp);
}

void SymTable::printClassScopes(const string &fileName) const
{
    printScope(fileName, "Class Scope", classScopes);
}

void SymTable::printFunctionScopes(const string &fileName) const
{
    printScope(fileName, "Function Scope", functionScopes);
}

void SymTable::printConstructorScopes(const string &fileName) const
{
    printScope(fileName, "Constructor Scope", constructorScopes);
}

void SymTable::printMethodScopes(const string &fileName) const
{
    printScope(fileName, "Method Scope", methodScopes);
}

void SymTable::printAskedScopes() const
{
    clearFile(SCOPE_FILE1);
    printGlobalScope(SCOPE_FILE1);
    printClassScopes(SCOPE_FILE1);
    printFunctionScopes(SCOPE_FILE1);
}

string SymTable::getType(const string &id)
{
    if (currentVars.find(id) != currentVars.end())
    {
        return currentVars[id].type;
    }

    stack<map<string, IdInfo>> tempStack = scopeStack;
    while (!tempStack.empty())
    {
        if (tempStack.top().find(id) != tempStack.top().end())
        {
            return tempStack.top().at(id).type;
        }
        tempStack.pop();
    }

    if (globalScope.find(id) != globalScope.end())
    {
        return globalScope.at(id).type;
    }

    cout << "Error: Variable '" << id << "' not defined!" << endl;
    return "";
}

bool SymTable::checkAssignmentType(const string &lhs, const string &rhs)
{
    string lhsType = getType(lhs);
    string rhsType = getType(rhs);

    if (lhsType != rhsType)
    {
        cout << "Error: Incompatible types in assignment: '" << lhs << "' and '" << rhs << "'!\n";
        return false;
    }

    return true;
}

void SymTable::printAllScopes() const
{
    clearFile(SCOPE_FILE2);
    printGlobalScope(SCOPE_FILE2);
    printClassScopes(SCOPE_FILE2);
    printFunctionScopes(SCOPE_FILE2);
    printConstructorScopes(SCOPE_FILE2);
    printMethodScopes(SCOPE_FILE2);
}

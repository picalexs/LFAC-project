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
        else if(scopeType != "block")
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

bool SymTable::existsId(const string &id) {
    if (currentVars.find(id) != currentVars.end()) {
        return true;
    }

    stack<map<string, IdInfo>> tempStack = scopeStack;
    while (!tempStack.empty()) {
        const auto &scope = tempStack.top();
        if (scope.find(id) != scope.end()) {
            return true;
        }
        tempStack.pop();
    }

    if (globalScope.find(id) != globalScope.end()) {
        return true;
    }
    return false;
}

VectorValue SymTable::returnIdValue(const string &id, map<string, IdInfo> &vars)
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
    else if(holds_alternative<char>(vars[id].value))
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
        // nu putem returna un vector intreg, ci doar o valoare din vector
        return {};
    }
}

VectorValue SymTable::getIdValue(const string &id)
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

// Functie pentru verificarea definitiei unei variabile sau functii
bool SymTable::isUsedBeforeDefined(const string &id)
{
    if (isDefined(id))
    {
        return true; // Simbolul este definit, deci poate fi utilizat
    }
    else
    {
        cout << "Error: Symbol '" << id << "' is used before definition.\n";
        return false;
    }
}

void SymTable::addVar(const string &type, const string &name, const Value &value)
{
    string sizeStr;
    sizeStr = getVectorSizeString<int>(value) + getVectorSizeString<float>(value) +
             getVectorSizeString<bool>(value) + getVectorSizeString<string>(value);

    string content = std::string(indentLevel * 3, ' ') + "+variable: " + name + " : " + type + sizeStr + "\n";
    writeToFile(SCOPE_TREE_FILE, content);

    IdInfo varInfo("variable", type, name, value);
    currentVars[name] = varInfo;
}

void SymTable::addVector(const string &type, const string &name, int size, const VectorValue &defaultValue) {
    if (size <= 0) {
        cout << "Error: Invalid array size! (size must be a positive integer)" << endl;
        return;
    }

    if (type == "int") {
        vector<int> tmp(size);
        addVar(type, name, tmp);
    } else if (type == "float") {
        vector<float> tmp(size);
        addVar(type, name, tmp);
    } else if (type == "bool") {
        vector<bool> tmp(size);
        addVar(type, name, tmp);
    } else if (type == "string") {
        vector<string> tmp(size);
        addVar(type, name, tmp);
    } else {
        cout << "Error: Unsupported array type '" << type << "'!" << endl;
    }
}


void SymTable::addEntity(const string &entityType, const string &name, const string &returnType)
{
    string content = std::string(indentLevel * 3, ' ') + "+" + entityType + ": " + name;
    if (!returnType.empty()) content += " : " + returnType;
    content += "\n";
    writeToFile(SCOPE_TREE_FILE, content);

    IdInfo entityInfo(entityType, returnType, name);
    currentVars[name] = entityInfo;
}

void SymTable::addFunc(const string &returnType, const string &name)
{
    addEntity("function", name, returnType);
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

void SymTable::printAllScopes() const
{
    clearFile(SCOPE_FILE2);
    printGlobalScope(SCOPE_FILE2);
    printClassScopes(SCOPE_FILE2);
    printFunctionScopes(SCOPE_FILE2);
    printConstructorScopes(SCOPE_FILE2);
    printMethodScopes(SCOPE_FILE2);
}

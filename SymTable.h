#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <stack>
#include <variant>
using namespace std;

using Value = variant<int, float, bool, string, char, vector<int>, vector<float>, vector<bool>, vector<char>, vector<string>>;

class ParamList {
    vector<string> types;
    vector<string> names;

public:
    void addParam(const string &type, const string &name);
    string toString() const;
};

class IdInfo {
public:
    string idType;
    string type;
    string name;
    Value value;
    ParamList params;

    IdInfo() {}
    IdInfo(const string &idType, const string &type, const string &name, const Value &value = {})
        : idType(idType), type(type), name(name), value(value) {}
};

class SymTable {
    map<string, IdInfo> globalScope;
    map<string, map<string, IdInfo>> classScopes;
    map<string, map<string, IdInfo>> functionScopes;
    map<string, map<string, IdInfo>> blockScopes;
    map<string, map<string, IdInfo>> constructorScopes;
    map<string, map<string, IdInfo>> methodScopes;
    map<string,IdInfo> mainScope;

    map<string, IdInfo> currentVars;
    stack<map<string, IdInfo>> scopeStack;
    stack<string> scopeNames;
    stack<string> scopeTypes;
    string tableName;

public:
    SymTable(const string &name) : tableName(name) {}
    ~SymTable() {}

    void enterScope(const string &scopeName, const string &scopeType);
    void leaveScope();
    string getScope();

    bool existsId(const string &id);
    void addVar(const string &type, const string &name, const Value &value = {});
    void addFunc(const string &returnType, const string &name);
    void addClass(const string &name);
    void addConstructor(const string &name);
    void addMethod(const string &returnType, const string &name);

    string getType(const string &id);

    bool removeId(const string &id);


    void printScope(const string &scopeType, const map<string, map<string, IdInfo>> &scopes) const;
    
    void printGlobalScope() const;
    void printClassScopes() const;
    void printFunctionScopes() const;
    void printBlockScopes() const;
    void printConstructorScopes() const;
    void printMethodScopes() const;

    void printAllScopes() const;
};
#endif

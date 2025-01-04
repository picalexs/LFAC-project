#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <iostream>
#include <unordered_map>
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
    unordered_map<string, IdInfo> currentVars;
    stack<unordered_map<string, IdInfo>> scopeStack;
    stack<string> scopeNames;
    string tableName;

public:
    SymTable(const string &name) : tableName(name) {}
    ~SymTable() {}

    void enterScope(const string &tableName);
    void leaveScope();
    string getScope();

    bool existsId(const string &id);
    void addVar(const string &type, const string &name, const Value &value = {});
    void addFunc(const string &returnType, const string &name);
    void addClass(const string &name);

    string getType(const string &id);

    bool removeId(const string &id);

    void printVars() const;
    void printFuncs() const;
    void printClasses() const;
    void printGlobalScopes() const;
    void printAllScopes() const;
};
#endif

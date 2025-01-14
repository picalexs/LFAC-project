#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <stack>
#include <variant>
using namespace std;

#define SCOPE_FILE1 "scopes1.txt"
#define SCOPE_FILE2 "scopes2.txt"
#define SCOPE_TREE_FILE "scope_tree.txt"

using Value = variant<int, float, bool, string, char, vector<int>, vector<float>, vector<bool>, vector<char>, vector<string>, monostate>;

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
    map<string, map<string, IdInfo>> constructorScopes;
    map<string, map<string, IdInfo>> methodScopes;
    map<string,IdInfo> mainScope;

    map<string, IdInfo> currentVars;
    stack<map<string, IdInfo>> scopeStack;
    stack<string> scopeNames;
    stack<string> scopeTypes;
    string tableName;

    int indentLevel = 1;

public:
    SymTable(const string &name) : tableName(name) {}
    ~SymTable() {}

    void enterScope(const string &scopeName, const string &scopeType);
    void leaveScope();
    string getScope();

    bool existsId(const string &id);
    Value getValue(const string &id);
    string getType(const string &id);
    bool checkAssignmentType(const string &lhs, const string &rhs);
    Value returnIdValueType(const string &id, map<string, IdInfo> &vars);
    bool isDefined(const string &id);
    bool existsFunc(const string &funcName);
    bool existsClass(const string &className);
    bool isUsedBeforeDefined(const string &id, const string &type);

    void addEntity(const string &entityType, const string &name, const string &returnType = "");
    void addVar(const string &type, const string &name, const Value &value = {});
    void changeVar(const string &name, const Value &newValue);
    void addVector(const string &type, const string &name, int size, const Value &defaultValue = Value());
    void changeVectorElement(const string &name, int index, const Value &newValue);
    Value getVectorElement(const string &name, int index);
    void addFunc(const string &returnType, const string &name, const vector<pair<string, string>>& params);
    bool verifyFuncCallParams(const string &funcName, const ParamList &callParams);
    void addClass(const string &name);
    void addConstructor(const string &name);
    void addMethod(const string &returnType, const string &name);

    bool removeId(const string &id);


    void printScope(const string &fileName, const string &scopeType, const map<string, map<string, IdInfo>> &scopes) const;

    void printGlobalScope(const string &fileName) const;
    void printClassScopes(const string &fileName) const;
    void printFunctionScopes(const string &fileName) const;
    void printConstructorScopes(const string &fileName) const;
    void printMethodScopes(const string &fileName) const;

    void printAskedScopes() const;
    void printAllScopes() const;
};
#endif

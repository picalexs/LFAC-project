#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <stack>

class ParamList
{
    std::vector<std::string> types;
    std::vector<std::string> names;

public:
    void addParam(const std::string &type, const std::string &name);
    std::string toString() const;
};

class IdInfo
{
public:
    std::string idType;
    std::string type;
    std::string name;
    ParamList params;
    IdInfo() {}
    IdInfo(const std::string &idType, const std::string &type, const std::string &name)
        : idType(idType), type(type), name(name) {}
};

class SymTable
{
    std::unordered_map<std::string, IdInfo> ids;
    std::string name;
    std::stack<std::unordered_map<std::string, IdInfo>> scopeStack;

public:
    SymTable(const char *name);
    ~SymTable();

    bool existsId(const std::string &id);
    void addVar(const std::string &type, const std::string &name);
    void addFunc(const std::string &returnType, const std::string &name);
    void addClass(const std::string &name);

    std::string getType(const std::string &id);

    bool removeId(const std::string &id);

    void printFuncs();
    void printVars();

    void enterScope();
    void leaveScope();
};

#endif

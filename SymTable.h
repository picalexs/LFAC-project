#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <stack> // Pentru gestionarea scopurilor (optional)

class ParamList
{
    std::vector<std::string> types; // Tipurile parametrilor
    std::vector<std::string> names; // Numele parametrilor
public:
    void addParam(const std::string &type, const std::string &name);
    std::string toString() const; // Conversie la string pentru debug
};

class IdInfo
{
public:
    std::string idType; // Tipul simbolului (variabilă, funcție, clasă, etc.)
    std::string type;   // Tipul simbolului (e.g., int, string)
    std::string name;   // Numele simbolului
    ParamList params;   // Lista de parametri pentru funcții
    IdInfo() {}
    IdInfo(const std::string &idType, const std::string &type, const std::string &name)
        : idType(idType), type(type), name(name) {}
};

class SymTable
{
    std::unordered_map<std::string, IdInfo> ids;
    std::string name;                                               // Numele tabelei
    std::stack<std::unordered_map<std::string, IdInfo>> scopeStack; // Stack pentru gestionarea scopurilor
public:
    SymTable(const char *name);
    ~SymTable();

    bool existsId(const std::string &id);
    void addVar(const std::string &type, const std::string &name);
    void addFunc(const std::string &returnType, const std::string &name);
    void addClass(const std::string &name);

    // Accesarea tipului unui simbol
    std::string getType(const std::string &id);

    bool removeId(const std::string &id);

    void printFuncs();
    void printVars();

    void enterScope();
    void leaveScope();
};

#endif

#ifndef SYMTABLE_H
#define SYMTABLE_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

class ParamList {
    std::vector<std::string> types; // Tip parametri
    std::vector<std::string> names; // Nume parametri
public:
    void addParam(const std::string& type, const std::string& name);
    std::string toString() const; // Pentru debug
};

class IdInfo {
public:
    std::string idType; // Variab, fct, clasa
    std::string type;   // Tip simbol
    std::string name;
    ParamList params;   // pt fct
    IdInfo() {}
    IdInfo(const std::string& type, const std::string& name, const std::string& idType)
        : idType(idType), type(type), name(name) {}
};

class SymTable {
    std::map<std::string, IdInfo> ids;
    std::string name;
public:
    SymTable(const char* name);
    ~SymTable();

    bool existsId(const char* id);
    void addVar(const char* type, const char* name);
    void addFunc(const char* returnType, const char* name);
    void addClass(const char* name);

    std::string getType(const char* id);
    void printVars();
};

#endif

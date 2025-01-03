#include "SymTable.h"
#include <iostream>
#include <unordered_map>

SymTable::SymTable(const char *scopeName) : name(scopeName) {}

SymTable::~SymTable() {}

bool SymTable::existsId(const std::string &id)
{
    return ids.find(id) != ids.end();
}

void SymTable::addVar(const std::string &type, const std::string &name)
{
    IdInfo varInfo("variable", type, name);
    ids[name] = varInfo;
}

void SymTable::addFunc(const std::string &returnType, const std::string &name)
{
    IdInfo funcInfo("function", returnType, name);
    ids[name] = funcInfo;
}

void SymTable::addClass(const std::string &name)
{
    IdInfo classInfo("class", "", name);
    ids[name] = classInfo;
}

std::string SymTable::getType(const std::string &id)
{
    if (existsId(id))
    {
        return ids[id].type;
    }
    return ""; // Returnează un șir gol dacă simbolul nu există
}

bool SymTable::removeId(const std::string &id)
{
    if (existsId(id))
    {
        ids.erase(id);
        return true;
    }
    return false;
}

void SymTable::printVars()
{
    std::cout << "Variables in " << name << " scope: " << std::endl;
    for (auto &entry : ids)
    {
        if (entry.second.idType == "variable")
        {
            std::cout << entry.second.name << " : " << entry.second.type << std::endl;
        }
    } 
}

void SymTable::printFuncs() {
    std::cout << "Functions in " << name << " scope:" << std::endl;
    // Parcurgerea fiecărei intrări din tabelă pentru a afișa doar funcțiile
    for (auto &entry : ids) {
        if (entry.second.idType == "function") { // Verifică dacă simbolul este funcție
            // Afisare funcție și eventual tipul returnat și parametrii funcției
            std::cout << "Function Name: " << entry.second.name 
                      << ", Return Type: " << entry.second.type << std::endl;

            // Afișează parametrii funcției, dacă sunt
            std::cout << "Parameters: ";
            if (entry.second.params.toString() != "") {
                std::cout << entry.second.params.toString() << std::endl;
            } else {
                std::cout << "None" << std::endl;
            }
        }
    }
}

void SymTable::enterScope()
{
    std::unordered_map<std::string, IdInfo> newScope;
    scopeStack.push(newScope); // Crează un nou scop pe stivă
}

void SymTable::leaveScope()
{
    if (!scopeStack.empty())
    {
        scopeStack.pop(); // Ieși din scope, eliminând ultimul element din stack
    }
}

void ParamList::addParam(const std::string &type, const std::string &name)
{
    types.push_back(type);  // Adaugă tipul
    names.push_back(name);  // Adaugă numele
}

// Conversie la string pentru a vizualiza parametrii
std::string ParamList::toString() const
{
    std::string result = "";
    for (size_t i = 0; i < types.size(); ++i) {
        result += types[i] + " " + names[i]; // Concatenează tipul și numele fiecărui parametru
        if (i != types.size() - 1) {
            result += ", ";  // Adaugă separator doar între parametrii (nu după ultimul parametru)
        }
    }
    return result;  // Returnează șirul de caractere rezultat
}

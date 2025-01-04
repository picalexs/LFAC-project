#include "SymTable.h"
#include <iostream>
#include <unordered_map>

SymTable::SymTable(const char *scopeName) : name(scopeName) {}

SymTable::~SymTable() {}

bool SymTable::existsId(const std::string &id)
{
    return ids.find(id) != ids.end();
}

void SymTable::addVar(const std::string &type, const std::string &name, const Value &value)
{
    IdInfo varInfo("variable", type, name, value);
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
    return "";
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
            std::cout << entry.second.name << " : " << entry.second.type << " = ";
            try {
                if (std::holds_alternative<int>(entry.second.value)) {
                    std::cout << std::get<int>(entry.second.value);
                } else if (std::holds_alternative<float>(entry.second.value)) {
                    std::cout << std::get<float>(entry.second.value);
                } else if (std::holds_alternative<bool>(entry.second.value)) {
                    std::cout << (std::get<bool>(entry.second.value) ? "true" : "false");
                } else if (std::holds_alternative<std::string>(entry.second.value)) {
                    std::cout << std::get<std::string>(entry.second.value);
                } else if (std::holds_alternative<char>(entry.second.value)) {
                    std::cout << std::get<char>(entry.second.value);
                }
            } catch (...) {
                std::cout << "undefined";
            }
            std::cout << std::endl;
        }
    }
}

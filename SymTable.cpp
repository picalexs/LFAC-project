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
            std::cout << entry.second.name << " : " << entry.second.type << std::endl;
        }
    }
}

void SymTable::printFuncs()
{
    std::cout << "Functions in " << name << " scope:" << std::endl;
    for (auto &entry : ids)
    {
        if (entry.second.idType == "function")
        {
            std::cout << "Function Name: " << entry.second.name << ", Return Type: " << entry.second.type << std::endl;
            std::cout << "Parameters: ";
            if (entry.second.params.toString() != "")
            {
                std::cout << entry.second.params.toString() << std::endl;
            }
            else
            {
                std::cout << "None" << std::endl;
            }
        }
    }
}

void SymTable::enterScope()
{
    std::unordered_map<std::string, IdInfo> newScope;
    scopeStack.push(newScope);
}

void SymTable::leaveScope()
{
    if (!scopeStack.empty())
    {
        scopeStack.pop();
    }
}

void ParamList::addParam(const std::string &type, const std::string &name)
{
    types.push_back(type);
    names.push_back(name);
}

std::string ParamList::toString() const
{
    std::string result = "";
    for (size_t i = 0; i < types.size(); ++i)
    {
        result += types[i] + " " + names[i];
        if (i != types.size() - 1)
        {
            result += ", ";
        }
    }
    return result;
}

#include "SymTable.h"
using namespace std;

void SymTable::addVar(const char *type, const char *name)
{
    if (!existsId(name))
    {
        IdInfo var(type, name, "var");
        ids[name] = var;
    }
    else
        cerr << "Error: Variable '" << name << "' already exists." << endl;
}

void SymTable::addFunc(const char *returnType, const char *name)
{
    if (!existsId(name))
    {
        IdInfo func(returnType, name, "func");
        ids[name] = func;
    }
    else
        cerr << "Error: Function '" << name << "' already exists." << endl;
}

void SymTable::addClass(const char *name)
{
    if (!existsId(name))
    {
        IdInfo cls("class", name, "class");
        ids[name] = cls;
    }
    else
        cerr << "Error: Class '" << name << "' already exists." << endl;
}

bool SymTable::existsId(const char *var)
{
    return ids.find(var) != ids.end();
}

string SymTable::getType(const char *id)
{
    if (existsId(id))
        return ids[id].type;
    else
        return "undefined";
}

void SymTable::printVars()
{
    for (const pair<string, IdInfo> &v : ids)
        cout << "Name: " << v.first << ", Type: " << v.second.type << ", ID Type: " << v.second.idType << endl;
}

SymTable::~SymTable()
{
    ids.clear();
}

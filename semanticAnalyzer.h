#ifndef SEMANTICANALYZER_H_INCLUDED
#define SEMANTICANALYZER_H_INCLUDED
using namespace std;
#include<map>
#include <vector>
#include "ConstHeader.h"

extern int counter;
extern Scope* currentScope;
extern Scope* globeScope;

class Symbol{
    int ID;
    int SymbolType;
public:
    Symbol(){}
    Symbol(int ID,int SymbolType);
    bool hasType(int SymbolType);
};

class TypeSymbol : public Symbol{
    Scope* memberScope;
public:
    TypeSymbol(int ID,int SymbolType);
};

class VariableSymbol : public Symbol{
    TypeSymbol* type;
public:
    VariableSymbol(int ID,int SymbolType);
};

class FunctionSymbol : public Symbol{
    TypeSymbol* returnType;
    vector<TypeSymbol*> parameterType;
    Scope* parameterScope;
public:
    FunctionSymbol(int ID,int SymbolType);
};

class Scope{
    map<string,Symbol*> dict;
    int scopeType;
    Scope* parentScope;
    Scope* prevScope;
public:
    Scope(){}
    Scope(Scope* parentScope,int scopeType = NORMALSCOPE);
    Scope* prev();
    Symbol* putVariable(string variable,int SymbolType);
    bool foundVariable(string variable,int SymbolType);
    bool contains(string variable);
    void visit(Scope* nextScope);
};




#endif // SEMANTICANALYZER_H_INCLUDED

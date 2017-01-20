#ifndef SEMANTICANALYZER_H_INCLUDED
#define SEMANTICANALYZER_H_INCLUDED
using namespace std;
#include<map>
#include <vector>
#include "ConstHeader.h"

extern int counter;
extern Scope* currentScope;
extern Scope* globeScope;
extern TypeSymbol* IntType;
extern string SystemError;
class Symbol{
    int ID;
    int SymbolType;
public:
    Symbol(){}
    Symbol(int ID,int SymbolType);
    bool hasType(int SymbolType);
};

class TypeSymbol : public Symbol{
public:
    Scope* memberScope;
    vector<VariableSymbol*> members;
    void addMember(VariableSymbol*);
    TypeSymbol(int ID,int SymbolType);
};

class VariableSymbol : public Symbol{
    int level;
public:
    TypeSymbol* type;
    int getLevel();
    void setLevel(int level);
    VariableSymbol(int ID,int SymbolType);
    void setType(TypeSymbol* type);
};

class FunctionSymbol : public Symbol{

public:
    TypeSymbol* returnType;
    Scope* parameterScope;
    vector<VariableSymbol*> parameterVariable;
    void addParameter(VariableSymbol* variableSymbol);
    FunctionSymbol(int ID,int SymbolType);
};

class Scope{
    map<string,Symbol*> dict;
    int ScopeType;
    Scope* parentScope;
    Scope* prevScope;
public:
    Scope(){}
    Scope(Scope* parentScope,int scopeType = NORMALSCOPE);
    Scope* prev();
    void tag();
    bool inloop();
    Symbol* putVariable(string variable,int SymbolType);
    TypeSymbol* putAnonymousType();
    bool foundVariable(string variable,int SymbolType);
    Symbol* getVariable(string variable,int SymbolType);
    bool contains(string variable);
    void visit(Scope* nextScope);
};




#endif // SEMANTICANALYZER_H_INCLUDED

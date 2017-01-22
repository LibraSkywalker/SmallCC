#ifndef SEMANTICANALYZER_H_INCLUDED
#define SEMANTICANALYZER_H_INCLUDED

using namespace std;
#include<map>
#include <memory>
#include <vector>
#include "ConstHeader.h"

class Scope;
class VariableSymbol;

class Symbol{
    int SymbolType;
public:
	int ID;
    Symbol(){}
    Symbol(int ID,int SymbolType);
    bool hasType(int SymbolType);
};

class TypeSymbol : public Symbol{
public:
    shared_ptr<Scope> memberScope;
    vector<shared_ptr<VariableSymbol>> members;
	int size();
    void addMember(shared_ptr<VariableSymbol>);
    TypeSymbol(int ID,int SymbolType);
};

class VariableSymbol : public Symbol{
    int level;
	int place;
	int position;
public:
    shared_ptr<TypeSymbol> type;
    int getLevel();
	void setPlace(int place);
	void setPostion(int position);
	int inTypeID();
	int parameterID();
    void setLevel(int level);
    VariableSymbol(int ID,int SymbolType);
	VariableSymbol(shared_ptr<TypeSymbol> type);
    void setType(shared_ptr<TypeSymbol> type);
};

class FunctionSymbol : public Symbol{

public:
    shared_ptr<TypeSymbol> returnType;
    shared_ptr<Scope> parameterScope;
    vector<shared_ptr<VariableSymbol>> parameterVariable;
    void addParameter(shared_ptr<VariableSymbol> variableSymbol);
    FunctionSymbol(int ID,int SymbolType);
};

class Scope{
    map<string,shared_ptr<Symbol>> dict;
    int ScopeType;
    shared_ptr<Scope> parentScope;
    shared_ptr<Scope> prevScope;
public:
    Scope(){}
    Scope(shared_ptr<Scope> parentScope,int scopeType);
	Scope(shared_ptr<Scope> parentScope);
    shared_ptr<Scope> prev();
    void tag();
    bool inloop();
    shared_ptr<Symbol> putVariable(string variable,int SymbolType);
    shared_ptr<TypeSymbol> putAnonymousType();
    bool foundVariable(string variable,int SymbolType);
    shared_ptr<Symbol> getVariable(string variable,int SymbolType);
    bool contains(string variable);
    bool contains(shared_ptr<VariableSymbol> variable,string name);
};

extern int counter;
extern int SymbolTag;
extern shared_ptr<Scope> currentScope;
extern shared_ptr<Scope> globeScope;
extern shared_ptr<TypeSymbol> IntType;
extern string SystemError;
extern shared_ptr<FunctionSymbol> ReadFunc;
extern shared_ptr<FunctionSymbol> WriteFunc;

#endif // SEMANTICANALYZER_H_INCLUDED

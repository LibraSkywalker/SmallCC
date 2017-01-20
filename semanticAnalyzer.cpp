#include "semanticAnalyzer.h"
#include <iostream>
using namespace std;

bool Scope::contains(string variable){
    return dict.count(variable) != 0;
}

bool Scope::foundVariable(string variable,int SymbolType){
    if (contains(variable) && dict[variable]->hasType(SymbolType)) return true;
    if (parentScope == nullptr) return false;
    return parentScope->foundVariable(variable,SymbolType);
}

Scope::Scope(shared_ptr<Scope> parentScope,int scopeType) {
    dict = map<string,shared_ptr<Symbol>>();
    this->parentScope = parentScope;
    this->ScopeType = scopeType;
    this->prevScope = parentScope;
}

Scope::Scope(shared_ptr<Scope> parentScope) {
    dict = map<string,shared_ptr<Symbol>>();
    this->parentScope = parentScope;
    this->ScopeType = NORMALSCOPE;
    this->prevScope = parentScope;
}

shared_ptr<TypeSymbol> Scope::putAnonymousType() {
    ++counter;
    return new TypeSymbol(counter,TYPESYMBOL);
}

void TypeSymbol::addMember(shared_ptr<VariableSymbol> variableSymbol) {
    members.push_back(variableSymbol);
}

void FunctionSymbol::addParameter(shared_ptr<VariableSymbol> variableSymbol) {
    parameterVariable.push_back(variableSymbol);
}

shared_ptr<Scope> Scope::prev() {
    return prevScope;
}

shared_ptr<Symbol> Scope::putVariable(string variable,int SymbolType) {
	cout << "put " + variable + "" << endl;
    if (contains(variable)) return nullptr;
    ++counter;
    if (SymbolType == TYPESYMBOL){
        dict[variable] = new TypeSymbol(counter,SymbolType);
    } else if (SymbolType == VARIABLESYMBOL){
        dict[variable] = new VariableSymbol(counter,SymbolType);
    } else {
        dict[variable] = new FunctionSymbol(counter,SymbolType);
    }
    return dict[variable];
}

Symbol::Symbol(int ID, int SymbolType) {
    this->ID = ID;
    this->SymbolType = SymbolType;
}

bool Symbol::hasType(int SymbolType) {return this->SymbolType == SymbolType;}

shared_ptr<Symbol> Scope::getVariable(string variable, int SymbolType) {
    if (contains(variable) && dict[variable]->hasType(SymbolType)) return dict[variable];
    if (parentScope == nullptr) return nullptr;
    return parentScope->getVariable(variable,SymbolType);
}

void VariableSymbol::setLevel(int level) {
    this->level = level;
}

int VariableSymbol::getLevel() {
    return level;
}
void Scope::tag() {
    ScopeType = LOOPSCOPE;
}

bool Scope::inloop() {
    if (this == globeScope) return false;
    if (this->ScopeType == LOOPSCOPE) return true;
    return this->prev()->inloop();
}

void VariableSymbol::setType(shared_ptr<TypeSymbol>  type) {
    this->type = type;
}

TypeSymbol::TypeSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}

VariableSymbol::VariableSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}

FunctionSymbol::FunctionSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}


int counter = 1234567;
shared_ptr<Scope> currentScope;
shared_ptr<Scope> globeScope;
shared_ptr<TypeSymbol> IntType;
string SystemError = "";


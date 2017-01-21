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
    return make_shared<TypeSymbol>(counter,TYPESYMBOL);
}

void TypeSymbol::addMember(shared_ptr<VariableSymbol> variableSymbol) {
    members.push_back(variableSymbol);
    variableSymbol->setPostion((int)members.size());
}

void FunctionSymbol::addParameter(shared_ptr<VariableSymbol> variableSymbol) {
    parameterVariable.push_back(variableSymbol);
    variableSymbol->setPlace((int)parameterVariable.size());
}

shared_ptr<Scope> Scope::prev() {
    return parentScope;
}

shared_ptr<Symbol> Scope::putVariable(string variable,int SymbolType) {
	//cout << "put " + variable + "" << endl;
    if (contains(variable)) return nullptr;
    ++counter;
    if (SymbolType == TYPESYMBOL){
        dict[variable] = make_shared<TypeSymbol>(counter,SymbolType);
    } else if (SymbolType == VARIABLESYMBOL){
        dict[variable] = make_shared<VariableSymbol>(counter,SymbolType);
    } else {
        dict[variable] = make_shared<FunctionSymbol>(counter,SymbolType);
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

void VariableSymbol::setPlace(int place) {
    this->place = place;
}

int VariableSymbol::parameterID() {
    return place;
}

void Scope::tag() {
    ScopeType = LOOPSCOPE;
}

bool Scope::inloop() {
    if (this == globeScope.get()) return false;
    if (this->ScopeType == LOOPSCOPE) return true;
    return this->prev()->inloop();
}

void VariableSymbol::setType(shared_ptr<TypeSymbol> type) {
    this->type = type;
}

TypeSymbol::TypeSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}

int TypeSymbol::size() {
    return (int)members.size();
}

int VariableSymbol::inTypeID() {
    return position;
}

void VariableSymbol::setPostion(int position) {
    this->position = position;
}

VariableSymbol::VariableSymbol(shared_ptr<TypeSymbol> type){
	this->type = type;
    level = 0;
    position = 0;
    place = 0;
}

VariableSymbol::VariableSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {
    level = 0;
    position = 0;
    place = 0;
}

FunctionSymbol::FunctionSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}


int counter = 0;
shared_ptr<Scope> currentScope;
shared_ptr<Scope> globeScope;
shared_ptr<TypeSymbol> IntType;
string SystemError = "";
shared_ptr<FunctionSymbol> ReadFunc;
shared_ptr<FunctionSymbol> WriteFunc;


#include "semanticAnalyzer.h"

int counter = 1234567;
Scope* currentScope;
Scope* globeScope;

using namespace std;

bool Scope::contains(string variable){
    return dict.count(variable) != 0;
}

bool Scope::foundVariable(string variable,int SymbolType){
    if (contains(variable) && dict[variable]->hasType(SymbolType)) return true;
    if (parentScope == nullptr) return false;
    return parentScope->contains(variable);
}

Scope::Scope(Scope *parentScope,int scopeType = NORMALSCOPE) {
    dict = map<string,Symbol*>();
    this->parentScope = parentScope;
    this->scopeType = scopeType;
    this->prevScope = parentScope;
}

void Scope::visit(Scope *nextScope) {
    nextScope->prevScope = this;
    this = nextScope;
}

Scope* Scope::prev() {
    return prevScope;
}

Symbol* Scope::putVariable(string variable,int SymbolType) {
    if (contains(variable)) return nullptr;
    ++counter;
    if (SymbolType == TYPESYMBOL){
        dict[variable] = new TypeSymbol(counter,TYPESYMBOL);
    } else if (SymbolType == VARIABLESYMBOL){
        dict[variable] = new VariableSymbol(counter,TYPESYMBOL);
    } else {
        dict[variable] = new FunctionSymbol(counter,TYPESYMBOL);
    }

    return dict[variable];
}

Symbol::Symbol(int ID, int SymbolType) {
    this->ID = ID;
    this->SymbolType = SymbolType;
}

bool Symbol::hasType(int SymbolType) {return this->SymbolType == SymbolType;}

TypeSymbol::TypeSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}

VariableSymbol::VariableSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}

FunctionSymbol::FunctionSymbol(int ID, int SymbolType):Symbol(ID,SymbolType) {}
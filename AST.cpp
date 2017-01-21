#include "AST.h"
#include "ConstHeader.h"

bool ArrayVariable::check() {
    //array call
    if (this->variableSymbol == nullptr){
        this->variableSymbol = std::static_pointer_cast<VariableSymbol>(currentScope->getVariable(this->name,VARIABLESYMBOL)) ;
        if (this->variableSymbol == nullptr){
            SystemError = "Undeclared Variable: " + this->name + "\n";
            return false;
        }
        if (this->variableSymbol->getLevel() != (int)this->position.data.size()){
            SystemError = "The array was not the same as the declaration";
            return false;
        }

        for (shared_ptr<Expression> now : position.data){
            if (!now->check()){
                return false;
            }
            if (now->type != IntType){
                SystemError = "There should be INT in the []";
                return false;
            }
        }
    } else {
        this->variableSymbol->setLevel((int)this->position.data.size());
        for (shared_ptr<Expression> now : position.data){
            if (!now->check()){
                return false;
            }
            if (now->type != IntType){
                SystemError = "There should be INT in the []";
                return false;
            }
        }
    }
    return true;
}

ArrayVariable::ArrayVariable(string name, ExpressionList& position):Variable(name) {
    this->position = position;
    this->classType = ARRAYVARIABLE_CLASS;
}

Attribute::Attribute() {
    this->classType = ATTRIBUTE_CLASS;
}

Attribute::Attribute(string name, string attribute) {
    this->name = name;
    this->attribute = attribute;
    this->classType = ATTRIBUTE_CLASS;
}

bool Attribute::check() {
    shared_ptr<VariableSymbol> thisVariable = std::static_pointer_cast<VariableSymbol>(currentScope->getVariable(this->name,VARIABLESYMBOL));
    if (thisVariable == nullptr){
        SystemError = "Undeclared Variable: " + this->name + "\n";
        return false;
    }
    if (thisVariable->type == IntType){
        SystemError = "Cannot find attribute of a int Type.";
        return false;
    }
    if (!thisVariable->type->memberScope->contains(this->attribute)){
        SystemError = "Cannot find attribute from this struct.";
        return false;
    }
    this->type = IntType;
    this->left = true;
    return true;
}

bool BinaryExpression::check() {
    if (!this->Left->check() || !this->Right->check()){
        return false;
    }
    if (this->Left->type != this->Right->type){
        SystemError = "Binary Expression Unmatch";
        return false;
    }
    if (!this->Left->left){
        switch (this->command) {
            case ASSIGN_OP :
                SystemError = "Should be left value during assign";
                return false;
            case DIVIDE_ASSIGN_OP:
                SystemError = "Should be left value during assign";
                return false;
            case MINUS_ASSIGN_OP:
                SystemError = "Should be left value during assign";
                return false;
            case PLUS_ASSIGN_OP:
                SystemError = "Should be left value during assign";
                return false;
            case MULTIPLY_ASSIGN_OP:
                SystemError = "Should be left value during assign";
                return false;
            default:;
        }
    }
    if (this->Left->type != IntType
        && this->command != ASSIGN_OP
        && this->command != SEQ_OP
        && this->command != SNE_OP){
        SystemError = "Should be Int in the binary expression";
        return false;
    }
    this->type = this->Left->type;
    this->left = false;
    return true;
}

BinaryExpression::BinaryExpression(Expression* Left, Expression* Right, int command) {
    this->Left = shared_ptr<Expression>(Left);
    this->Right = shared_ptr<Expression>(Right);
    this->command = command;
    this->classType = BINARY_CLASS;
}

BinaryExpression::BinaryExpression() {
    this->classType = BINARY_CLASS;
}

BlockStatement::BlockStatement() {
    this->classType = BLOCK_CLASS;
}

BlockStatement::BlockStatement(EventList& events) {
    this->events = events;
    this->classType = BLOCK_CLASS;
}

bool BlockStatement::check() {
    for (shared_ptr<Statement> now: this->events.data){
        if (!now->check()) return false;
    }
    return true;
}

BranchStatement::BranchStatement() {
    this->classType = BRANCH_CLASS;
}

BranchStatement::BranchStatement(Expression* condition, Statement* AcceptStatement) {
    this->condition = shared_ptr<Expression>(condition);
    this->AcceptStatement = shared_ptr<Statement>(AcceptStatement);
    this->hasDenyStatement = false;
    this->classType = BRANCH_CLASS;
}

BranchStatement::BranchStatement(Expression* condition, Statement* AcceptStatement, Statement* DenyStatement) {
    this->condition = shared_ptr<Expression>(condition);
    this->AcceptStatement = shared_ptr<Statement>(AcceptStatement);
    this->DenyStatement = shared_ptr<Statement>(DenyStatement);
    this->hasDenyStatement = true;
    this->classType = BRANCH_CLASS;
}

bool BranchStatement::check() {
    if (!this->condition->check()){
        return false;
    }
    if (this->condition->type != IntType){
        SystemError = "Should be Int type in branch condition!";
        return false;
    }
    leftScope = currentScope = make_shared<Scope>(currentScope);
    if (!this->AcceptStatement->check()){
        return false;
    }
    currentScope = currentScope->prev();
	//TODO: nullptr
	if (this->hasDenyStatement){
    	rightScope = currentScope =make_shared<Scope>(currentScope);
    	if (!this->DenyStatement->check()){
        	return false;
    	}
    	currentScope = currentScope->prev();
	}
    return true;
}

Declaration::Declaration(Type* type, VariableList& variableList) {
    this->type = shared_ptr<Type>(type);
    this->variableList = variableList;
    this->classType = DECLARE_CLASS;
}


Declaration::Declaration(string type_name,VariableList& variableList){
	this->type_name = type_name;
	this->variableList = variableList;
    this->classType = DECLARE_CLASS;
}

bool Declaration::check() {
    if (this->type_name != ""){
        for (shared_ptr<Variable> now : this->variableList.data){
            shared_ptr<VariableSymbol> nowSymbol = static_pointer_cast<VariableSymbol>(currentScope->putVariable(now->name,VARIABLESYMBOL)) ;
            if (nowSymbol == nullptr) {
                SystemError = "Variable Redeclare: "+ now->name + "\n";
                return false;
            }
            nowSymbol->setType(IntType);
            now->variableSymbol = nowSymbol;
            if (!now->check()) return false;
        }
    } else {
        if (!this->type->check()) return false;
        shared_ptr<TypeSymbol> thisType = this->type->typeSymbol;
        for (shared_ptr<Variable> now : this->variableList.data){
            shared_ptr<VariableSymbol> nowSymbol = static_pointer_cast<VariableSymbol>(currentScope->putVariable(now->name,VARIABLESYMBOL));
            if (nowSymbol == nullptr) {
                SystemError = "Variable Redeclare.";
                return false;
            }
            nowSymbol->setType(thisType);
            now->variableSymbol = nowSymbol;
            if (!now->check()) return false;
        }
    }

    return true;
}

EventList::EventList() {
    this->classType = EVENTLIST_CLASS;
}

EventList::EventList(Statement* now) {
    this->data = list<shared_ptr<Statement>>();
    this->data.push_front(shared_ptr<Statement>(now));
    this->classType = EVENTLIST_CLASS;
}

void EventList::insert(Statement* now) {
    this->data.push_front(shared_ptr<Statement>(now));
}

bool EventList::check() {
    for (shared_ptr<Statement> event : this->data){
        if (!event->check()){
            return false;
        }
    }
    return true;
}

ExpressionList::ExpressionList() {
    this->classType = EXPRESSIONLIST_CLASS;
}


ExpressionList::ExpressionList(Expression* now) {
    data = list<shared_ptr<Expression>>();
    data.push_front(shared_ptr<Expression>(now));
    this->classType = EXPRESSIONLIST_CLASS;
}

void ExpressionList::insert(Expression* now) {
    data.push_front(shared_ptr<Expression>(now));
}

bool Function::check() {
    shared_ptr<FunctionSymbol> thisFunction = static_pointer_cast<FunctionSymbol>(globeScope->putVariable(this->name,FUNCTIONSYMBOL));
    if (thisFunction == nullptr){
        SystemError = "Function Redeclare:" + this->name + "\n";
        return false;
    }
    thisFunction->returnType = IntType;
    currentScope = make_shared<Scope>(currentScope);
    thisFunction->parameterScope = currentScope;
    for (shared_ptr<Variable> parameter : parameters.data){
        if (!parameter->check()){
            return false;
        }
        if (parameter->type != IntType){
            SystemError = "Parameter should be Int type other than " + parameter->type_name + "\n";
            return false;
        }
        //TODO
        thisFunction->addParameter(parameter->variableSymbol);
    }
    currentScope = make_shared<Scope>(currentScope);

    if (!this->functionBody->check()){
        return false;
    }

    currentScope = currentScope->prev();
    currentScope = currentScope->prev();
    this->functionSymbol = thisFunction;
    return true;
}

Function::Function(string type_name,string name,BlockStatement* functionBody){
    this->type_name = type_name;
    this->name = name;
    this->functionBody = shared_ptr<BlockStatement>(functionBody) ;
    this->classType = FUNCTION_CLASS;
}

Function::Function(string type_name, string name, VariableList& parameterList, BlockStatement* functionBody) {
    this->type_name = type_name;
    this->name = name;
    this->parameters = parameterList;
    this->functionBody = shared_ptr<BlockStatement>(functionBody) ;
    this->classType = FUNCTION_CLASS;
}

FunctionCall::FunctionCall() {}

FunctionCall::FunctionCall(string name, ExpressionList& parameters) {
    this->name = name;
    this->parameters = parameters;
    this->classType = FUNCTIONCALL_CLASS;
}

bool FunctionCall::check() {
    shared_ptr<FunctionSymbol> thisFunction = static_pointer_cast<FunctionSymbol>(globeScope->getVariable(this->name,FUNCTIONSYMBOL));
    if (thisFunction->parameterVariable.size() != this->parameters.data.size()){
        SystemError = "The number of parameters are not matched\n" ;
        return false;
    }
    for (shared_ptr<Expression> now : this->parameters.data){
        if (!now->check()) return false;
        if (now->type != IntType) {
            SystemError = "Symbol Error Should be in Int Value\n" ;
            return false;
        }
    }
    this->left = false;
    this->type = IntType;
    return true;
}

InitVariable::InitVariable(string name, Expression* initializer, int command):Variable(name) {
    this->command = command;
    this->initializer = shared_ptr<Expression>(initializer);
    this->classType = INITVARIABLE_CLASS;
}

bool InitVariable::check() {
    if (!initializer->check()){
        return false;
    }
    if (initializer->type != IntType){
        SystemError = "The initializer should be INT type\n";
        return false;
    }
    return true;
}

bool InitArrayVariable::check() {
    this->variableSymbol->setLevel((int)this->position.data.size());
    if (this->variableSymbol->getLevel() > 1){
        SystemError = "We can only initialize one dimensional array yet.\n";
        return false;
    }
    for (shared_ptr<Expression> now : position.data){
        if (!now->check()){
            return false;
        }
        if (now->type != IntType){
            SystemError = "There should be INT in the []";
            return false;
        }
    }
    for (shared_ptr<Expression> now : this->initializer.data){
        if (!now->check()) return false;
        if (now->type != IntType){
            SystemError = "The initializer should be INT type\n";
            return false;
        }
    }
    return true;
}


InitArrayVariable::InitArrayVariable(ArrayVariable& preview,ExpressionList& initializer,int command) {
	this->position = preview.position;
	this->name = preview.name;
    this->command = command;
    this->initializer = initializer;
    this->classType = INITARRAYVARIABLE_CLASS;
}

bool JumpStatement::check() {
    if (this->returnValue == nullptr){
        if (!currentScope->inloop()){
            SystemError = "Break or Continue Should be in a Loop\n";
            return false;
        }
    } else {
        if (!this->returnValue->check()){
            return false;
        } else {
            if (returnValue->type != IntType){
                SystemError = "Return Value should be Int\n";
                return false;
            }
        }
    }
    return true;
}

JumpStatement::JumpStatement(Expression *returnValue) {
    this->returnValue = shared_ptr<Expression>(returnValue);
}

JumpStatement::JumpStatement() {
    this->classType = JUMP_CLASS;
}

JumpStatement::JumpStatement(int command) {
    this->command = command;
    this->classType = JUMP_CLASS;
}

Literal::Literal(int data) {
	this->data = data;
    this->classType = LITERAL_CLASS;
}

bool Literal::check() {
    type = IntType;
    this->left = false;
    return true;
}

void Literal::print(){
	printf("Literal: %d",this->data);
}

LoopStatement::LoopStatement() {
    this->classType = LOOP_CLASS;
}

LoopStatement::LoopStatement(Expression* initializer, Expression* condition, Expression* iteration,Statement* loopBody) {
    this->initializer = shared_ptr<Expression>(initializer);
    this->condition = shared_ptr<Expression>(condition);
    this->iteration = shared_ptr<Expression>(iteration);
	this->loopBody = shared_ptr<Statement>(loopBody);
    this->classType = LOOP_CLASS;
}

bool LoopStatement::check()  {
    if (!this->initializer->check() ||
        !this->condition->check() ||
        !this->iteration->check())
        return false;
    if (this->condition->type != IntType){
        SystemError = "Should be Int type in loop condition!";
        return false;
    }
    loopScope = currentScope =make_shared<Scope>(currentScope,LOOPSCOPE);

    if (!this->loopBody->check()){
        return false;
    }

    currentScope = currentScope->prev();
    return true;
}

Type::Type(Declaration* newDeclaration) {
    this->declarationList = list<shared_ptr<Declaration>>();
    this->declarationList.push_front(shared_ptr<Declaration>(newDeclaration));
    this->declare = true;
    this->classType = TYPE_CLASS;
}

Type::Type(string name){
    this->name = name;
    this->declare = false;
    this->classType = TYPE_CLASS;
}

bool Type::check() {
    if (this->declare){
        if (name == ""){
            this->typeSymbol = globeScope->putAnonymousType();
        } else {
            this->typeSymbol = static_pointer_cast<TypeSymbol>(globeScope->putVariable(name,TYPESYMBOL));
            if (this->typeSymbol == nullptr){
                SystemError = "Type Redeclare: " + name + "\n";
                return false;
            }
        }
        currentScope = make_shared<Scope>(currentScope);
        typeSymbol->memberScope = currentScope;
        for (shared_ptr<Declaration> declaration: declarationList){
            declaration->check();
            for (shared_ptr<Variable> variable : declaration->variableList.data){
                typeSymbol->addMember(variable->variableSymbol);
            }
        }
        currentScope = currentScope->prev();
    } else {
        shared_ptr<TypeSymbol> thisType = static_pointer_cast<TypeSymbol>(globeScope->getVariable(name,TYPESYMBOL));
        if (thisType == nullptr){
            SystemError = "Undeclared Type:" + name + "\n";
            return false;
        } else {
            this->typeSymbol = thisType;
        }
    }
    return true;
}

void Type::insert(Declaration* newDeclaration) {
    this->declarationList.push_front(shared_ptr<Declaration>(newDeclaration));
}

void Type::getName(string name) {
    this->name = name;
}

UnaryExpression::UnaryExpression() {
    this->classType = UNARY_CLASS;
}

UnaryExpression::UnaryExpression(Expression* child, int command) {
    this->child = shared_ptr<Expression>(child);
    this->command = command;
    this->classType = UNARY_CLASS;
}

bool UnaryExpression::check() {
    if (!child->check()){
        return false;
    }
    if (child->type != IntType){
        SystemError = "child type of Unary expression should be int type";
        return false;
    }
    if (!child->left && ( command == INC_OP || command == DEC_OP)){
        SystemError = "should be lvalue due to ++ or --";
        return false;
    }
    return true;
}

Variable::Variable(string name){
    this->name = name;
    this->classType = VARIABLE_CLASS;
}


Variable::Variable(string type_name,string name){
	this->type_name = type_name;
	this->name = name;
    this->classType = VARIABLE_CLASS;
}

bool Variable::check() {
    // variable ask
    if (this->variableSymbol == nullptr){
        this->variableSymbol = static_pointer_cast<VariableSymbol>(currentScope->getVariable(this->name,VARIABLESYMBOL));
        if (this->variableSymbol == nullptr){
            SystemError = "Undeclared Variable: " + this->name + "\n";
            return false;
        }
    }
    if (this->variableSymbol->getLevel() > 0 ){
        SystemError = "Cannot call array value by its pointer.";
        return false;
    }
    this->type = this->variableSymbol->type;
    this->left = true;
    return true;
}


void VariableList::insert(Variable* now){
    data.push_front(shared_ptr<Variable>(now));
}

VariableList::VariableList(Variable* now) {
    data = list<shared_ptr<Variable>>();
    data.push_front(shared_ptr<Variable>(now));
    this->classType = VARIABLELIST_CLASS;
}

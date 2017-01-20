#include "AST.h"
#include "ConstHeader.h"
#include <typeinfo>

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

BinaryExpression::BinaryExpression(Expression& Left, Expression& Right, int command) {
    this->Left = &Left;
    this->Right = &Right;
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

BranchStatement::BranchStatement() {
    this->classType = BRANCH_CLASS;
}

BranchStatement::BranchStatement(Expression& condition, Statement& AcceptStatement) {
    this->condition = &condition;
    this->AcceptStatement = &AcceptStatement;
    this->hasDenyStatement = false;
    this->classType = BRANCH_CLASS;
}

BranchStatement::BranchStatement(Expression& condition, Statement& AcceptStatement, Statement& DenyStatement) {
    this->condition = &condition;
    this->AcceptStatement = &AcceptStatement;
    this->DenyStatement = &DenyStatement;
    this->hasDenyStatement = true;
    this->classType = BRANCH_CLASS;
}

Declaration::Declaration(Type& type, VariableList& variableList) {
    this->type = type;
    this->variableList = variableList;
    this->classType = DECLARE_CLASS;
}


Declaration::Declaration(string type_name,VariableList& variableList){
	this->type_name = type_name;
	this->variableList = variableList;
    this->classType = DECLARE_CLASS;
}

EventList::EventList() {
    this->classType = EVENTLIST_CLASS;
}

EventList::EventList(Statement& now) {
    this->data = list<Statement*>();
    this->data.push_front(&now);
    this->classType = EVENTLIST_CLASS;
}

void EventList::insert(Statement& now) {
    this->data.push_front(&now);
}

ExpressionList::ExpressionList() {
    this->classType = EXPRESSIONLIST_CLASS;
}


ExpressionList::ExpressionList(Expression& now) {
    data = list<Expression*>();
    data.push_front(&now);
    this->classType = EXPRESSIONLIST_CLASS;
}

void ExpressionList::insert(Expression &now) {
    data.push_front(&now);
}

Function::Function(string type_name,string name,BlockStatement& functionBody){
    this->type_name = type_name;
    this->name = name;
    this->functionBody = functionBody;
    this->classType = FUNCTION_CLASS;
}

Function::Function(string type_name, string name, VariableList& parameterList, BlockStatement& functionBody) {
    this->type_name = type_name;
    this->name = name;
    this->parameters = parameterList;
    this->functionBody = functionBody;
    this->classType = FUNCTION_CLASS;
}

FunctionCall::FunctionCall() {}

FunctionCall::FunctionCall(string name, ExpressionList& parameters) {
    this->name = name;
    this->parameters = parameters;
    this->classType = FUNCTIONCALL_CLASS;
}

InitVariable::InitVariable(string name, Expression& initializer, int command):Variable(name) {
    this->command = command;
    this->initializer = &initializer;
    this->classType = INITVARIABLE_CLASS;
}

InitArrayVariable::InitArrayVariable(ArrayVariable& preview,ExpressionList& initializer,int command) {
	this->position = preview.position;
	this->name = preview.name;
    this->command = command;
    this->initializer = initializer;
    this->classType = INITARRAYVARIABLE_CLASS;
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

void Literal::print(){
	printf("Literal: %d",this->data);
}

LoopStatement::LoopStatement() {
    this->classType = LOOP_CLASS;
}

LoopStatement::LoopStatement(Expression &initializer, Expression &condition, Expression &iteration,Statement &loopBody) {
    this->initializer = &initializer;
    this->condition = &condition;
    this->iteration = &iteration;
	this->loopBody = &loopBody;
    this->classType = LOOP_CLASS;
}

Type::Type(Declaration newDeclaration) {
    this->declarationList = list<Declaration*>();
    this->declarationList.push_front(&newDeclaration);
    this->declare = true;
    this->classType = TYPE_CLASS;
}

Type::Type(string name){
    this->name = name;
    this->classType = TYPE_CLASS;
}

void Type::insert(Declaration newDeclaration) {
    this->declarationList.push_front(&newDeclaration);
}

void Type::getName(string name) {
    this->name = name;
}

UnaryExpression::UnaryExpression() {
    this->classType = UNARY_CLASS;
}

UnaryExpression::UnaryExpression(Expression& child, int command) {
    this->child = &child;
    this->command = command;
    this->classType = UNARY_CLASS;
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

void VariableList::insert(Variable now){
    data.push_front(&now);
}

VariableList::VariableList(Variable now) {
    data = list<Variable*>();
    data.push_front(&now);
    this->classType = VARIABLELIST_CLASS;
}

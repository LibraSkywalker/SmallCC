//
// Created by Bill on 2017/1/21.
//

#ifndef SMALLCC_GENERATOR_H
#define SMALLCC_GENERATOR_H


#include <string>
#include <set>
#include "ConstHeader.h"
#include "semanticAnalyzer.h"
#include <cstdio>
#include <iostream>
using namespace std;

void allocateMemory(int size);

void allocateInt();

void allocateMemoryByReg(int source);

void branchInstruction(string name,int a,string label);

void gotoInstruction(string label);

void saveToAddress(int source,int target,int offset = 0);

void loadFromAddress(int source,int target,int offset = 0);

void loadAddressFromVirtualRegister(int source, int target);

void saveToVirtualRegister(int source,int target);

void trInstruction(const char* name,int target,int source1,int source2);

void tiInstruction(const char* name,int target,int source1,int source2);

void brInstruction(const char* name,int target,int source1);

void biInstruction(const char* name,int target,int source);

void urInstruction(const char* name,int target);

void loadFromVirtualRegister(int source, int target);

void SpecialloadFromVirtualRegister(int source, int target);

void jumpInstruction(string name);

void exitInstruction();

void assignmentSave();

void tagLabel(string name);

extern string currentLabel;

extern int trackingRegister;

extern set<int> changeList;

#endif //SMALLCC_GENERATOR_H

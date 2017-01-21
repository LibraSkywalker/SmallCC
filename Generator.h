//
// Created by Bill on 2017/1/21.
//

#ifndef SMALLCC_GENERATOR_H
#define SMALLCC_GENERATOR_H

#include "ConstHeader.h"
#include <cstdio>

void allocateMemory(int size){
    printf("li $4 %d\n",size * 8);
    printf("li $2 9\n");
    printf("syscall\n");
}

void allocateInt(){
    printf("li $4 4\n");
    printf("li $2 9\n");
    printf("syscall\n");
}

void allocateMemoryByReg(int source){
    printf("move $4 $%d",source);
    printf("li $2 9\n");
    printf("syscall\n");
}

void branchInstruction(string name,int a,string label){
    cout << name << " $" << a << " 0 " << label << endl;
}

void gotoInstruction(string label){
    cout << "b " << label << endl;
}

void saveToAddress(int source,int target,int offset = 0){
    printf("sw $%d %d($%d)",source,offset * 4,target);
}

void loadFromAddress(int source,int target,int offset = 0){
    printf("lw $%d %d($%d)",source,offset * 4,target);
}

void loadAddressFromVirtualRegister(int source, int target){
    printf("la $t0 VReg\n");
    printf("la $%d %d($t0)\n",source,target * 4);
}

void saveToVirtualRegister(int source,int target){
    printf("la $t0 VReg\n");
    printf("sw $%d %d($t0)\n",source,target * 4);
}

void trInstruction(const char* name,int target,int source1,int source2){
    printf("%s $%d $%d $%d\n",name,target,source1,source2);
}

void tiInstruction(const char* name,int target,int source1,int source2){
    printf("%s $%d $%d %d\n",name,target,source1,source2);
}

void brInstruction(const char* name,int target,int source1){
    printf("%s $%d $%d\n",name,target,source1);
}

void biInstruction(const char* name,int target,int source){
    printf("%s $%d %d\n",name,target,source);
}

void urInstruction(const char* name,int target){
    printf("%s $%d\n",name,target);
}

void loadFromVirtualRegister(int source, int target){
    printf("la $t0 VReg\n");
    printf("lw $%d %d($t0)\n",source,target * 4);
}

void jumpInstruction(string name){
    cout << "jal func_" << name << endl;
}

void exitInstruction(){
    cout << "li $2 10" << endl;
    cout << "syscall" << endl;
}

void assignmentSave(){
    printf("sw $%d 0($%d)\n",RDEST_REGISTER,TEMPADDRESS_REGISTER);
}

void tagLabel(string name){
    cout << endl << name << " :" << endl;
}

extern string currentLabel;
string currentLabel = "";
#endif //SMALLCC_GENERATOR_H

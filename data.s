.data

VReg: .space 32768

.text


main :
li $4 16
li $2 9
syscall
la $t0 VReg
sw $2 28($t0)
jal func_main
li $2 10
syscall

func_answer :
la $t0 VReg
lw $10 28($t0)
add $16 $10 4
lw $10 4($10)
la $t0 VReg
sw $10 52($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 56($t0)
la $t0 VReg
lw $11 56($t0)
la $t0 VReg
lw $12 52($t0)
sne $10 $11 $12
la $t0 VReg
sw $10 48($t0)
la $t0 VReg
lw $10 48($t0)
bne $10 0 func_answer_branchTaken
b func_answer_afterBranch

func_answer_branchTaken :
li $10 1
la $t0 VReg
sw $10 60($t0)
la $t0 VReg
lw $11 60($t0)
neg $10 $11
la $t0 VReg
sw $10 64($t0)
la $t0 VReg
lw $2 64($t0)
jr $31

func_answer_afterBranch :
la $t0 VReg
lw $10 28($t0)
add $16 $10 8
lw $10 8($10)
la $t0 VReg
sw $10 68($t0)
la $t0 VReg
lw $2 68($t0)
jr $31
jr $31

func_main :
li $10 308
la $t0 VReg
sw $10 76($t0)
la $t0 VReg
lw $10 28($t0)
add $16 $10 4
lw $10 4($10)
la $t0 VReg
sw $10 80($t0)
la $t0 VReg
lw $11 80($t0)
la $t0 VReg
lw $12 76($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 72($t0)
li $10 215
la $t0 VReg
sw $10 88($t0)
la $t0 VReg
lw $10 28($t0)
add $16 $10 8
lw $10 8($10)
la $t0 VReg
sw $10 92($t0)
la $t0 VReg
lw $11 92($t0)
la $t0 VReg
lw $12 88($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 84($t0)
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 104($t0)
li $2 5
syscall
move $10 $2
sw $10 0($16)
la $t0 VReg
sw $2 100($t0)
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 116($t0)
sw $31 0($29)
subu $29 $29 40
la $t0 VReg
lw $11 116($t0)
sw $11 4($29)
la $t0 VReg
lw $11 44($t0)
sw $11 8($29)
la $t0 VReg
lw $11 72($t0)
sw $11 12($29)
la $t0 VReg
lw $11 84($t0)
sw $11 16($29)
la $t0 VReg
lw $11 100($t0)
sw $11 20($29)
la $t0 VReg
lw $11 104($t0)
sw $11 24($29)
jal func_answer
lw $10 8($29)
la $t0 VReg
sw $10 44($t0)
lw $10 12($29)
la $t0 VReg
sw $10 72($t0)
lw $10 16($29)
la $t0 VReg
sw $10 84($t0)
lw $10 20($29)
la $t0 VReg
sw $10 100($t0)
lw $10 24($29)
la $t0 VReg
sw $10 104($t0)
addu $29 $29 40
lw $31 0($29)
la $t0 VReg
sw $2 112($t0)
la $t0 VReg
lw $11 112($t0)
move $4 $11
li $2 1
syscall
la $t0 VReg
sw $2 108($t0)
li $10 0
la $t0 VReg
sw $10 120($t0)
la $t0 VReg
lw $2 120($t0)
jr $31
jr $31

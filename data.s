.data

VReg: .space 32768

.text


main :
jal func_main
li $2 10
syscall

func_factor :
li $10 0
la $t0 VReg
sw $10 36($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 40($t0)
la $t0 VReg
lw $11 40($t0)
la $t0 VReg
lw $12 36($t0)
seq $10 $11 $12
la $t0 VReg
sw $10 32($t0)
la $t0 VReg
lw $10 32($t0)
bne $10 0 func_factor_branchTaken
b func_factor_afterBranch

func_factor_branchTaken :
li $10 1
la $t0 VReg
sw $10 44($t0)
la $t0 VReg
lw $2 44($t0)
jr $31

func_factor_afterBranch :
li $10 0
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
slt $10 $11 $12
la $t0 VReg
sw $10 48($t0)
la $t0 VReg
lw $10 48($t0)
bne $10 0 func_factor_afterBranch_branchTaken
b func_factor_afterBranch_afterBranch

func_factor_afterBranch_branchTaken :
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

func_factor_afterBranch_afterBranch :
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 72($t0)
li $10 1
la $t0 VReg
sw $10 84($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 88($t0)
la $t0 VReg
lw $11 88($t0)
la $t0 VReg
lw $12 84($t0)
sub $10 $11 $12
la $t0 VReg
sw $10 80($t0)
sw $31 0($29)
subu $29 $29 24
la $t0 VReg
lw $11 80($t0)
sw $11 4($29)
la $t0 VReg
lw $11 72($t0)
sw $11 8($29)
jal func_factor
lw $10 8($29)
la $t0 VReg
sw $10 72($t0)
addu $29 $29 24
lw $31 0($29)
la $t0 VReg
sw $2 76($t0)
la $t0 VReg
lw $11 76($t0)
la $t0 VReg
lw $12 72($t0)
mul $10 $11 $12
la $t0 VReg
sw $10 68($t0)
la $t0 VReg
lw $2 68($t0)
jr $31
jr $31

func_main :
la $t0 VReg
la $16 28($t0)
la $t0 VReg
lw $10 28($t0)
la $t0 VReg
sw $10 100($t0)
li $2 5
syscall
move $10 $2
sw $10 0($16)
la $t0 VReg
sw $2 96($t0)
la $t0 VReg
la $16 28($t0)
la $t0 VReg
lw $10 28($t0)
la $t0 VReg
sw $10 112($t0)
sw $31 0($29)
subu $29 $29 32
la $t0 VReg
lw $11 112($t0)
sw $11 4($29)
la $t0 VReg
lw $11 28($t0)
sw $11 8($29)
la $t0 VReg
lw $11 96($t0)
sw $11 12($29)
la $t0 VReg
lw $11 100($t0)
sw $11 16($29)
jal func_factor
lw $10 8($29)
la $t0 VReg
sw $10 28($t0)
lw $10 12($29)
la $t0 VReg
sw $10 96($t0)
lw $10 16($29)
la $t0 VReg
sw $10 100($t0)
addu $29 $29 32
lw $31 0($29)
la $t0 VReg
sw $2 108($t0)
la $t0 VReg
lw $11 108($t0)
move $4 $11
li $2 1
syscall
la $t0 VReg
sw $2 104($t0)
li $10 0
la $t0 VReg
sw $10 116($t0)
la $t0 VReg
lw $2 116($t0)
jr $31
jr $31

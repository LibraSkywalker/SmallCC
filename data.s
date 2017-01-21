.data

VReg: .space 4096

.text


main :
li $20 1
li $10 4
la $t0 VReg
sw $10 28($t0)
la $t0 VReg
lw $11 28($t0)
li $4 4
li $2 9
syscall
sw $11 0($2)
mul $20 $20 $11
move $4 $20
mul $4 $4 8
li $2 9
syscall
la $t0 VReg
sw $2 16($t0)
move $20 $2
li $10 1
la $t0 VReg
sw $10 32($t0)
la $t0 VReg
lw $10 32($t0)
sw $10 0($20)
add $20 $20 4
li $10 2
la $t0 VReg
sw $10 36($t0)
la $t0 VReg
lw $10 36($t0)
sw $10 0($20)
add $20 $20 4
li $10 3
la $t0 VReg
sw $10 40($t0)
la $t0 VReg
lw $10 40($t0)
sw $10 0($20)
add $20 $20 4
li $10 4
la $t0 VReg
sw $10 44($t0)
la $t0 VReg
lw $10 44($t0)
sw $10 0($20)
add $20 $20 4
jal func_main
li $2 10
syscall

func_main :
li $10 0
la $t0 VReg
sw $10 56($t0)
la $t0 VReg
la $16 24($t0)
la $t0 VReg
lw $10 24($t0)
la $t0 VReg
sw $10 60($t0)
la $t0 VReg
lw $11 60($t0)
la $t0 VReg
lw $12 56($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 52($t0)

func_main_LoopCondtion :
li $10 4
la $t0 VReg
sw $10 68($t0)
la $t0 VReg
la $16 24($t0)
la $t0 VReg
lw $10 24($t0)
la $t0 VReg
sw $10 72($t0)
la $t0 VReg
lw $11 72($t0)
la $t0 VReg
lw $12 68($t0)
slt $10 $11 $12
la $t0 VReg
sw $10 64($t0)
la $t0 VReg
lw $10 64($t0)
beq $10 0 func_main_AfterLoop

func_main_LoopBody :
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 24($t0)
la $t0 VReg
lw $10 24($t0)
la $t0 VReg
sw $10 84($t0)
la $t0 VReg
lw $10 84($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 80($t0)
la $t0 VReg
lw $11 80($t0)
move $4 $11
li $2 1
syscall
la $t0 VReg
sw $2 76($t0)

func_main_LoopIter :
la $t0 VReg
la $16 24($t0)
la $t0 VReg
lw $10 24($t0)
la $t0 VReg
sw $10 88($t0)
la $t0 VReg
lw $11 88($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 92($t0)
b func_main_LoopCondtion

func_main_AfterLoop :
li $10 0
la $t0 VReg
sw $10 96($t0)
la $t0 VReg
lw $2 96($t0)
jr $31

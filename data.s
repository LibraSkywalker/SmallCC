.data

VReg: .space 32768

.text


main :
jal func_main
li $2 10
syscall

func_main :
li $10 1
la $t0 VReg
sw $10 32($t0)
la $t0 VReg
la $16 16($t0)
la $t0 VReg
lw $10 16($t0)
la $t0 VReg
sw $10 36($t0)
la $t0 VReg
lw $11 36($t0)
la $t0 VReg
lw $12 32($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 28($t0)

func_main_LoopCondtion :
li $10 1
la $t0 VReg
sw $10 40($t0)
la $t0 VReg
lw $10 40($t0)
beq $10 0 func_main_AfterLoop

func_main_LoopBody :
li $10 10
la $t0 VReg
sw $10 48($t0)
la $t0 VReg
la $16 16($t0)
la $t0 VReg
lw $10 16($t0)
la $t0 VReg
sw $10 52($t0)
la $t0 VReg
lw $11 52($t0)
la $t0 VReg
lw $12 48($t0)
sgt $10 $11 $12
la $t0 VReg
sw $10 44($t0)
la $t0 VReg
lw $10 44($t0)
bne $10 0 func_main_LoopBody_branchTaken
b func_main_LoopBody_afterBranch

func_main_LoopBody_branchTaken :
b func_main_AfterLoop

func_main_LoopBody_afterBranch :
li $10 5
la $t0 VReg
sw $10 60($t0)
la $t0 VReg
la $16 16($t0)
la $t0 VReg
lw $10 16($t0)
la $t0 VReg
sw $10 64($t0)
la $t0 VReg
lw $11 64($t0)
la $t0 VReg
lw $12 60($t0)
seq $10 $11 $12
la $t0 VReg
sw $10 56($t0)
la $t0 VReg
lw $10 56($t0)
bne $10 0 func_main_LoopBody_afterBranch_branchTaken
b func_main_LoopBody_afterBranch_afterBranch

func_main_LoopBody_afterBranch_branchTaken :
b func_main_LoopIter

func_main_LoopBody_afterBranch_afterBranch :
la $t0 VReg
la $16 16($t0)
la $t0 VReg
lw $10 16($t0)
la $t0 VReg
sw $10 72($t0)
la $t0 VReg
lw $11 72($t0)
move $4 $11
li $2 1
syscall
la $t0 VReg
sw $2 68($t0)

func_main_LoopIter :
la $t0 VReg
la $16 16($t0)
la $t0 VReg
lw $10 16($t0)
la $t0 VReg
sw $10 76($t0)
la $t0 VReg
lw $11 76($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 80($t0)
b func_main_LoopCondtion

func_main_AfterLoop :
li $10 0
la $t0 VReg
sw $10 84($t0)
la $t0 VReg
lw $2 84($t0)
jr $31

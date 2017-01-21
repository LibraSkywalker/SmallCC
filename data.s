.data

VReg: .space 4096

.text


main :
jal func_main
li $2 10
syscall

func_main :
la $t0 VReg
la $16 20($t0)
la $t0 VReg
lw $10 20($t0)
la $t0 VReg
sw $10 40($t0)
li $2 5
syscall
move $10 $2
sw $10 0($16)
la $t0 VReg
sw $2 36($t0)
la $t0 VReg
la $16 24($t0)
la $t0 VReg
lw $10 24($t0)
la $t0 VReg
sw $10 48($t0)
li $2 5
syscall
move $10 $2
sw $10 0($16)
la $t0 VReg
sw $2 44($t0)
la $t0 VReg
la $16 24($t0)
la $t0 VReg
lw $10 24($t0)
la $t0 VReg
sw $10 60($t0)
la $t0 VReg
la $16 20($t0)
la $t0 VReg
lw $10 20($t0)
la $t0 VReg
sw $10 64($t0)
la $t0 VReg
lw $11 64($t0)
la $t0 VReg
lw $12 60($t0)
sub $10 $11 $12
la $t0 VReg
sw $10 56($t0)
la $t0 VReg
lw $11 56($t0)
move $4 $11
li $2 1
syscall
la $t0 VReg
sw $2 52($t0)
li $10 0
la $t0 VReg
sw $10 68($t0)
la $t0 VReg
lw $2 68($t0)
jr $31

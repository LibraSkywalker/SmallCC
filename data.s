.data

VReg: .space 32768

.text


main :
li $20 1
li $10 10
la $t0 VReg
sw $10 60($t0)
la $t0 VReg
lw $11 60($t0)
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
li $10 9
la $t0 VReg
sw $10 64($t0)
la $t0 VReg
lw $10 64($t0)
sw $10 0($20)
add $20 $20 4
li $10 7
la $t0 VReg
sw $10 68($t0)
la $t0 VReg
lw $10 68($t0)
sw $10 0($20)
add $20 $20 4
li $10 2
la $t0 VReg
sw $10 72($t0)
la $t0 VReg
lw $10 72($t0)
sw $10 0($20)
add $20 $20 4
li $10 3
la $t0 VReg
sw $10 76($t0)
la $t0 VReg
lw $10 76($t0)
sw $10 0($20)
add $20 $20 4
li $10 1
la $t0 VReg
sw $10 80($t0)
la $t0 VReg
lw $10 80($t0)
sw $10 0($20)
add $20 $20 4
li $10 5
la $t0 VReg
sw $10 84($t0)
la $t0 VReg
lw $10 84($t0)
sw $10 0($20)
add $20 $20 4
li $10 0
la $t0 VReg
sw $10 88($t0)
la $t0 VReg
lw $10 88($t0)
sw $10 0($20)
add $20 $20 4
li $10 8
la $t0 VReg
sw $10 92($t0)
la $t0 VReg
lw $10 92($t0)
sw $10 0($20)
add $20 $20 4
li $10 6
la $t0 VReg
sw $10 96($t0)
la $t0 VReg
lw $10 96($t0)
sw $10 0($20)
add $20 $20 4
li $10 4
la $t0 VReg
sw $10 100($t0)
la $t0 VReg
lw $10 100($t0)
sw $10 0($20)
add $20 $20 4
li $20 1
li $10 10
la $t0 VReg
sw $10 104($t0)
la $t0 VReg
lw $11 104($t0)
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
sw $2 20($t0)
jal func_main
li $2 10
syscall

func_csort :
lw $10 8($29)
add $16 $29 8
la $t0 VReg
sw $10 112($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 116($t0)
la $t0 VReg
lw $11 116($t0)
la $t0 VReg
lw $12 112($t0)
seq $10 $11 $12
la $t0 VReg
sw $10 108($t0)
la $t0 VReg
lw $10 108($t0)
bne $10 0 func_csort_branchTaken
b func_csort_afterBranch

func_csort_branchTaken :
li $10 0
la $t0 VReg
sw $10 120($t0)
la $t0 VReg
lw $2 120($t0)
jr $31

func_csort_afterBranch :
li $10 1
la $t0 VReg
sw $10 128($t0)
lw $10 8($29)
add $16 $29 8
la $t0 VReg
sw $10 136($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 140($t0)
la $t0 VReg
lw $11 140($t0)
la $t0 VReg
lw $12 136($t0)
add $10 $11 $12
la $t0 VReg
sw $10 132($t0)
la $t0 VReg
lw $11 132($t0)
la $t0 VReg
lw $12 128($t0)
srl $10 $11 $12
la $t0 VReg
sw $10 124($t0)
la $t0 VReg
lw $11 124($t0)
la $t0 VReg
sw $11 36($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 148($t0)
la $t0 VReg
la $16 36($t0)
la $t0 VReg
lw $10 36($t0)
la $t0 VReg
sw $10 152($t0)
sw $31 0($29)
subu $29 $29 32
la $t0 VReg
lw $11 148($t0)
sw $11 4($29)
la $t0 VReg
lw $11 152($t0)
sw $11 8($29)
la $t0 VReg
lw $11 36($t0)
sw $11 12($29)
jal func_csort
lw $10 12($29)
la $t0 VReg
sw $10 36($t0)
addu $29 $29 32
lw $31 0($29)
la $t0 VReg
sw $2 144($t0)
li $10 1
la $t0 VReg
sw $10 164($t0)
la $t0 VReg
la $16 36($t0)
la $t0 VReg
lw $10 36($t0)
la $t0 VReg
sw $10 168($t0)
la $t0 VReg
lw $11 168($t0)
la $t0 VReg
lw $12 164($t0)
add $10 $11 $12
la $t0 VReg
sw $10 160($t0)
lw $10 8($29)
add $16 $29 8
la $t0 VReg
sw $10 172($t0)
sw $31 0($29)
subu $29 $29 36
la $t0 VReg
lw $11 160($t0)
sw $11 4($29)
la $t0 VReg
lw $11 172($t0)
sw $11 8($29)
la $t0 VReg
lw $11 36($t0)
sw $11 12($29)
la $t0 VReg
lw $11 144($t0)
sw $11 16($29)
jal func_csort
lw $10 12($29)
la $t0 VReg
sw $10 36($t0)
lw $10 16($29)
la $t0 VReg
sw $10 144($t0)
addu $29 $29 36
lw $31 0($29)
la $t0 VReg
sw $2 156($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 176($t0)
la $t0 VReg
lw $11 176($t0)
la $t0 VReg
sw $11 40($t0)
li $10 1
la $t0 VReg
sw $10 184($t0)
la $t0 VReg
la $16 36($t0)
la $t0 VReg
lw $10 36($t0)
la $t0 VReg
sw $10 188($t0)
la $t0 VReg
lw $11 188($t0)
la $t0 VReg
lw $12 184($t0)
add $10 $11 $12
la $t0 VReg
sw $10 180($t0)
la $t0 VReg
lw $11 180($t0)
la $t0 VReg
sw $11 44($t0)
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 192($t0)
la $t0 VReg
lw $11 192($t0)
la $t0 VReg
sw $11 48($t0)
li $10 1
la $t0 VReg
sw $10 196($t0)

func_csort_afterBranch_LoopCondtion :
lw $10 8($29)
add $16 $29 8
la $t0 VReg
sw $10 208($t0)
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 212($t0)
la $t0 VReg
lw $11 212($t0)
la $t0 VReg
lw $12 208($t0)
sle $10 $11 $12
la $t0 VReg
sw $10 204($t0)
la $t0 VReg
la $16 36($t0)
la $t0 VReg
lw $10 36($t0)
la $t0 VReg
sw $10 220($t0)
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 224($t0)
la $t0 VReg
lw $11 224($t0)
la $t0 VReg
lw $12 220($t0)
sle $10 $11 $12
la $t0 VReg
sw $10 216($t0)
la $t0 VReg
lw $11 216($t0)
la $t0 VReg
lw $12 204($t0)
and $10 $11 $12
la $t0 VReg
sw $10 200($t0)
la $t0 VReg
lw $10 200($t0)
beq $10 0 func_csort_afterBranch_AfterLoop

func_csort_afterBranch_LoopBody :
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 236($t0)
la $t0 VReg
lw $10 236($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 232($t0)
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 244($t0)
la $t0 VReg
lw $10 244($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 240($t0)
la $t0 VReg
lw $11 240($t0)
la $t0 VReg
lw $12 232($t0)
slt $10 $11 $12
la $t0 VReg
sw $10 228($t0)
la $t0 VReg
lw $10 228($t0)
bne $10 0 func_csort_afterBranch_LoopBody_branchTaken
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 256($t0)
la $t0 VReg
lw $10 256($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 252($t0)
la $t0 VReg
lw $25 20($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 264($t0)
la $t0 VReg
lw $10 264($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 260($t0)
la $t0 VReg
lw $11 260($t0)
la $t0 VReg
lw $12 252($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 248($t0)
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 268($t0)
la $t0 VReg
lw $11 268($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 272($t0)
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 276($t0)
la $t0 VReg
lw $11 276($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 280($t0)
b func_csort_afterBranch_LoopBody_afterBranch

func_csort_afterBranch_LoopBody_branchTaken :
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 292($t0)
la $t0 VReg
lw $10 292($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 288($t0)
la $t0 VReg
lw $25 20($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 300($t0)
la $t0 VReg
lw $10 300($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 296($t0)
la $t0 VReg
lw $11 296($t0)
la $t0 VReg
lw $12 288($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 284($t0)
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 304($t0)
la $t0 VReg
lw $11 304($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 308($t0)
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 312($t0)
la $t0 VReg
lw $11 312($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 316($t0)

func_csort_afterBranch_LoopBody_afterBranch :

func_csort_afterBranch_LoopIter :
li $10 1
la $t0 VReg
sw $10 320($t0)
b func_csort_afterBranch_LoopCondtion

func_csort_afterBranch_AfterLoop :
li $10 1
la $t0 VReg
sw $10 324($t0)

func_csort_afterBranch_AfterLoop_LoopCondtion :
la $t0 VReg
la $16 36($t0)
la $t0 VReg
lw $10 36($t0)
la $t0 VReg
sw $10 332($t0)
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 336($t0)
la $t0 VReg
lw $11 336($t0)
la $t0 VReg
lw $12 332($t0)
sle $10 $11 $12
la $t0 VReg
sw $10 328($t0)
la $t0 VReg
lw $10 328($t0)
beq $10 0 func_csort_afterBranch_AfterLoop_AfterLoop

func_csort_afterBranch_AfterLoop_LoopBody :
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 348($t0)
la $t0 VReg
lw $10 348($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 344($t0)
la $t0 VReg
lw $25 20($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 356($t0)
la $t0 VReg
lw $10 356($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 352($t0)
la $t0 VReg
lw $11 352($t0)
la $t0 VReg
lw $12 344($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 340($t0)
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 360($t0)
la $t0 VReg
lw $11 360($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 364($t0)
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 368($t0)
la $t0 VReg
lw $11 368($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 372($t0)

func_csort_afterBranch_AfterLoop_LoopIter :
li $10 1
la $t0 VReg
sw $10 376($t0)
b func_csort_afterBranch_AfterLoop_LoopCondtion

func_csort_afterBranch_AfterLoop_AfterLoop :
li $10 1
la $t0 VReg
sw $10 380($t0)

func_csort_afterBranch_AfterLoop_AfterLoop_LoopCondtion :
lw $10 8($29)
add $16 $29 8
la $t0 VReg
sw $10 388($t0)
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 392($t0)
la $t0 VReg
lw $11 392($t0)
la $t0 VReg
lw $12 388($t0)
sle $10 $11 $12
la $t0 VReg
sw $10 384($t0)
la $t0 VReg
lw $10 384($t0)
beq $10 0 func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop

func_csort_afterBranch_AfterLoop_AfterLoop_LoopBody :
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 404($t0)
la $t0 VReg
lw $10 404($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 400($t0)
la $t0 VReg
lw $25 20($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 412($t0)
la $t0 VReg
lw $10 412($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 408($t0)
la $t0 VReg
lw $11 408($t0)
la $t0 VReg
lw $12 400($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 396($t0)
la $t0 VReg
la $16 48($t0)
la $t0 VReg
lw $10 48($t0)
la $t0 VReg
sw $10 416($t0)
la $t0 VReg
lw $11 416($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 420($t0)
la $t0 VReg
la $16 44($t0)
la $t0 VReg
lw $10 44($t0)
la $t0 VReg
sw $10 424($t0)
la $t0 VReg
lw $11 424($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 428($t0)

func_csort_afterBranch_AfterLoop_AfterLoop_LoopIter :
li $10 1
la $t0 VReg
sw $10 432($t0)
b func_csort_afterBranch_AfterLoop_AfterLoop_LoopCondtion

func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop :
lw $10 4($29)
add $16 $29 4
la $t0 VReg
sw $10 440($t0)
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 444($t0)
la $t0 VReg
lw $11 444($t0)
la $t0 VReg
lw $12 440($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 436($t0)

func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop_LoopCondtion :
lw $10 8($29)
add $16 $29 8
la $t0 VReg
sw $10 452($t0)
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 456($t0)
la $t0 VReg
lw $11 456($t0)
la $t0 VReg
lw $12 452($t0)
sle $10 $11 $12
la $t0 VReg
sw $10 448($t0)
la $t0 VReg
lw $10 448($t0)
beq $10 0 func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop_AfterLoop

func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop_LoopBody :
la $t0 VReg
lw $25 20($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 468($t0)
la $t0 VReg
lw $10 468($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 464($t0)
la $t0 VReg
lw $25 16($t0)
sub $25 $25 4
li $20 0
lw $10 0($25)
mul $20 $20 $10
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 476($t0)
la $t0 VReg
lw $10 476($t0)
add $20 $20 $10
add $25 $25 4
mul $20 $20 4
add $20 $20 $25
move $16 $20
lw $10 0($20)
la $t0 VReg
sw $10 472($t0)
la $t0 VReg
lw $11 472($t0)
la $t0 VReg
lw $12 464($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 460($t0)

func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop_LoopIter :
la $t0 VReg
la $16 40($t0)
la $t0 VReg
lw $10 40($t0)
la $t0 VReg
sw $10 480($t0)
la $t0 VReg
lw $11 480($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 484($t0)
b func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop_LoopCondtion

func_csort_afterBranch_AfterLoop_AfterLoop_AfterLoop_AfterLoop :
jr $31

func_main :
li $10 0
la $t0 VReg
sw $10 492($t0)
li $10 9
la $t0 VReg
sw $10 496($t0)
sw $31 0($29)
subu $29 $29 28
la $t0 VReg
lw $11 492($t0)
sw $11 4($29)
la $t0 VReg
lw $11 496($t0)
sw $11 8($29)
jal func_csort
addu $29 $29 28
lw $31 0($29)
la $t0 VReg
sw $2 488($t0)
li $10 0
la $t0 VReg
sw $10 508($t0)
la $t0 VReg
la $16 56($t0)
la $t0 VReg
lw $10 56($t0)
la $t0 VReg
sw $10 512($t0)
la $t0 VReg
lw $11 512($t0)
la $t0 VReg
lw $12 508($t0)
move $10 $12
sw $10 0($16)
la $t0 VReg
sw $10 504($t0)

func_main_LoopCondtion :
li $10 9
la $t0 VReg
sw $10 520($t0)
la $t0 VReg
la $16 56($t0)
la $t0 VReg
lw $10 56($t0)
la $t0 VReg
sw $10 524($t0)
la $t0 VReg
lw $11 524($t0)
la $t0 VReg
lw $12 520($t0)
sle $10 $11 $12
la $t0 VReg
sw $10 516($t0)
la $t0 VReg
lw $10 516($t0)
beq $10 0 func_main_AfterLoop

func_main_LoopBody :
la $t0 VReg
la $16 56($t0)
la $t0 VReg
lw $10 56($t0)
la $t0 VReg
sw $10 532($t0)
la $t0 VReg
lw $11 532($t0)
move $4 $11
li $2 1
syscall
la $t0 VReg
sw $2 528($t0)

func_main_LoopIter :
la $t0 VReg
la $16 56($t0)
la $t0 VReg
lw $10 56($t0)
la $t0 VReg
sw $10 536($t0)
la $t0 VReg
lw $11 536($t0)
add $10 $11 1
sw $10 0($16)
la $t0 VReg
sw $10 540($t0)
b func_main_LoopCondtion

func_main_AfterLoop :
jr $31

	.globl _Z5counti
_Z5counti:	
	mov	r1,#0
.L1:
	add	r1,#1
	subs	r0,#1
	bne	.L1
	bx	lr
	

	.globl _Z9countDowni
_Z9countDowni:
	subs	r0,#1
	bne	_Z9countDowni
	bx	lr


	.globl _Z3sumii
_Z3sumii:
	mov	r2,#0
.L2:
	add	r2,r0
	cmp	r0,r1
	add	r0,#1
	bne	.L2
	mov	r0,r2
	bx	lr
	
	
	.globl _Z4facti
_Z4facti:
	mov	r1,#1
	cmp	r0,#0
	moveq	r0,r1
	bxeq	lr
.L3:
	mul	r1,r0
	subs	r0,#1
	bne	.L3
	mov	r0,r1
	bx	lr


	


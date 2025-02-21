	.file	"mulk.c"
	.text
	.globl	mulk
	.type	mulk, @function
mulk:
.LFB0:
	.cfi_startproc
	leaq	0(,%rdi,8), %rax
	ret
	.cfi_endproc
.LFE0:
	.size	mulk, .-mulk
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits

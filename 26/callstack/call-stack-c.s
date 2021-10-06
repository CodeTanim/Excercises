	.file	"call-stack.cpp"
# GNU C++98 (GCC) version 6.2.1 20160830 (x86_64-pc-linux-gnu)
#	compiled by GNU C version 6.2.1 20160830, GMP version 6.1.1, MPFR version 3.1.4-p1, MPC version 1.0.3, isl version 0.15
# warning: GMP header version 6.1.1 differs from library version 6.1.99.
# warning: MPFR header version 3.1.4-p1 differs from library version 3.1.5.
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -D_GNU_SOURCE call-stack.cpp -mtune=generic
# -march=x86-64 -auxbase-strip call-stack-c.s -O0 -Wall -Wformat=2
# -pedantic-errors -std=c++98 -fverbose-asm -fstack-protector
# options enabled:  -faggressive-loop-optimizations
# -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
# -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
# -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
# -fchkp-use-static-bounds -fchkp-use-static-const-bounds
# -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
# -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
# -fexceptions -ffunction-cse -fgcse-lm -fgnu-runtime -fgnu-unique -fident
# -finline-atomics -fira-hoist-pressure -fira-share-save-slots
# -fira-share-spill-slots -fivopts -fkeep-static-consts
# -fleading-underscore -flifetime-dse -flto-odr-type-merging -fmath-errno
# -fmerge-debug-strings -fpeephole -fplt -fprefetch-loop-arrays
# -freg-struct-return -fsched-critical-path-heuristic
# -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
# -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
# -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
# -fsemantic-interposition -fshow-column -fsigned-zeros
# -fsplit-ivs-in-unroller -fssa-backprop -fstack-protector -fstdarg-opt
# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
# -fverbose-asm -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
# -malign-stringops -mavx256-split-unaligned-load
# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mfxsr
# -mglibc -mieee-fp -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone
# -msse -msse2 -mstv -mtls-direct-seg-refs -mvzeroupper

	.section	.rodata
.LC0:
	.string	"Checking password..."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	$.LC0, %edi	#,
	call	puts	#
	call	_Z8pwdcheckv	#
	movl	$0, %eax	#, _4
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"enter password: "
.LC2:
	.string	"%s"
.LC3:
	.string	"lololol"
.LC4:
	.string	"Authenticated!"
.LC5:
	.string	"Wrong password, sorry!"
	.text
	.globl	_Z8pwdcheckv
	.type	_Z8pwdcheckv, @function
_Z8pwdcheckv:
.LFB1:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%fs:40, %rax	#, tmp90
	movq	%rax, -8(%rbp)	# tmp90, D.2379
	xorl	%eax, %eax	# tmp90
	movl	$0, -36(%rbp)	#, authenticated
	movl	$.LC1, %edi	#,
	movl	$0, %eax	#,
	call	printf	#
	leaq	-32(%rbp), %rax	#, tmp88
	movq	%rax, %rsi	# tmp88,
	movl	$.LC2, %edi	#,
	movl	$0, %eax	#,
	call	scanf	#
	leaq	-32(%rbp), %rax	#, tmp89
	movl	$.LC3, %esi	#,
	movq	%rax, %rdi	# tmp89,
	call	strcmp	#
	testl	%eax, %eax	# _8
	jne	.L4	#,
	movl	$1, -36(%rbp)	#, authenticated
.L4:
	cmpl	$0, -36(%rbp)	#, authenticated
	je	.L5	#,
	movl	$.LC4, %edi	#,
	call	puts	#
	jmp	.L8	#
.L5:
	movl	$.LC5, %edi	#,
	call	puts	#
.L8:
	nop
	movq	-8(%rbp), %rax	# D.2379, tmp91
	xorq	%fs:40, %rax	#, tmp91
	je	.L7	#,
	call	__stack_chk_fail	#
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_Z8pwdcheckv, .-_Z8pwdcheckv
	.ident	"GCC: (GNU) 6.2.1 20160830"
	.section	.note.GNU-stack,"",@progbits

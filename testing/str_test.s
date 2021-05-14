# GNU C17 (Homebrew GCC 10.2.0_4) version 10.2.0 (x86_64-apple-darwin19)
#	compiled by GNU C version 10.2.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.23-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -D__DYNAMIC__ str_test.c -fPIC
# -mmacosx-version-min=10.15.0 -mtune=core2 -fverbose-asm
# options enabled:  -Wnonportable-cfstrings -fPIC
# -faggressive-loop-optimizations -fallocation-dce
# -fasynchronous-unwind-tables -fauto-inc-dec -fdelete-null-pointer-checks
# -fearly-inlining -feliminate-unused-debug-symbols
# -feliminate-unused-debug-types -ffp-int-builtin-inexact -ffunction-cse
# -fgcse-lm -fgnu-unique -fident -finline-atomics -fipa-stack-alignment
# -fira-hoist-pressure -fira-share-save-slots -fira-share-spill-slots
# -fivopts -fkeep-static-consts -fleading-underscore -flifetime-dse
# -fmath-errno -fmerge-debug-strings -fpeephole -fplt
# -fprefetch-loop-arrays -freg-struct-return
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
# -fshow-column -fshrink-wrap-separate -fsigned-zeros
# -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
# -fverbose-asm -fzero-initialized-in-bss -gstrict-dwarf
# -m128bit-long-double -m64 -m80387 -malign-stringops -matt-stubs
# -mconstant-cfstrings -mfancy-math-387 -mfp-ret-in-387 -mfxsr -mieee-fp
# -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone -msse -msse2
# -msse3 -mstv -mvzeroupper

	.text
	.globl _main
_main:
LFB1:
	pushq	%rbp	#
LCFI0:
	movq	%rsp, %rbp	#,
LCFI1:
	subq	$32, %rsp	#,
# str_test.c:5: 	char A[] = {'a', 'b', 'c', 'd', 'e', '\0'}; // this is a string
	movl	$1684234849, -6(%rbp)	#, A
	movw	$101, -2(%rbp)	#, A
# str_test.c:6: 	char B[] = "hello"; // this too
	movl	$1819043176, -12(%rbp)	#, B
	movw	$111, -8(%rbp)	#, B
# str_test.c:8: 	char C[] = {'a', 'b', 'c', 'd', 'e'}; // this is not!
	movl	$1684234849, -17(%rbp)	#, C
	movb	$101, -13(%rbp)	#, C
# str_test.c:10: 	printf("%s\n", A);
	leaq	-6(%rbp), %rax	#, tmp84
	movq	%rax, %rdi	# tmp84,
	call	_puts	#
# str_test.c:11: 	printf("%s\n", B);
	leaq	-12(%rbp), %rax	#, tmp85
	movq	%rax, %rdi	# tmp85,
	call	_puts	#
# str_test.c:12: 	printf("%s\n", C);
	leaq	-17(%rbp), %rax	#, tmp86
	movq	%rax, %rdi	# tmp86,
	call	_puts	#
# str_test.c:18: 	return 0;
	movl	$0, %eax	#, _8
# str_test.c:19: }
	leave	
LCFI2:
	ret	
LFE1:
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x1
	.ascii "zR\0"
	.byte	0x1
	.byte	0x78
	.byte	0x10
	.byte	0x1
	.byte	0x10
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.byte	0x90
	.byte	0x1
	.align 3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB1-.
	.set L$set$2,LFE1-LFB1
	.quad L$set$2
	.byte	0
	.byte	0x4
	.set L$set$3,LCFI0-LFB1
	.long L$set$3
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$5,LCFI2-LCFI1
	.long L$set$5
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.align 3
LEFDE1:
	.ident	"GCC: (Homebrew GCC 10.2.0_4) 10.2.0"
	.subsections_via_symbols

# Building Our First C Program using the Unix-based CLI

## Write your "Hello, World!" program

```c
#include <stdio.h>

int main() {
	printf("Hello, World!\r\n");
	return(0);
}
```

## Compile your C program
```bash
$ gcc hello.c
```
Check in your directory for a file called ```a.out```

## Run your freshly compiled C program
```bash
$ ./a.out
```
Why do we have to precede ```a.out``` with ```./```?

## Let's rename that ```a.out``` file to something more aptly named, and run it
```bash
$ mv ./a.out hello.exe
$ ./hello.exe
```

## Let's see the intermediate assembly code from your C code
```bash
$ gcc -S hello.c
```
This command generates the intermediate assembly file ```hello.s```, and its contents are, as assembled on a macos computer:
```asm
	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hello, World!\r\n"

.subsections_via_symbols
```

## [For next session] Compiling and other SW dev tasks using Make and gcc
* [Compiling, Linking and Building C Applications](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)


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
01.	.section	__TEXT,__text,regular,pure_instructions  
02.	.build_version macos, 10, 15	sdk_version 10, 15, 6
03.	.globl	_main                   ## -- Begin function main
04.	.p2align	4, 0x90
05. _main:                              ## @main
06.	.cfi_startproc
07. ## %bb.0:
08. 	pushq	%rbp
09.	.cfi_def_cfa_offset 16
10.	.cfi_offset %rbp, -16
11.	movq	%rsp, %rbp
12.	.cfi_def_cfa_register %rbp
13.	subq	$16, %rsp
14.	movl	$0, -4(%rbp)
15.	leaq	L_.str(%rip), %rdi
16.	movb	$0, %al
17.	callq	_printf
18.	xorl	%ecx, %ecx
19.	movl	%eax, -8(%rbp)          ## 4-byte Spill
20.	movl	%ecx, %eax
21.	addq	$16, %rsp
22.	popq	%rbp
23.	retq
24.	.cfi_endproc
25.                                      ## -- End function
26.	.section	__TEXT,__cstring,cstring_literals
27. L_.str:                              ## @.str
28.	.asciz	"Hello, World!\r\n"
29.
30. .subsections_via_symbols
```

## [For next session] Compiling and other SW dev tasks using Make and gcc
* [Compiling, Linking and Building C Applications](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)


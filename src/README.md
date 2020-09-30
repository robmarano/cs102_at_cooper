# Session 5: Let's Review

## Topics to cover
1. C directives
2. Variables and arithmetic expressions
3. Loops
4. Character input and output
5. Arrays
6. Functions

## C directives

## Symbolic constants
Using the directive operator, ```#```, one can create a constant that is of literal value and not a variable.

```c
#define UPPER 8
```

### Included Code
Software development depends upon libraries of code that implement algorithms and include constants.
In C these externally defined constants and functions containing algorithms in include files, e.g.,

```c
#include <stdio.h>
```

The angled brackets denote that the file is located in the standard location of include files.
If you write your own include file, a dot-h file, and it located in the same directory as your dot-c file,
then you include it as follows:

```c
#include "myInclude.h"
```

## Variables and arithmetic expressions

Variables are named references for areas of data stored in memory, a data storage type. Programs run in memory and are stored as files on the hard disk, USB stick, or network, for example. In the absence of explicit initialization, automatic (and register) variables have undefined (i.e., garbage) initial values; external (and static) variables are guaranteed to be initialized to zero. Good best practices require you to initialize your variables when appropriate.

Scalar variables may be initialized when they are defined, by following the name with equals sign and an expression.

```c
int x = 1;
char squote = '\''; /* \ means "escape sequence" - so \' means single-quote, literally
long day = 1000L * 60L * 60L * 24L; /* milliseconds / day */
```

### Automatic variables

From K&R textbook:

> The variables in main, such as line, longest, etc., are private or local to main.
> Because they are declared within main, no other function can have direct access to them.
> The same is true of the variables in other functions; for example, the variable i in getline
> is unrelated to the i in copy. Each local variable in a function comes into existence only
> when the function is called, and disappears when the function is exited. This is why such
> variables are usually known as automatic variables, following terminology in other languages.
> We will use the term automatic henceforth to refer to these local variables. (Chapter 4
> discusses the static storage class, in which local variables do retain their values between
> calls.) Because automatic variables come and go with function invocation, they do not retain
> their values from one call to the next, and must be explicitly set upon each entry. If they
> are not set, they will contain garbage.

### External variables

From K&R textbook:

> As an alternative to automatic variables, it is possible to define variables that are external
> to all functions, that is, variables that can be accessed by name by any function. (This
> mechanism is rather like Fortran COMMON or Pascal variables declared in the outermost block.)
> Because external variables are globally accessible, they can be used instead of argument lists
> to communicate data between functions. Furthermore, because external variables remain in
> existence permanently, rather than appearing and disappearing as functions are called and
> exited, they retain their values even after the functions that set them have returned.
>
> An external variable must be defined, exactly once, outside of any function; this sets aside
> storage for it. The variable must also be declared in each function that wants to access it;
> this states the type of the variable. The declaration may be an explicit extern statement or
> may be implicit from context.
>
> In certain circumstances, the extern declaration can be omitted. If the definition of the
> external variable occurs in the source file before its use in a particular function, then
> there is no need for an extern declaration in the function. Common practice is to place
> definitions of all external variables at the beginning of the source file, and then omit
> all extern declarations.
>
> If the program is in several source files, and a variable is defined in file1 and used in
> file2 and file3, then extern declarations are needed in file2 and file3 to connect the
> occurrences of the variable. The usual practice is to collect extern declarations of
> variables and functions in a separate file, historically called a header, that is included
> by #include at the front of each source file. The suffix .h is conventional for header names.
> The functions of the standard library, for example, are declared in headers like <stdio.h>.
> This topic is discussed at length in Chapter 4, and the library itself in Chapter 7 and
> Appendix B.

### Variable declartion vs definition

From K&R textbook:

> You should note that we are using the words **definition** and **declaration** carefully
> when we refer to **external** variables in this section. Variable **definition** refers
> to the place where the variable is created or assigned storage; while variable
> **declaration** refers to places where the nature of the variable is stated but
> no storage is allocated.

* Variable declaration
int x;

* Variable definition
x = 5;

## Loops

### The ```for``` statement

```c
int c;
int upperLimit = 8;
for (c = 0; c < upperLimit; c = c + 1) {
  printf(“value of c = %d\n”, c);
}
```
or simpler, using postfix increment operator (c++), that is, first use the value *then* increment the value by 1

```c
int upperLimit = 8;
for (int c = 0; c < upperLimit; c++) {
  printf(“value of c = %d\n”, c);
}
```

Using the "null statement"

```c
double nc;
for (nc = 0; getchar() != EOF; ++nc)
  ;
printf(“%.0f\n”, nc);
```

### The ```while``` statement
* check the conditional before "doing"

```c
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size*/

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
```

### The "infinite loop"

```c
    int i = 0;
    while ( i => 0 ) {
        printf("Looping forever ...\n");
        i++;
    }
```

### The "do-while" loop
* The do will always execute first, before conditional assessment
* The loop ends when the while conditional is satisfied

```c
#include <stdio.h>
#include <string.h>

// K&R pg. 64
// itoa: convert n to characters in s

int main()
{
    int n = -77;
    char s[10];

    int idx, sign;
    if ((sign = n) < 0) // record sign
        n = -n;         // make n positive
    idx = 0;
    do {
        s[idx++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[idx++] = '-';
    s[idx] = '\0';

    // reverse s
    int c, i, j;
    for (i=0, j=strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s", s);
    return 0;
}
```

### Break and continue keywords used in loops
* ```break``` allows you to exit early from a running loop; usually used in an ```if``` statement within the loop
* ```continue``` forces the next iteration of the loop

```c
#include <stdio.h>
#include <string.h>

// K&R pg. 65
// trim: remove trailing blanks, tabs, newlines
int main()
{
    /*          12345678 */
    char s[] = "HELLO   ";
    int n;
    for (n = strlen(s)-1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n+1] = '\0';
    printf("%d\n", n);
    printf("%s.", s);

    return 0;
}
```

## Character input and output
As defined in the include file ```<stdio.h>```, there are three standard text streams for C on operating systems
that support command-line terminals, e.g., Unix-based like Linux and macos, and Windows. These streams are:
* standard output (stdout)
* standard input (stdin)
* standard err (stderr)

Writing to ```stdout``` is simple; use ```printf()```

```c
#include <stdio.h>

int main() {
  printf("Hello, World!\n");
  return(0);
}
```

Reading from ```stdin``` is simple; use ```getchar``` to read in a character. Don't forget to fflush(stdin) to not read in the EOF, or just check if the input is EOF.

```c
#include <stdio.h>

int main() {
  int c;

  printf("you typed...\n");
  while ( (c = getchar() ) != EOF ) {
    printf(" %c");
  }
}
```

Reading an entire line from ```stdin```, using the POSIX function ```readline()```.
Note: To exit from the program you can terminate it immediately with <ctrl>-c, or
on Unix-based systems, <ctrl>-d, which is equivalent to EOF, or
on Windows-based systems, <ctrl>-z, which is EOF.
After exiting gracefully with EOF keystroke,then you should see the value 18446744073709551615
which is the max long number, i.e., 2^64-1, where 64 is the number of bits in your CPU's ISA
It is also defined as #define ULONG_MAX 0xFFFFFFFFUL
In other words, that is the value -1 in two's complement.

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    char *line = NULL;
    size_t len = 0; /* defined in stddef.h */
    ssize_t read = 0;

    while (read != -1) {
        puts("enter a line");
        read = getline(&line, &len, stdin);
        printf("line = %s", line);
        printf("line length = %zu, including \\n\n", read);
        puts("");
    }
    free(line);
    return 0;
}
```

## Arrays
An array is a sequential storage of data represented by a variable name, e.g.,

```c
...
    int intArray[3]; /* int array declaration */

    intArray[0] = 0; /* the start of the array definition by defining each array element */
    intArray[1] = 1;
    intArray[2] = 2;

    printf("%d %d %d\n", intArray[0], intArray[1], intArray[2]);

    char charArrA[3] = { 'A', 'B', 'C' }; /* char array declaration & definition */
    char charArrB[] = "DEF";
    int arrLen = 3;
    for (int i=0; i < arrLen; i++)
    {
        printf("from charArrA = %c ; from charArrB = %c\n", charArrA[i], charArrB[i]);
    }
    printf("Done!\n");
...
```

### Reversing character arrays, also known as "strings"

```c
#include <stdio.h>
#include <string.h>

// K&R pg. 62
// reverse: reverse string s in place

int main()
{
    char s[] = "ECE160";

    int c, i, j;
    for (i=0, j=strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s", s);
    return 0;
}
```

## Functions
* Functions splits up the main function to more readable chunks
* Generally, you don't want functions to be too large (<100 lines)
* Functions are in the form:

```c
return-type function-name(parameter declarations, if any)
{
  declarations
  statements
  return
}
```
### Examples of using a function

```c
#include <stdio.h>

// K&R pg. 24-25
// power function

// Function prototype at the beginning
int power(int m, int n);

int main()
{
    int i;
    for (i=0; i<10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

// power: raise base to n-th power; n >= 0
int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i=1; i<=n; ++i)
        p = p * base;
    return p;
}
```

### Functions can have arguments, called "formal parameters"
Here's a simple example of using arguments to the main function.

```c
#include <stdio.h>

int main(int argc, char *argv[])
/* argc is # of input arguments; char *argv[] is a pointer to strings) */
{
    printf("argc = %d\n", argc);
    int i;
    for (i=0; i < argc; i++)
    {
        printf("argument #%d is %s\n", i, argv[i]);
    }
    return(0);
}

```
Those arguments are provided by the OS

```c
$ ./cli_args.exe 1 2 3
argc = 4
argument #0 is ./cli_args.exe
argument #1 is 1
argument #2 is 2
argument #3 is 3
```


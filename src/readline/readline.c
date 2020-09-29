/*
 * readline.c
 *
 * C program to read lines of code from the console stdin
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printInstructions();

int main(void) {
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    printInstructions();

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

void printInstructions() {
    printf("Instructions:\n");
    printf("Enter a line then hit <enter> or <return> on your keyboard.\n");
    printf("To exit from this program you can terminate it immediately with <ctrl>-c, or\n");
    printf("on Unix-based systems, <ctrl>-d, which is equivalent to EOF, or\n");
    printf("on Windows-based systems, <ctrl>-z, which is EOF.\n");
    printf("After exiting gracefully with EOF keystroke,");
    printf("then you should see the value %lu\n", ULONG_MAX); /* defined in limits.h */
    printf("which is the max long number, i.e., 2^64-1, where 64 is the number of bits in your CPU's ISA\n");
    printf("It is also defined as #define ULONG_MAX 0xFFFFFFFFUL\n");
    printf("In other words, that is the value -1 in two's complement.\n");
    printf("\n");
}

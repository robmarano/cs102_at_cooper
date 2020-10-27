#include <stdio.h>

/* Global variables */
int j, k;
int *ptr;
int *pptr;

int main(void)
{
    j = 1;    /* j is an int with value 1 */
    k = 2;    /* k is an int with value 2 */
    ptr = &k; /* ptr is a pointer, pointing to the int k */

    printf("\n");
    printf("j has the value %d and is stored at memory location %p\n", j, (void *)&j);
    printf("k has the value %d and is stored at memory location %p\n", k, (void *)&k);
    printf("ptr has the value %p and is stored at memory location %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);

    printf("The size of an int variable is %lu bytes.\n", sizeof(int));
    printf("The size of an int pointer variable is %lu bytes.\n", sizeof(int *));

    pptr = ptr - 1;
    printf("pptr has the value %p and is stored at memory location %p\n", pptr, (void *)&pptr);
    printf("The value of the integer at 1 int memory location BEFORE ptr is %d\n", *(ptr - 1));

    printf("\n");
    return(0);
}


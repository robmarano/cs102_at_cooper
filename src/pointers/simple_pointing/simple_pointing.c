#include <stdio.h>

/* Global variables */
int j, k;
int *ptr;

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

    return(0);
}


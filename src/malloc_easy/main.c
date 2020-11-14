#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a = 4;

    int *ptr = NULL;

    /* create memory on the stack to store prt, as a pointer to an int */
    ptr = (int *) malloc(sizeof(int));
    printf("a = %d, addr(a) = %p, *ptr = %d, addr(ptr) = %p\n", a, &a, *ptr, (void *)&ptr); 
    /* free memory you created and pointed to by ptr */
    free(ptr);
    printf("addr(ptr) = %p\n", (void *)&ptr); 
    printf("addr(ptr) = %p\n", (void *)&ptr); 

    *ptr = a;
    printf("addr(ptr) = %p\n", (void *)&ptr); 

    printf("a = %d, addr(a) = %p, *ptr = %d, addr(ptr) = %p\n", a, &a, *ptr, (void *)&ptr); 

    /* ptr now points to the memory location of the int variable called "a" */
    ptr = &a;
    printf("a = %d, addr(a) = %p, *ptr = %d, addr(ptr) = %p\n", a, &a, *ptr, (void *)&ptr); 

    ptr = (int *) malloc(sizeof(int));
    printf("a = %d, addr(a) = %p, *ptr = %d, addr(ptr) = %p\n", a, &a, *ptr, (void *)&ptr); 
    free(ptr);
    ptr = NULL;

    return(0);
}

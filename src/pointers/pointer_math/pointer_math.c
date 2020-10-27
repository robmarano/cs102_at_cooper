#include <stdio.h>

/* Global variables */
int myArray[] = {1,23,17,4,-5,100};
int *ptr;

int main1(void)
{
    ptr = &myArray[0]; /* point our pointer to the first element of the array */
    ptr += 1;
    printf("\n %p \n",(void *)&myArray[0]);
    printf("\n %p \n", ptr);
    return(0);
}

int main(void)
{
    int i;
    ptr = &myArray[0]; /* point our pointer to the first element of the array */
    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
        printf("myArray[%d] = %d ",i,myArray[i]); /*<-- A */
        printf("ptr + %d = %d\n",i, *(ptr + i)); /*<-- B */
    }
    return(0);
}

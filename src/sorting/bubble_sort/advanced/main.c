#include <stdio.h>
#include "bubble_sort.h"

#define MAX_ARRAY_SIZE 20

int main()
{
    int total_count, counter;
    int array[MAX_ARRAY_SIZE];

    /* fetch from user her/his list of numbers to sort */

    printf("How many number you want to input, not exceeding %d?\n", MAX_ARRAY_SIZE);
    scanf("%d", &total_count); /* what is that & character in front of array? */

    printf("\nPlease enter %d integers that has to be sorted\n", total_count);
    for (counter = 0; counter < total_count; counter++)
        scanf("%d", &array[counter]); /* what is that & character in front of array? */

    printf("\nBelow is the list of elements you provided:\n");
    for (counter = 0; counter < total_count; counter++)
        printf("%d ", array[counter]);

    bubbleSort(array, total_count);

    printf("\nBelow is the list of elements sorted in ascending order:\n");
    for (counter = 0; counter < total_count; counter++)
        printf("%d ", array[counter]);
    printf("\n\nThank you. Exiting.\n");

    /* exit program successfully */
    return(0);
}

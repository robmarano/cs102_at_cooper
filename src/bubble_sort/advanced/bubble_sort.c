/*
 * bubble_sort.c
 */

#include <stdio.h>
#include "bubble_sort.h"
#include "util.h"

/* bubble sort algorithm */
void bubbleSort(int *array, int total_count) {
    int counter, counter1;

    for (counter = 0 ; counter < total_count - 1; counter++)
    {
        for (counter1 = 0 ; counter1 < total_count - counter - 1; counter1++)
        {
            if (array[counter1] > array[counter1+1]) /* For decreasing order use < */
            {
                swap(&array[counter1], &array[counter1+1]);
            }
        }
    }

    return;
}


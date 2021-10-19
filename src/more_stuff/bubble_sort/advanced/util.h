/*
 * util.h
 */
#ifndef UTIL_H
#define UTIL_H

#define SWAP(T, a, b) do { T tmp = a; a = b; b = tmp; } while (0)

#endif

void swap(int *x, int *y);

void swap(int *x, int *y)
{
    int temp;
    temp = *x; /* save the value at address x */
    *x = *y; /* put the value stored at y into storage x */
    *y = temp; /* put temp into y */

    return;
}

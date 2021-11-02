/*
 * main.c
 *
 * This program introduces recursion from K&R
 * Written by: Rob Marano <robmarano@gmail.com>
 *
 */

#include "main.h"
#include "recursion.h"

int main(void)
{
    int n, m= 0, i;
    printf("Enter Total terms: ");
    scanf("%d", &n);
    printf("Fibonacci series terms are: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", fibonacci(m));
        m++;
    }
    printf("\n");
    return(SUCCESS);
}
/*
 * recursion.c
 *
 * C file for recursive functions
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#include "recursion.h"

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    else {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}
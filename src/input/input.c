/*
 * input.c
 */

#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 0

int main(void) {
   int n;

   printf("Please enter a valid integer number: ");
   scanf("%d",&n);
   printf("%d\n", n);

   printf("You wrote the number %d\n", n);

   return SUCCESS;
}

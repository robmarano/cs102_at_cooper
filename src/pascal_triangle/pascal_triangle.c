/*
 * pascals_triangle.c
 */

#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 0

int factorial(int n) {
   int f;
   
   for(f = 1; n > 1; n--)
      f *= n;
      
   return f;
}

int nCr(int n,int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}

int main(void) {
   int n, i, j;

   printf("Please enter number of levels to show Pascal's Triangle: ");
   /* n = 5; */
   /* n = getchar() - 48; */
   scanf("%d",&n);
   printf("%d\n", n);

   printf("Pascal's Triangle for %d levels:\n", n+1);

   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", nCr(i, j));

      printf("\n");
   }
   printf("\n");

   return SUCCESS;
}

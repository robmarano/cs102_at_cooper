/*
 * main.c
 *
 * This program introduces pointers from K&R
 * Written by: Rob Marano <robmarano@gmail.com>
 *
 */

#include "main.h"
#include "pointers.h"

int main(void) {

  int a = 10;
  int b = 20;
  printf("a = %d; b = %d\n",a,b);
  swap(&a, &b);
  nswap(a, b);
  printf("a = %d (0x%x); b = %d (0x%x)\n",a, &a, b, &b);

  int *pa = &a;
  printf("a = %d ; pa = 0x%x\n",a, pa);
  int *pb = pa + 1;
  printf("b = %d ; pb = 0x%x\n",b, pb);
  

  printf("\n");
  return(SUCCESS);
}

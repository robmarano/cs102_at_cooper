#include <stdio.h>
#include "maths.h"
#define SUCCESS 0

int main(void) {
  int a = 2;
  int b = 4;
  int c = max(a,b); /* declared in maths.h and defined in maths.c */
  printf("a = %d\nb = %d\nc = %d\n",a,b,c);

  return(SUCCESS);
}

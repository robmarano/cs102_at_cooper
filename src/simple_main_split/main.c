#include <stdio.h>
#include "main.h"
#define SUCCESS 0

int main(void) {
  int a = 2;
  int b = 4;
  int c = max(a,b);
  printf("a = %d\nb = %d\nc = %d\n",a,b,c);

  return(SUCCESS);
}

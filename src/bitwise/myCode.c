#include <stdio.h>
#define SUCCESS 0

int main(void) {
  int cnt = 255;
  int cntr = cnt >> 2;
  int cntl = cnt << 2;
  printf("cnt = 0x%x = %d\n",cnt, cnt);
  printf("cnt >> 2 = 0x%x = %d\n", cntr, cntr);
  printf("cnt << 2 = 0x%x = %d\n", cntl, cntl);

  return SUCCESS;
}

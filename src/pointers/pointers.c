/*
 * pointers.c
 *
 * C file for working with pointers
 * Written by: Rob Marano <robmarano@gmail.com>
 */

#include "pointers.h"

void swap(int *px, int *py) {
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

void nswap(int px, int py) {
  int temp;
  temp = px;
  px = py;
  py = temp;
}

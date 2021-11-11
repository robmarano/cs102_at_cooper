/*
 * main.c
 *
 * This program introduces pointers from K&R
 * Written by: Rob Marano <robmarano@gmail.com>
 *
 */

#include "main.h"

#define MAXLINE 25

int main(void) {
  printf("Enter your first name: ");
/*
  char *fname;
  fname = malloc(MAXLINE * sizeof(char));
*/
  char fname[MAXLINE];
  scanf("%s",fname);
  printf("Your name is %s\n",fname);

  return(SUCCESS);
}

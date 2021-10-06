#include <stdio.h>
#define MAX 3
/* #define MAX 16 */

int main(void) {

	/* int first[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; */
/*
	int first[MAX] = { 0, 1, 2 };
	for(int i=0; i<MAX; i++) {
		printf("%d\n", first[i]);
	}

	printf("0x%x\n", first);

	for(int i=0; i<MAX; i++) {
		first[i] = 2*i;
		printf("%d\n", first[i]);
	}
*/
	int multi[MAX][MAX] =  { {0,1,2}, {3,4,5}, {6,7,8} };

	for (int i=0; i<MAX; i++)
		for (int j=0; j<MAX; j++)
			printf("(i,j) = (%d,%d)\n",i,j);
}

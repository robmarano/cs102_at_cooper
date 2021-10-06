#include <stdio.h>
#define MAX 16

int main(void) {

/*
	for (int i=0; i<MAX; i++) {
		if ( i != 0) {
			if ( !(i % 2) ) {
				printf("%d\n",i);
			}
		}
	}
*/
	for (int i=0; i<MAX; i++) {
		if ( (i != 0) & !(i % 2) ) {
			printf("%d\n",i);
		}
	}
/*
	for (int i=0; i<MAX; i++) {
		if ( !(i % 2)  && (i != 0) ) {
			printf("%d\n",i);
		}
	}
*/
/*
	for (int i=0; i<MAX; i++) {
		if ( !(i % 2)  || (i != 0) ) {
			printf("%d\n",i);
		}
	}
*/
/*
	for (int i=0; i<MAX; i++) {
		if (i == 0) {
			continue;
		} else {
			if ( !(i % 2) ) {
				printf("%d\n",i);
			}
		}
	}
*/
/*
	for (int i=0; i<MAX; i++) {
		if (i == 0) {
			continue;
		} else {
			if ( !(i % 2) ) {
				printf("%d\n",i);
			}
		}
	}
*/
}

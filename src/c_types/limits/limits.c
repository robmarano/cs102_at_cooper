#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	/* char */
	printf("char type limit values\n");
	printf("min value = %d; max value = %d\n", CHAR_MIN, CHAR_MAX);

	printf("\n");

	/* int */
	printf("int type limit values\n");
	printf("min value = %d; max value = %d\n", INT_MIN, INT_MAX);

	printf("\n");

	/* unsigned long int */
	printf("unsigned long int type limit values\n");
	printf("min value = %ld; max value = %lu\n", LONG_MIN, ULONG_MAX);

	printf("\n");

	/* float */
	float f = 1.2300000000000000;
	printf("an example float = %.20f\n", f);
	printf("float type limit values\n");
	printf("min value = %e; max value = %e\n", FLT_MIN, FLT_MAX);

	printf("\n");


	return 0;
}

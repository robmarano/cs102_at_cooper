#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for F = 0, 20, ..., 300 */
int main_with_int() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temp table */
	upper = 300;	/* upper limit of temp table */
	step = 30;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return(0);
}

int main() {
	double fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temp table */
	upper = 300;	/* upper limit of temp table */
	step = 30;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return(0);
}

#include <stdio.h>

int main() {
	char c; /* variable declaration */

	c = 'D'; /* variable definition */

	printf("c = %c (decimal)\n", c);
	/* example of wrapping using the data type limits; think of modulo */
	printf("c = %c (decimal) after adding %d to %d\n", c, 256, c);
	printf("c = %x (hex)\n", c);
	printf("c = %o (octal)\n", c);

	return 0;
}

#include <stdio.h>

int main() {
	int limit;
	int cnt;

	limit = 24;
	cnt = 0;

	while (cnt < limit) {
		printf("Hello, Star!\t%2d",cnt);
		cnt = cnt + 1;
	}
}

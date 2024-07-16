#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX 20

/* generate a line */
void line(int32_t v) {
	int32_t x;

	for (x = 0; x < v; x++) {
		if (x >= MAX) {
			break;
		}
		putchar('-');
	}
	putchar('\n');
}


int32_t main() {
	int32_t value = 0;

	printf("Enter a positive value less than %d: ", MAX);
	scanf("%d", &value);
	line(value);

	return EXIT_SUCCESS;
}

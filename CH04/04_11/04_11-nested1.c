#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char column;

	for(uint8_t row = 1; row <= 10; row++) {
		for(column = 'A';column <= 'J'; column++) {
			printf("%2d%c   ", row, column);
		}
		putchar('\n');
	}

	return EXIT_SUCCESS;
}

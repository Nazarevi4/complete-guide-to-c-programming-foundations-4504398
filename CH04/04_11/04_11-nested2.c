#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	uint8_t row;
	char column;

	row = 1;
	while(row <= 10) {
		column = 'A';
		while(column<='J') {
			printf("%2d%c   ", row, column++);
			//column++;
		}
		putchar('\n');
		row++;
	}

	return EXIT_SUCCESS;
}

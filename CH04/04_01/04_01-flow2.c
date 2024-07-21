#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t get_value() {
	char buffer[3];

	fgets(buffer, 3, stdin);

	return (atoi(buffer));
}

void newline(void) {
	putchar('\n');
}

void separator_row(int32_t w, char c) {
	for(uint32_t x = 0; x < w * 4; x++) {
		putchar(c);
	}
	newline();
}


int32_t main() {
	int32_t a, b, c, rows;
	const int32_t columns = 10;

	printf("How many rows (18 max)? ");
	rows = get_value();
	if(rows > 18) {
		rows = 18;
	}

	c = 0;
	for(a = 0; a < rows; a++) {
		if(a % 2) {
			separator_row(columns, '=');
		}
		else {
			for(b = 'A'; b < 'A' + columns; b++) {
				printf(" %d%c ",c,b);
			}
			newline();
			c++;
		}
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void repeat(int r) {
	for(uint32_t a = 0; a < r; a++) {
		putchar('-');
	}
	putchar('\n');
}


int32_t main() {
	printf("40 dashes:\n");
	repeat(40);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void repeat(uint32_t count) {
	for(uint32_t x = 0; x < count; x++) {
		printf("Blah ");
	}
	putchar('\n');
}


int32_t main() {
	printf("Chris said: ");
	repeat(1);
	printf("Pat said: ");
	repeat(3);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	for(uint8_t x = 1; x <= 10; x++) {
		printf("%d - %s\n", x, x % 2 ? "odd" : "even");
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	uint8_t a, b;

	for(a = 1, b = 10 ; a <= 10 ; a++, b--) {
		printf("%2d %2d\n", a, b);
	}

	return EXIT_SUCCESS;
}

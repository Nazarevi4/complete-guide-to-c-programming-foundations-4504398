#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	long x = 100L;
	uint32_t y = 17U;
	float z = 3.0F;

	printf("X = %ld\n", x);
	printf("Y = %d\n", y);
	printf("Z = %f\n", z);

	return EXIT_SUCCESS;
}

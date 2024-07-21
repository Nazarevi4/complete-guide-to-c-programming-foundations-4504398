#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t main() {
	int32_t x, r[5];

	srand((uint32_t)time(NULL));

	for(x = 0; x < 5; x++) {
		r[x] = rand() % 10 + 1;
	}

	printf("Here are your %d random values:\n", 5);
	for(x = 0; x < 5; x++) {
		printf("%3d\n", r[x]);
	}

	return EXIT_SUCCESS;
}

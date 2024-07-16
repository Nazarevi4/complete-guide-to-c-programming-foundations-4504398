#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	const int count = 4;

	printf("Please count to %d\n", count);
	printf("Do not count to %d\n", count + 1);
	printf("Do not stop at %d\n", count - 1);

	return EXIT_SUCCESS;
}

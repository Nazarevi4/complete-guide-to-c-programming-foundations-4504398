#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a, b;

	a = 100;
	b = 7;

	printf("%d / %d = %f\n", a, b, (float)a / b);

	return EXIT_SUCCESS;
}

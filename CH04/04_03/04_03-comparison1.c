#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a, b, c;

	a = 10;
	b = 14;

	if(a > b) {
		c = a;
	}
	else {
		c = b;
	}

	printf("%d is the greater of %d and %d\n", c, a, b);

	return EXIT_SUCCESS;
}

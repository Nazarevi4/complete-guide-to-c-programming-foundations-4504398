#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void sum(void) {
	auto int32_t a, b;

	a = 91; b = 7;
	printf("%d + %d = %d\n", a, b, a + b);
}


int32_t main() {
	puts("Calling the sum() function:");
	sum();
	puts("done");

	return EXIT_SUCCESS;
}

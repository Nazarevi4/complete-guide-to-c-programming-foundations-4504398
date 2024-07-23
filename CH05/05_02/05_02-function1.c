#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void sum(void);


int32_t main() {
	puts("Calling the sum() function:");
	sum();
	puts("Done");

	return EXIT_SUCCESS;
}


void sum(void) {
	int32_t a, b, sum;

	a = 91; b = 7;
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
}

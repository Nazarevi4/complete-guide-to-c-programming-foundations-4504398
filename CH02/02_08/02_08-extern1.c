#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t a, b;

void sum(void) {
	extern int32_t a, b;

	a = 91; b = 7;
	printf("%d + %d = %d\n", a, b, a + b);
}


int32_t main() {
	extern int32_t a, b;

	puts("Calling the sum() function:");
	sum();
	puts("And in main():");
	printf("%d + %d = %d\n", a, b, a + b);

	return EXIT_SUCCESS;
}

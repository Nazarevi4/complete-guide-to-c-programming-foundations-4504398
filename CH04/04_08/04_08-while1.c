#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	a = 0;
	while(a < 10) {
		puts("I must do this 10 times");
		a++;
	}

	return EXIT_SUCCESS;
}

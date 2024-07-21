#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a, b;

	printf("Type a positive value: ");
	scanf("%d", &b);

	for(a = 0 ; a < b ; a++) {
		printf("Countdown: %d\n", b - a);
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t b = 0;

	printf("Type a positive value: ");
	scanf("%d", &b);

	for(uint8_t a = 0; a < b; a++) {
		printf("I must do this %d times\n", b);
		if(a == 9) { break; }
	}

	return EXIT_SUCCESS;
}

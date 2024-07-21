#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	printf("Type a value: ");
	scanf("%d", &a);
	if( a < 10 ) {
		puts("You typed a value less than 10");
	}
	puts("Thank you");

	return EXIT_SUCCESS;
}

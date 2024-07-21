#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	printf("Type a value: ");
	scanf("%d", &a);
	if(a < 10) {
		puts("You typed a value less than 10");
		a -= 5;
		printf("The value is now %d\n", a);
	}
	puts("Thank you");

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a, b;

	printf("Enter value 1: ");
	scanf("%d", &a);
	printf("Enter value 2: ");
	scanf("%d", &b);

	if(a > b) {
		printf("%d is greater than %d\n", a, b);
	}
	else {
		printf("%d is greater than %d\n", b, a);
	}

	return EXIT_SUCCESS;
}

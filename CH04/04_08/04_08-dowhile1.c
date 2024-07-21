#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	printf("Enter a value: ");
	scanf("%d", &a);

	do {
		puts("Here we go!");
		a--;
	} while(a > 0);

	return EXIT_SUCCESS;
}

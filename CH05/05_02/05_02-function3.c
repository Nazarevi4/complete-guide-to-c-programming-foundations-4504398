#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	puts("Carefully read these directions!");
	printf("Press any key to continue: ");
	getchar();
	puts("Are you sure you read the directions?");
	printf("Press any key to continue: ");
	getchar();
	puts("Okay. I'm sure you're sure.");
	printf("Press any key to continue: ");
	getchar();

	return EXIT_SUCCESS;
}

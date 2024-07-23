#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void pressAny(void) {
	printf("Press any key to continue: ");
	getchar();
}


int32_t main() {
	puts("Carefully read these directions!");
	pressAny();
	puts("Are you sure you read the directions?");
	pressAny();
	puts("Okay. I'm sure you're sure.");
	pressAny();

	return EXIT_SUCCESS;
}

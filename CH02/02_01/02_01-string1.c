#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char buffer[32];

	printf("Type your name: ");
	fgets(buffer, 32, stdin);
	printf("Hello, %s", buffer);

	return EXIT_SUCCESS;
}

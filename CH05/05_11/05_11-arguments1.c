#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main(int32_t argc, char *argv[]) {
	int32_t x;

	printf("%d arguments found:\n", argc);
	for(x = 0; x < argc; x++) {
		printf("\t%d: %s\n", x, argv[x]);
	}

	return EXIT_SUCCESS;
}

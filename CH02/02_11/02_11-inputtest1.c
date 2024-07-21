#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char buffer[16];
	int32_t lv = 0;

	printf("Type a large value: ");
	fgets(buffer, 16, stdin);
	lv = strtol(buffer, NULL, 10);
	printf("You typed %d\n", lv);

	return EXIT_SUCCESS;
}

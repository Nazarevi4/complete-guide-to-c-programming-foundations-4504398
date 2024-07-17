#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char greetings[4] = { 'H', 'i', '\x21', '\0' };

	puts(greetings);

	return EXIT_SUCCESS;
}

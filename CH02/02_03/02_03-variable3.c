#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char a, b, c, d, e;

	a = 'H';
	b = 'e';
	c = 'l';
	d = 'o';
	e = '\n';

	printf("%c%c%c%c%c%c", a, b, c, c, d, e);

	return EXIT_SUCCESS;
}

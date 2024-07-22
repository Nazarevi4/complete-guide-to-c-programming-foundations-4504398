#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a = 10;

here:
	printf("%d\n", a);
	a--;

	if(a == 4) {
		goto there;
	}

	if(a > 0) {
		goto here;
	}

there:

	return EXIT_SUCCESS;
}

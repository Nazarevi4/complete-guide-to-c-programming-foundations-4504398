#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t total(int32_t a, int32_t b,
          int32_t c, int32_t d, int32_t e) {
	return (a +b + c + d + e);
}

char *title(void) {
	return("Here is the total:");
}


int32_t main() {
	printf("%s %d\n",
			title(),
			total(1,2,3,4,5));

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t mega = 1000000;				/* no commas! */
	float quarter = 0.25;			/* leading zero */
	double large = 1000000000.0;	/* trailing zero */

	printf("Here are the values:\n");
	printf("Mega - %d\n", mega);
	printf("Quarter - %f\n", quarter);
	printf("Large = %f\n", large);

	return EXIT_SUCCESS;
}

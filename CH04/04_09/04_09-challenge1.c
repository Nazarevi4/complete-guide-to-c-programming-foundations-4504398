#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	printf("How long is the line? ");
	scanf("%d", &a);

	/* Write the loop here */
	/* Solution 1 */
	for(uint32_t k = 0; k < a; k++) {
		putchar('-');
	}
	putchar('\n');

	/* Solution 2 */
	while(a != 0) {
		putchar('-');
		a--;
	}
	putchar('\n');

	return EXIT_SUCCESS;
}

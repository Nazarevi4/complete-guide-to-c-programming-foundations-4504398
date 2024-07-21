#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a = 1;

	while(a <= 20) {
		if(a > 6) {
			if(a < 15) {
				putchar('*');
			}
		}

		printf("%d\n", a);
		a++;
	}

	return EXIT_SUCCESS;
}

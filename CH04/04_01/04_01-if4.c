#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int a = 1;

	while(a <= 20) {
		if(a > 6 && a < 15) {
			putchar('*');
		}

		printf("%d\n", a);
		a++;
	}

	return EXIT_SUCCESS;
}

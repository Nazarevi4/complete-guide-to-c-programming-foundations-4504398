#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	a = 0;
	while(1) {
		a++;
		printf("%d\n", a);
		if(a < 10) {
			continue;
		}

		a++;
		if(a > 20) {
			break;
		}
	}

	return EXIT_SUCCESS;
}

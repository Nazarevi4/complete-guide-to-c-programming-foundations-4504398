#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t main() {
	time_t now;

	time(&now);
	printf("%s", ctime(&now));

	return EXIT_SUCCESS;
}

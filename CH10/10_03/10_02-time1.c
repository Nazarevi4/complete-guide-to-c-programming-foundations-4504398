#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t main()
{
	time_t now;

	time(&now);
	printf("It's now %ld\n", now);

	return EXIT_SUCCESS;
}

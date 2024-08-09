#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t main()
{
	time_t now;
	struct tm *timestamp;

	time(&now);
	timestamp = localtime(&now);
	printf("It's now %d:%02d:%02d\n",
			timestamp->tm_hour,
			timestamp->tm_min,
			timestamp->tm_sec);

	return EXIT_SUCCESS;
}

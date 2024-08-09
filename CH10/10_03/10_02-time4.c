#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t main()
{
	time_t now;
	struct tm *timestamp;
	const char *weekday[] = {
		"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday" 
	};
	const char *month[] = {
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	time(&now);
	timestamp = localtime(&now);
	printf("Today is %s, %s %d %d\n",
			weekday[timestamp->tm_wday],
			month[timestamp->tm_mon],
			timestamp->tm_mday,
			timestamp->tm_year + 1900);

	return EXIT_SUCCESS;
}

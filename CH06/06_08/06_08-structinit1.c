#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct date {
		int32_t month;
		int32_t day;
		int32_t year;
	};

	struct date birthday;

	birthday.month = 2;
	birthday.day = 22;
	birthday.year = 1732;

	printf("George Watshington was born on %d/%d/%d\n",
			birthday.month,
			birthday.day,
			birthday.year);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct date {
		int32_t month;
		int32_t day;
		int32_t year;
	} birthday = { 2, 22, 1732 };

	printf("George Watshington was born on %d/%d/%d\n",
			birthday.month,
			birthday.day,
			birthday.year);

	return EXIT_SUCCESS;
}

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

	struct person {
		struct date birthday;
		char name[32];
	} president = {
		{ 2, 22, 1732 },
		"George Washington"};

	printf("%s was born on %d/%d/%d\n",
			president.name,
			president.birthday.month,
			president.birthday.day,
			president.birthday.year);

	return EXIT_SUCCESS;
}

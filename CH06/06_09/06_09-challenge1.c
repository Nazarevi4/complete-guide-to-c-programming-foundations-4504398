#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct date	{
		uint32_t month;
		uint32_t day;
		uint32_t year;
	};

	struct person {
		struct date birthday;
		float height;
		char name[32];
	} John = {
		{06, 21, 1994},
		(1.92 / 1000),
		"John"};
	
	printf("%s was born on %d/%d/%d and is %f kilometers tall\n",
	    John.name,
			John.birthday.month,
	    John.birthday.day,
			John.birthday.year,
			John.height);

	return EXIT_SUCCESS;
}

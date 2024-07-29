#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t age[5] = {45, 23, 7, 83, 45};

	for(uint8_t x = 0; x < 5; x++)
	{
		printf("I know someone who is %d years old\n", age[x]);
	}

	return EXIT_SUCCESS;
}

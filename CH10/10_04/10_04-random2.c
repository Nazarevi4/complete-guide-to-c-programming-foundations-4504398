#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t r;

	for(uint8_t x = 0; x < 10; x++)
	{
		r = rand() % 100 + 1;
		printf("%d\n", r);
	}

	return EXIT_SUCCESS;
}

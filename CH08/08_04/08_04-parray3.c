#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t twos[5] = { 2, 4, 6, 8, 10 };
	int32_t *pt;

	pt = twos;
	for(uint8_t x = 0; x < 5; x++)
	{
		printf("%p = %p\n", pt + x, &twos[x]);
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t main()
{
	int32_t r;

	srand( (unsigned)time(NULL) );

	for(uint8_t x = 0; x < 100; x++)
	{
		r = rand() % 100 + 1;
		printf("%4d",r);
	}
	putchar('\n');

	return EXIT_SUCCESS;
}

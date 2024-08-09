#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t compare(const void *a, const void *b)
{
	return( *(int32_t *)a - *(int32_t *)b);
}


int32_t main()
{
	const int32_t grow = 7;
	const int32_t gcol = 10;
	const int32_t gsize = grow * gcol;
	int32_t *grid = NULL;
	uint8_t x = 0;
	
	// seed the randomizer
	srand((unsigned)time(NULL));
	
	// allocate storage
	grid = (int32_t*)malloc(sizeof(int32_t) * gsize);
	if( grid == NULL)
	{
		puts("Unable to allocate storage");
		return 1;
	}

	// populate the grid with random values, 0 through 99
	for(x = 0; x < gsize; x++ ) {
		*(grid + x) = rand() % 100;
	}

	// quicksort the grid
	qsort(grid, gsize, sizeof(int32_t), compare);

	// output the grid
	for(x = 0; x < grow; x++)
	{
		for(uint8_t y = 0; y < gcol; y++)
		{
			printf(" %2d ", *(grid + grow * y + x));
		}
		putchar('\n');
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t grid[5][2];
	int32_t x;

	for(x = 0; x < 5; x++)
	{
		grid[x][0] = x + 1;
		grid[x][1] = grid[x][0] * 10;
	}

	for(x = 0; x < 5; x++)
	{
		printf("%d,%d\n", grid[x][0], grid[x][1]);
	}

	return EXIT_SUCCESS;
}

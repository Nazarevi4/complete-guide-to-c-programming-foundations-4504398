#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char tictactoe[27];
	int32_t x, y, z;

	/* initialize */
	for(x = 0; x < 27; x++ )
	{
		tictactoe[x] = '.';
	}

	/* display */
	puts("3D Tic Tac Toe");
	for(x = 0; x < 3; x++)
	{
		printf("%*c", x + 1, ' ');
		for(y = 0; y < 3; y++)
		{
			for(z = 0; z < 3; z++)
			{
				printf(" %c ", tictactoe[x * 9 + y * 3 + z]);	/* math required to accurately plot out elements */
			}
			printf("     ");	/* 5 spaces */
		}
		putchar('\n');
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	float highscore[5];
	int32_t x;

	for(x = 0; x < 5; x++)
	{
		printf("High score #%d: ", x + 1);
		scanf("%f", &highscore[x]);
	}

	puts("Here are the high scores:");
	for(x = 0; x < 5; x++)
	{
		printf("#%d %.2f\n", x + 1, highscore[x]);
	}

	return EXIT_SUCCESS;
}

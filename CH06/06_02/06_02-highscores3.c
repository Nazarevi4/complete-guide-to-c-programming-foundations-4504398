#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	float highscore[5] = { 993.86, 682.01, 639.60, 310.45, 123.25 };
	int32_t x;

	puts("Here are the high scores:");
	for(x = 0; x < 5; x++) {
		printf("#%d %.2f\n", x + 1, highscore[x]);
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };

	for(uint8_t x = 0; x < 5; x++)
	{
		printf("%s\n", *(veeps + x));
	}

	return EXIT_SUCCESS;
}

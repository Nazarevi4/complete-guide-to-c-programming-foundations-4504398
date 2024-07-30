#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct pixel {
		int32_t horz;
		int32_t vert;
		char color;
	};
	struct pixel box[4] = {
		{ 100,  50, 'r' },
		{ 200,  50, 'r' },
		{ 100, 100, 'r' },
		{ 200, 100, 'r' }
	};

	for(uint8_t x = 0; x < 4; x++)
	{
		printf("Pixel %d: %d, %d =  %c\n",
				x + 1,
				box[x].horz,
				box[x].vert,
				box[x].color);
	}

	return EXIT_SUCCESS;
}

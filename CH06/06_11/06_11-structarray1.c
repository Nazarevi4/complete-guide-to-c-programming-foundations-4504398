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
	struct pixel box[4];

	box[0].horz = 100;
	box[0].vert = 50;
	box[0].color = 'r';
	box[1].horz = 200;
	box[1].vert = 50;
	box[1].color = 'r';
	box[2].horz = 100;
	box[2].vert = 100;
	box[2].color = 'r';
	box[3].horz = 200;
	box[3].vert = 100;
	box[3].color = 'r';

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

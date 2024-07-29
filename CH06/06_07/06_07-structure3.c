#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct pixel {
		int32_t horz;
		int32_t vert;
		char color;
	} center = { 320, 240, 'r' };

	printf("The pixel at %d,%d is colored ",
			center.horz,
			center.vert);

	switch(center.color)
	{
		case 'r':
			puts("red");
			break;
		case 'g':
			puts("green");
			break;
		case 'b':
			puts("blue");
			break;
		default:
			puts("Invalid");
	}

	return EXIT_SUCCESS;
}

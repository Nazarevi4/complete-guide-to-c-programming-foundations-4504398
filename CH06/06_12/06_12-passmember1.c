#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


char *show_color(char c)
{
	switch(c)
	{
		case 'r':
			return("red");
		case 'g':
			return("green");
		case 'b':
			return("blue");
		default:
			return("Invalid");
	}
}


int32_t main()
{
	struct pixel {
		int32_t horz;
		int32_t vert;
		char color;
	} center = { 320, 240, 'r' };

	printf("The pixel at %d,%d is colored %s\n",
			center.horz,
			center.vert,
			show_color(center.color));

	return EXIT_SUCCESS;
}

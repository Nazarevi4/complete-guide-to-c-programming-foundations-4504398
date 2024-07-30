#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


struct pixel {
	int32_t horz;
	int32_t vert;
	char color;
};

void show_pixel(struct pixel p)
{
	printf("Pixel found at %d,%d, color = ",
			p.horz,
			p.vert);

	switch(p.color)
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
}


int32_t main()
{
	struct pixel center = { 320, 240, 'r' };

	show_pixel(center);

	return EXIT_SUCCESS;
}

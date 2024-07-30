#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


struct pixel {
	int32_t horz;
	int32_t vert;
	char color;
};

struct pixel screenmid(int32_t h, int32_t v)
{
	struct pixel c;

	c.horz = h / 2;
	c.vert = v / 2;
	c.color = 'r';

	return(c);
}


int32_t main()
{
	struct pixel midscreen;

	midscreen = screenmid(640, 480);
	printf("The center pixel is found at %d,%d\n",
			midscreen.horz,
			midscreen.vert);

	return EXIT_SUCCESS;
}

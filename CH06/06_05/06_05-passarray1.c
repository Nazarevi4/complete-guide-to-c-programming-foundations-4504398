#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void incshow(char array[])
{
	for(uint8_t x = 0;x < 6; x++)
	{
		array[x]++;
		putchar(array[x]);
	}
}


int32_t main()
{
	char text[] = "Gdkkn ";

	incshow(text);
	putchar('\n');

	return EXIT_SUCCESS;
}

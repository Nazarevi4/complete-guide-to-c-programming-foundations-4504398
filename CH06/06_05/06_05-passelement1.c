#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void incshow(char a)
{
	a++;
	putchar(a);
}


int32_t main()
{
	char text[] = "Gdkkn ";

	for(uint8_t x = 0; x < 6; x++)
	{
		incshow(text[x]);
	}
	putchar('\n');

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t *buffer;

	/* allocate storage for 20 integers */
	buffer = (int32_t*)malloc(sizeof(int32_t) * 20);
	if( buffer == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	/* fill and display the buffer */
	for(uint8_t x = 0; x < 20; x++)
	{
		*(buffer + x) = 10 * (x + 1);
		printf("%d\n", *(buffer + x));
	}

	/* exit */
	free(buffer);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char *buffer;

	buffer = (char*)malloc( sizeof(char) * 128 );
	if( buffer == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	puts("Buffer allocated");
	free(buffer);
	puts("Buffer freed");

	return EXIT_SUCCESS;
}

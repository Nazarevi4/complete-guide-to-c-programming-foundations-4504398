#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


char *allocate(uint32_t size)
{
	char *p;

	p = (char*)malloc(sizeof(char) * size);
	if( p == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	return (p);
}


int32_t main()
{
	char *a, *b;

	printf("Allocating 256 bytes: ");
	a = allocate(256);
	puts("Done");
	printf("Allocating 512 bytes: ");
	b = allocate(512);
	puts("Done");

	/* clean-up */
	free(a);
	free(b);

	return EXIT_SUCCESS;
}

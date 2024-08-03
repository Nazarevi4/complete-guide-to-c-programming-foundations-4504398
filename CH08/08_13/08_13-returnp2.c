#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t *makearray(uint32_t size)
{
	int32_t *p;

	/* allocate storage for `size` integers */
	p = (int32_t*)malloc( sizeof(int32_t) * size );
	if( p == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	
	/* fill the array */
	for(uint32_t x = 0; x < size; x++)
	{
		*(p+x) = (x + 1) * 10;
	}

	return (p);
}


int32_t main()
{
	int32_t *i;

	i = makearray(5);
	for(uint32_t x = 0; x < 5; x++)
	{
		printf("%d\n",*(i + x));
	}

	/* clean-up */
	free(i);

	return EXIT_SUCCESS;
}

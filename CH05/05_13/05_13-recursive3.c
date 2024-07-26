#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void recurse(int32_t v)
{
	int32_t a;

	for( a = 0; a < v; a++ )
	{
		putchar('-');
	}
	puts("-> Wind-up!");

	if( v == 10 ) { return; }
	recurse(v + 1);

	for( a = 0; a < v; a++ )
	{
		putchar('-');
	}
	puts("-< Unwinding");
}


int32_t main()
{
	recurse(0);

	return EXIT_SUCCESS;
}

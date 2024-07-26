#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void recurse(int32_t a)
{
	a++;
	if( a > 10 ) { return; }

	printf("%d\n", a);
	recurse(a);
}


int32_t main()
{
	recurse(0);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void recurse(int32_t a)
{
	a++;
	printf("%d\n", a);
	recurse(a);
}


int32_t main()
{
	recurse(0);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char letters[5] = { 'a', 'b', 'c', 'd', 'e' };
	char *pt;

	pt = letters;
	printf("%p\n", pt);
	printf("%p\n", (pt + 1));

	return EXIT_SUCCESS;
}

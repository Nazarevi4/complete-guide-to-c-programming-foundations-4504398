#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t twos[5] = { 2, 4, 6, 8, 10 };
	int32_t *pt;

	pt = twos;
	printf("%p\n", pt);
	printf("%p\n", (pt + 1));

	return EXIT_SUCCESS;
}

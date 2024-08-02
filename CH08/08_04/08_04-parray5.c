#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t twos[5] = { 2, 4, 6, 8, 10 };
	int32_t *pt;

	pt = twos;
	printf("%d\n", *(pt + 0));
	printf("%d\n", *(pt + 1));
	printf("%d\n", *(pt + 2));
	printf("%d\n", *(pt + 3));
	printf("%d\n", *(pt + 4));

	return EXIT_SUCCESS;
}

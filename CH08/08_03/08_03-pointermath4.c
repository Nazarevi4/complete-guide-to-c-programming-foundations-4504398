#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	double twos[5] = { 2.2, 4.4, 6.6, 8.8, 10.1 };
	double *pt;

	pt = twos;
	printf("%p\n", pt);
	printf("%p\n", (pt + 1));

	return EXIT_SUCCESS;
}

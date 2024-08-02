#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t alpha;
	int32_t *pa;

	pa = &alpha;
	printf("%p\n", pa);
	printf("%p\n", (pa + 1));

	return EXIT_SUCCESS;
}

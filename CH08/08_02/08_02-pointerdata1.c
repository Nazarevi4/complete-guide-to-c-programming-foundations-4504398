#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t alpha;
	int32_t *ptr;

	alpha = 99;
	ptr = &alpha;
	printf("The address of variable alpha is %p\n", &alpha);
	printf("The value stored in pointer ptr is %p\n", ptr);

	return EXIT_SUCCESS;
}

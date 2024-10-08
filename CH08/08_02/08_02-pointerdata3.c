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
	printf("The content of variable alpha is %d\n", alpha);
	printf("The content of memory address %p is %d\n", ptr, *ptr);
	
	*ptr = 66;
	printf("Variable alpha = %d\n", alpha);

	return EXIT_SUCCESS;
}

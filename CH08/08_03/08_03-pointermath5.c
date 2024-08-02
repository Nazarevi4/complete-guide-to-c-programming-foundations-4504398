#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	printf("Size of variable storage:\n");
	printf("char\t%lu\n", sizeof(char));
	printf("int\t%lu\n", sizeof(int32_t));
	printf("float\t%lu\n", sizeof(float));
	printf("double\t%lu\n", sizeof(double));

	return EXIT_SUCCESS;
}

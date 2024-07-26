#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void funct(void)
{
	int32_t a = 16;

	printf("In funct(), A = %d\n", a);
}


int32_t main()
{
	int32_t a = 10;

	printf("In main(), A = %d\n", a);
	funct();
	printf("In main(), A = %d\n", a);

	return EXIT_SUCCESS;
}

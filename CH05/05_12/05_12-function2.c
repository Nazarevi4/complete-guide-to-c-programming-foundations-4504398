#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t funct(void)
{
	static int32_t a = 0;

	a += 16;
	printf("In funct(), A = %d\n",a);

	return (a);
}


int32_t main()
{
	int32_t a;

	a = funct();
	printf("In main(), A = %d\n", a);
	a = funct();
	printf("In main(), A = %d\n", a);
	a = funct();
	printf("In main(), A = %d\n", a);

	return EXIT_SUCCESS;
}

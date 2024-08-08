#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>


int32_t main()
{
	double a = 4294967296.0;

	while(a >= 2.0)
	{
		printf("%.f\n", a);
		a = sqrt(a);
	}

	return EXIT_SUCCESS;
}

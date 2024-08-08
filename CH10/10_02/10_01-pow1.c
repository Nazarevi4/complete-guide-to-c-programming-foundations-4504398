#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>


int32_t main()
{
	double a;

	for(a = 0.0; a < 20.0; a += 1.0)
	{
		printf("%.0f\n", pow(2.0, a));
	}

	return EXIT_SUCCESS;
}

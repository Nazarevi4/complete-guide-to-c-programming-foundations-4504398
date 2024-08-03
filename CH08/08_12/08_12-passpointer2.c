#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void three(float a, float *b, float *c)
{
	*b = a / 3.0;
	*c = a / 7.0;
}


int32_t main()
{
	float x, y;

	three(20.0, &x, &y);
	printf("20 / 3 = %.1f\n", x);
	printf("20 / 7 = %.1f\n", y);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


float average(float a, float b, float c) {
	float avg;

	avg = ( a + b + c ) / 3;

	return (avg);
}


int32_t main() {
	float a;

	a = average( 29.0, 37.0, 30.2 );
	printf("The average of 29.0, 37.0 and 30.2 is %.2f\n", a);

	return EXIT_SUCCESS;
}

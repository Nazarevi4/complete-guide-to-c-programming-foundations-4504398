#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char a;
	int b;
	float c;
	double d;

	a = 'A';
	b = 2;
	c = 0.25;
	d = 2.5e6;

	printf("a is %c\n", a);
	printf("b is %d\n", b);
	printf("c is %f\n", c);
	printf("d is %f\n", d);

	return EXIT_SUCCESS;
}

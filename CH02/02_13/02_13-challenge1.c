#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	const float ratio = (float)3 / 4;
	char a;
	int32_t b;
	float c;

	a = 'F';
	b = 42;
	c = 574.23;

	printf("The value of variable a is '%c'\n", a);
	printf("The value of variable b is %d\n", b);
	printf("The value of variable c is %.2f\n", c);
	printf("The value of variable ratio is %.2f\n", ratio);

	return EXIT_SUCCESS;
}

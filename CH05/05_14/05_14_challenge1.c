#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void add(int32_t a, int32_t b);
void subtract(int32_t a, int32_t b);
void multiply(int32_t a, int32_t b);
float divide(int32_t a, int32_t b);


int32_t main()
{
	int32_t a, b;

	printf("Enter two values, separated by a space: ");
	scanf("%d", &a);
	scanf("%d", &b);

	add(a, b);
	subtract(a, b);
	multiply(a, b);
	printf("%d / %d = %f\n", a, b, divide(a, b));
	
	return EXIT_SUCCESS;
}


void add(int32_t a, int32_t b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

void subtract(int32_t a, int32_t b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int32_t a, int32_t b)
{
	printf("%d * %d = %d\n", a, b, a * b);
}

float divide(int32_t a, int32_t b)
{
	return ( (float)a / b );
}

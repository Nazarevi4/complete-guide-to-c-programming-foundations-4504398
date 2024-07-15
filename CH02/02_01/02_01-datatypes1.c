#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char c = '\0';
	int32_t i = 0;
	float f = 0.0;
	double d = 0.0;

	/* input */
	printf("Type a character: ");
	scanf("%c", &c);
	printf("Type an integer: ");
	scanf("%d", &i);
	printf("Type a small value: ");
	scanf("%f", &f);
	printf("Type a huge value: ");
	scanf("%lg", &d);

	/* output */
	printf("\nCharacter: %c\n", c);
	printf("Integer: %d\n", i);
	printf("Single-precision: %f\n", f);
	printf("Double-precision: %lg\n", d);

	return EXIT_SUCCESS;
}

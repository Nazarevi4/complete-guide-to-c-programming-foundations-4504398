#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


char valchar(void) {
	return 'A';
}

int32_t valint(void) {
	return 7;
}

float valfloat(void) {
	return 3.141;
}

double valdouble(void) {
	return 6.023e23;
}

void valvoid(void) {
	puts("void function returns nothing!");
}


int32_t main() {
	printf("char function returns %c\n", valchar());
	printf("int function returns %d\n", valint());
	printf("float function returns %f\n", valfloat());
	printf("double function returns %f\n", valdouble());
	valvoid();

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void line(void);


int32_t main() {
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return EXIT_SUCCESS;
}


void line(void) {
	for (uint8_t k = 0; k < 40; k++) {
		putchar('-');
	}
	putchar('\n');
}

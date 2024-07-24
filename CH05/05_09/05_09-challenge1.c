#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void line(uint32_t length, char ch);


int32_t main() {
	puts("Report on Extraterrestrial Activity");
	line(35, '-');

	return EXIT_SUCCESS;
}


void line(uint32_t length, char ch) {
	for(; length > 0; length--) {
		putchar(ch);
	}
	putchar('\n');
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t ch;

	printf("Type '!' to exit: ");
	while(1) {
		ch = getchar();
	
		if(ch == '!') { break; }
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char a;

	printf("Type a single character: ");
	scanf("%c", &a);

	printf("You typed \"%c\", which is code %d\n",
			a,
			a);

	return EXIT_SUCCESS;
}

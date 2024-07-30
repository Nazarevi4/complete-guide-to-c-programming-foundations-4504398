#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t ch;

	printf("Type a character: ");
	ch = getchar();
	printf("Character '%c' received.\n", ch);

	return EXIT_SUCCESS;
}

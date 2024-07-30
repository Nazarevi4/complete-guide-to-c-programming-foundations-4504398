#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t ch1, ch2;

	printf("Type a character: ");
	ch1 = getchar();
	printf("Type a character: ");
	ch2 = getchar();
	printf("Characters '%c' and '%c' received.\n", ch1, ch2);

	return EXIT_SUCCESS;
}

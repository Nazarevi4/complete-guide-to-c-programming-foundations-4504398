#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char text[10];

	printf("Type something: ");
	scanf("%s", text);
	printf("You typed: %s\n", text);

	return EXIT_SUCCESS;
}

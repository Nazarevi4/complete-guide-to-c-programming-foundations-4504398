#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char input[10];

	printf("Your name? ");
	fgets(input, 10, stdin);
	printf("Pleased to meet you, %s!\n", input);

	return EXIT_SUCCESS;
}

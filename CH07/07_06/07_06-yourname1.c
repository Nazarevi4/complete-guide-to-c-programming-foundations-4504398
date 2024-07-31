#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char input[10];

	printf("Your name? ");
	scanf("%s", input);
	printf("Pleased to meet you, %s!\n", input);

	return EXIT_SUCCESS;
}

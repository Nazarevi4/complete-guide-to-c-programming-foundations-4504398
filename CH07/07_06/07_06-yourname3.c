#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char input[10];

	printf("Your name? ");
	fgets(input, 10, stdin);

	for(int8_t i = 0; i < 10; i++)
	{
		if(input[i] == '\n')
		{
			input[i] = '\0';
		}
	}
	printf("Pleased to meet you, %s!\n", input);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


// write the get_input() function here
char *get_input(uint32_t size)
{
	/* Allocate storage */
	char *input = (char*)malloc(sizeof(char) * size);
	if( input == NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	/* Read input */
	fgets(input, size, stdin);
	uint32_t k = 0;

	while( *(input + k) != '\0' )
	{
		if( *(input + k) == '\n' )
		{
			*(input + k) = '\0';
			break;
		}
		k++;
	}

	return (input);
}


int32_t main()
{
	char *your_name = NULL;
	char *your_city = NULL;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n", your_name, your_city);

	free(your_name);
	free(your_city);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int32_t main()
{
	char password[] = "secret\n";
	char input[10];

	printf("Password: ");
	fgets(input, 10, stdin);

	if( strcmp(password,input) == 0 )
	{
		puts("Entry granted!");
	}
	else
	{
		puts("Incorrect password!");
	}

	return EXIT_SUCCESS;
}

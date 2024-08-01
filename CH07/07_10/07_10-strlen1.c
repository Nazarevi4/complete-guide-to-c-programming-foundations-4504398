#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int32_t main()
{
	char string[] = "Hello, you happy planet.";
	int32_t len;

	len = strlen(string);
	printf("The string \"%s\" is %d characters long.\n", string, len);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>


int32_t main()
{
	char string[] = "My aunt types her email in ALL CAPS.\n";
	int32_t ch;
	int32_t x = 0;

	while( (ch = string[x]) != '\0' )
	{
		putchar( tolower(ch) );
		x++;
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>


int32_t main()
{
	char string[] = "Nifty TEXT! 123\n";
	char ch;
	int32_t x = 0;

	while( (ch = string[x]) != '\0' )
	{
		if( isdigit(ch) )
		{
			putchar('_');
		}
		else
		{
			putchar(ch);
		}
		x++;
	}

	return EXIT_SUCCESS;
}

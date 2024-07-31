#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>


int32_t main()
{
	char string[] = "Nifty TEXT! 123\n";
	int32_t ch;
	int32_t k = 0;

	while( (ch = string[k]) != '\0' )
	{
		if( isupper(ch) )
		{
			putchar( tolower(ch) );
		}
		else if( islower(ch) )
		{
			putchar( toupper(ch) );
		}
		else
		{
			putchar(ch);
		}

		k++;
	}

	return EXIT_SUCCESS;
}

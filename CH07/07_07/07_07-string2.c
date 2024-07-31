#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char string[] = "I'm such a handsome program!\n";
	int32_t a;

	a = 0;
	while( putchar(string[a]) != '\0' )
	{
		a++;
	}

	return EXIT_SUCCESS;
}

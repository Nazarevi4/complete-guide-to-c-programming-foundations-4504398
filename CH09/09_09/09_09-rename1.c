#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t r;

	r = rename("alpha.txt", "a.txt");
	if( r == 0 )
	{
		puts("Rename operation successful");
	}
	else
	{
		puts("Rename failed");
	}

	return EXIT_SUCCESS;
}

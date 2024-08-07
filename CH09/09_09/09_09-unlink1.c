#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>


int32_t main()
{
	int32_t r;

	r = unlink("delete_me.txt");
	if( r == 0 )
	{
		puts("File deleted");
	}
	else
	{
		puts("Something went wrong!");
	}

	return EXIT_SUCCESS;
}

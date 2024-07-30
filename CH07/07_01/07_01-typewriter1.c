#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t a;

	while(1)
	{
		a = getchar();
		if(a == EOF) { break; }
		putchar(a);
	};

	return EXIT_SUCCESS;
}

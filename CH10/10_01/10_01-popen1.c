#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	FILE *p;
	int32_t c;

	/* open the process */
	p = popen("uname", "r");	/* linux */
	if( p == NULL )
	{
		puts("Unable to create process");
		return (1);
	}

	/* read from the process */
	while( (c = fgetc(p)) != EOF )
	{
		putchar(c);
	}

	/* close the process */
	pclose(p);

	return EXIT_SUCCESS;
}

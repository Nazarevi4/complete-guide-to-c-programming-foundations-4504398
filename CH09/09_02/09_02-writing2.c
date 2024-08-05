#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	FILE *fh;
	int32_t a;

	/* open/create the file */
	fh = fopen("alphabet.txt", "w");
	if( fh == NULL )
	{
		puts("Failed to create file");
		return(1);
	}

	/* output */
	for(a = 'A'; a <= 'Z'; a++)
	{
		fputc(a, fh);
	}

	/* close the file */
	fclose(fh);

	return EXIT_SUCCESS;
}

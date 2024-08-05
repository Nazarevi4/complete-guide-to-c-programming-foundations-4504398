#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	FILE *fh;

	/* open/create the file */
	fh = fopen("output.txt", "w");
	if( fh == NULL )
	{
		puts("Failed to create file");
		return(1);
	}

	/* output */
	fprintf(fh, "Hello there, file!\n");

	/* close the file */
	fclose(fh);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	FILE *fh;

	/* open the file for appending */
	fh = fopen("alphabet.txt", "a");
	if( fh == NULL )
	{
		puts("Failed to open file");
		return(1);
	}

	/* output */
	fputc('\n', fh);

	/* close the file */
	fclose(fh);

	return EXIT_SUCCESS;
}

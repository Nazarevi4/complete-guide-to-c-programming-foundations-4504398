#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	const char filename[] = "sonnet18.txt";
	FILE *fh = NULL;

	/* open the file */
	fh = fopen(filename, "r");
	if( fh == NULL )
	{
		printf("Unable to read from file %s\n", filename);
		return(1);
	}
	
	printf("File '%s' opened\n", filename);

	/* clean-up */
	fclose(fh);

	return EXIT_SUCCESS;
}

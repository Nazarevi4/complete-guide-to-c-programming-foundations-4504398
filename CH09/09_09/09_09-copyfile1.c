#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t filecopy(char *org,char *dup)
{
	FILE *original, *duplicate;
	int32_t c;

	/* open/create the files */
	original = fopen(org, "r");
	duplicate = fopen(dup, "w");
	if( org == NULL || dup == NULL)
	{
		return (-1);
	}

	/* read/write to copy the file */
	while(1)
	{
		c = fgetc(original);
		if( c == EOF ) { break; }
		fputc(c, duplicate);
	}

	/* clean-up */
	fclose(original);
	fclose(duplicate);

	return (0);
}


int32_t main()
{
	char original[] = "beta.txt";
	char duplicate[] = "betacopy.txt";
	int32_t r;

	r = filecopy(original, duplicate);
	if( r == -1 )
	{
		puts("Unable to copy files");
	}
	else
	{
		printf("%s copied to %s\n", original, duplicate);
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int32_t a = 0;

	/* open the file for reading */
	fp = fopen(filename, "r");
	if( fp == NULL )
	{
		printf("Unable to create %s\n", filename);
		return (1);
	}

	/* read integers */
	for(uint8_t x = 0; x < 10; x++)
	{
		fread(&a, sizeof(int32_t), 1, fp );
		printf("%d\n", a);
	}

	/* close */
	fclose(fp);

	return EXIT_SUCCESS;
}

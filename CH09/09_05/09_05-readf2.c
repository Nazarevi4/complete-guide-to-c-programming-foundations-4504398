#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int32_t a[10];

	/* open the file for reading */
	fp = fopen(filename, "r");
	if( fp == NULL )
	{
		printf("Unable to create %s\n", filename);
		return (1);
	}

	/* read integers */
	fread(a, sizeof(int32_t), 10, fp );
	for(uint8_t x = 0; x < 10; x++)
	{
		printf("%d\n", a[x]);
	}

	/* close */
	fclose(fp);

	return EXIT_SUCCESS;
}

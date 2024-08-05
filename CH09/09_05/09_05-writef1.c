#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int32_t a;

	/* open and create the file */
	fp = fopen(filename, "w");
	if( fp == NULL )
	{
		printf("Unable to create %s\n", filename);
		return (1);
	}

	/* write the integers */
	a = 10;
	for(uint8_t x = 0; x < 10; x++)
	{
		fwrite(&a, sizeof(int32_t), 1, fp);
		a += 5;
	}

	/* close-up */
	fclose(fp);

	return EXIT_SUCCESS;
}

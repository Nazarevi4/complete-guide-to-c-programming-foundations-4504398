#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	const char filename[] = "presidents.dat";
	struct person {
		char name[32];
		int32_t inauguration;
		int32_t age;
	} president;
	int32_t record = 9;
	FILE *fp;

	/* open the file */
	fp = fopen(filename, "r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n", filename);
		return(1);
	}

	/* read records from back to front */
	while(record >= 0) {
		fseek(fp, sizeof(struct person) * record, SEEK_SET);
		record--;
		/* fetch the record */
		fread(&president, sizeof(struct person), 1, fp);
		/* print the result */
		printf("President %s was %d years old when inaugurated in %d\n",
		    president.name,
				president.age,
				president.inauguration);
	}

	/* clean-up */
	fclose(fp);

	return EXIT_SUCCESS;
}

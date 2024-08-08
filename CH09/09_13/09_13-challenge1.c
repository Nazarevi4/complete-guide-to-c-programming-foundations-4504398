#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>


void create_file(const char *f)
{
	/* Open/Create the file */
	FILE *fh = fopen(f, "w");
	if( fh == NULL)
	{
		printf("Failed to create '%s'\n", f);
		exit(1);
	}
	printf("File '%s' created\n", f);

	/* Write your name to the file */
	fprintf(fh, "My name is John Wick");
	puts("Data written");

	/* Close the file */
	fclose(fh);
	printf("File '%s' closed\n", f);
}

void read_file(const char *f)
{
	char buffer[32];

	/* Open/Read the file */
	FILE *fh = fopen(f, "r");
	if (fh == NULL)
	{
		printf("Failed to open '%s'\n", f);
		exit(1);
	}
	printf("File '%s' opened\n", f);

	/* Read your name from the file */
	fgets(buffer, 32, fh);
	printf("The file '%s' contains the text: %s\n",
	    f,
			buffer);

	/* Close the file */
	fclose(fh);
	printf("File '%s' closed\n", f);
}

void delete_file(const char *f)
{
	if(unlink(f) == 0)
	{
		printf("File '%s' deleted\n", f);
	}
	else
	{
		printf("File '%s' NOT deleted\n", f);
	}
}


int32_t main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return EXIT_SUCCESS;
}

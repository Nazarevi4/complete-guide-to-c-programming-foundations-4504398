#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	const char filename[] = "hello.txt";
	char user_name[32];

	/* Open/create the file hello.txt */
	FILE *fh = fopen(filename, "w");
	if(fh == NULL)
	{
		puts("Failed to create file");
		return (1);
	}

	/* Prompt for input */
	printf("Type your name: ");
	scanf("%s", user_name);

	/* Write to the file */
	fprintf(fh, "%s has written to this file.\n", user_name);

	/* Close the file */
	fclose(fh);

	/* Open and read the file */
	fh = fopen(filename, "r");
	if( fh == NULL )
	{
		puts("Failed to open file");
		return (1);
	}

	/* Read the text */
	printf("The file '%s' contains the text:\n", filename);
	int32_t ch;
	while( ( ch = fgetc(fh) ) != EOF )
	{
		putchar(ch);
	}

	/* Clen-up */
	fclose(fh);

	return EXIT_SUCCESS;
}

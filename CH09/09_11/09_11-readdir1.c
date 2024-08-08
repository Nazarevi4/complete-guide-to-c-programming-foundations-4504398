#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dirent.h>


int32_t main()
{
	DIR *directory;

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return (1);
	}

	/* do something */
	puts("Opened current directory");

	/* close the directory */
	closedir(directory);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dirent.h>


int32_t main()
{
	DIR *directory;
	struct dirent *file;

	/* open the directory */
	directory = opendir(".");
	if( directory == NULL )
	{
		puts("Unable to open current directory");
		return (1);
	}

	/* do something */
	file = readdir(directory);
	printf("Found the file %s\n", file->d_name);

	/* close the directory */
	closedir(directory);

	return EXIT_SUCCESS;
}

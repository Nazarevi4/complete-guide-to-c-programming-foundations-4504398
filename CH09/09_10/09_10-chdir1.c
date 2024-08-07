#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>


int32_t main()
{
	char path[512];

	chdir("..");
	getcwd(path, 512);
	printf("This program is running in the %s directory\n", path);

	return EXIT_SUCCESS;
}

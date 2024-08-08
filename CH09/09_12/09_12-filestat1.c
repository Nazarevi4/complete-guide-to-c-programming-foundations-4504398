#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/stat.h>
#include <time.h>


int32_t main()
{
	const char filename[] = "alpha.txt";
	struct stat fstat;

	stat(filename, &fstat);
	printf("%s is %ld bytes long\n",
			filename,
			fstat.st_size);
	printf("It was modified on %s", ctime(&fstat.st_mtime));

	return EXIT_SUCCESS;
}

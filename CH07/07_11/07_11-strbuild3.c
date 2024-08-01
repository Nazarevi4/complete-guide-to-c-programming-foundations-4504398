#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int32_t main()
{
	char first[16] = "George";
	char last[16] = "Washington";
	char full[32];

	/* build the string */
	strcpy(full, first);
	strcat(full," ");
	strcat(full, last);

	printf("Pleased to meet you, %s\n", full);

	return EXIT_SUCCESS;
}

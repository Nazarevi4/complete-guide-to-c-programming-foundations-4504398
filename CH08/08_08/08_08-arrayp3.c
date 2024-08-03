#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	char *temp;

	/* swap 2 and 3 */
	temp = veeps[1];
	veeps[1] = veeps[2];
	veeps[2] = temp;

	for(uint8_t x = 0; x < 5; x++)
	{
		printf("%s\n", *(veeps + x));
	}

	return EXIT_SUCCESS;
}

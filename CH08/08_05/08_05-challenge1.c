#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *text_ptr = title;
	uint32_t k = 0;

	/* Solution 1 */
	while ( *(text_ptr + k) != '\0')
	{
		putchar(*(text_ptr + k++));
	}

	/* Solution 2 */
	while( *text_ptr != '\0')
	{
		putchar(*(text_ptr)++);
	}

	return EXIT_SUCCESS;
}

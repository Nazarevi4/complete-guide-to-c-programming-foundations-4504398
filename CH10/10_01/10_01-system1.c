#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	printf("Press Enter to clear the screen: ");
	getchar();
	system("clear");	/* linux */
	puts("Thank you");

	return EXIT_SUCCESS;
}

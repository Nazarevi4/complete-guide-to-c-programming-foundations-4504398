#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	char string[] = "Jeans";
	uint32_t quantity = 15;
	float price = 19.99;

	printf("You have purchased %d %s at $%.2f each.\n",
	    quantity,
			string,
			price);

	printf("The total cost is $%.2f\n", (price * quantity));

			return EXIT_SUCCESS;
}

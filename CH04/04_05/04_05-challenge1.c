#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	int32_t a;

	printf("Select item 1, 2, or 3: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		  puts("This is the first item");
		  break;
		case 2:
			puts("This is the second item");
			break;
		case 3:
			puts("This is the third item");
			break;
		default:
			puts("Invalid choice!");
	}

	/*if( a == 1 )
		puts("This is the first item");
	else if( a == 2 )
		puts("This is the second item");
	else if( a == 3)
		puts("This is the third item");
	else
		puts("Invalid choice!");
	*/

	return EXIT_SUCCESS;
}

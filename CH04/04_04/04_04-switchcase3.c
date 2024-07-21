#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	char a;

	puts("Menu");
	puts("A - Bugs");
	puts("B - Snake Surprise");
	puts("C - Eyeball Soup");
	printf("Your choice: ");
	scanf("%c", &a);

	switch(a) {
		case 'A':
		case 'a':
			puts("Delicious! A hearty snack.");
			break;
		case 'B':
		case 'b':
			puts("A family favorite!");
			break;
			case 'C':
		case 'c':
			puts("From a secret recipe.");
			break;
		default:
			puts("Invalid choice");
	}

	return EXIT_SUCCESS;
}

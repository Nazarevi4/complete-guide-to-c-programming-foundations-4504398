#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
	int32_t r;
	unsigned s;

	printf("Enter the seed: ");
	scanf("%u", &s);
	srand(s);

	for(uint8_t x = 0; x < 10; x++)
	{
		r = rand() % 100 + 1;
		printf("%d\n", r);
	}

	return EXIT_SUCCESS;
}

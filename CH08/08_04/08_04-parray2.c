#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	int32_t text[10];
	int32_t *pt;

	printf("Type something: ");
	scanf("%s", text);
	printf("You typed: %s\n", text);
	pt = text;
	printf("Address of text = %p\n", text);
	printf("Address of pt = %p\n", pt);

	return EXIT_SUCCESS;
}

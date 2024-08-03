#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct Description {
		int32_t page;
		char letter;
	} *book[26];
	uint8_t k;

	for(k = 0; k < 26; k++)
	{
		/* allocate storage */
		book[k] = (struct Description*)malloc(sizeof(struct Description));
		if( book[k] == NULL )
		{
			puts("Memory allocation error");
			exit(1);
		}

		book[k]->page = k;
		book[k]->letter = 'A' + k;
	}

	for(k = 0; k < 26; k++)
	{
		printf("%d, %c\n", book[k]->page, book[k]->letter);
	}

	for(k = 0; k < 26; k++)
	{
		free(book[k]);
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


#define SIZE 100


int32_t compare(const void *a, const void *b)
{
	return ( *(int32_t *)a - *(int32_t *)b );
}


int32_t main()
{
	int32_t list[SIZE];
	int32_t a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* build and display the random values */
	printf("%d random values, unsorted:\n", SIZE);
	for(a = 0; a < SIZE; a++)
	{
		list[a] = rand() % 100 + 1;	/* values from 1 to 100 */
		printf("%4d", list[a]);
	}
	putchar('\n');

	/* perform the quick sort */
	qsort(list, SIZE, sizeof(int), compare);

	/* display the sorted list */
	printf("%d random values, sorted:\n", SIZE);
	for(a = 0; a < SIZE; a++)
	{
		printf("%4d", list[a]);
	}
	putchar('\n');

	return EXIT_SUCCESS;
}

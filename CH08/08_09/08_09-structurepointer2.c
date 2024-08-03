#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main()
{
	struct person {
		char name[32];
		int32_t age;
	} *you;

	/* allocate storage for the structure */
	you = (struct person*)malloc(sizeof(struct person));
	if( you == NULL )
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	printf("Enter your name: ");
	fgets(you->name, 32, stdin);
	/* get your age */
	printf("Enter your age: ");
	scanf("%d", &you->age);

	printf("You are %s", you->name);
	printf("You are %d years old\n", you->age);

	/* clean-up */
	free(you);

	return EXIT_SUCCESS;
}

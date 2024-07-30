#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define SIZE 32

struct person fill(void);
void output(struct person y);

struct person {
	char name[SIZE];
	int32_t id;
};


/* main program */
int32_t main()
{
	struct person you;

	/* fill the structure */
	you = fill();

	/* output the structure */
	output(you);

	return EXIT_SUCCESS;
}


struct person fill(void)
{
	struct person customer;

	printf("Enter your name: ");
	fgets(customer.name, SIZE, stdin);

	printf("Enter your ID: ");
	scanf("%d", &customer.id);

	return customer;
}


void output(struct person y)
{
	printf("ID %d belongs to %s",
	    y.id,
			y.name);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void doubler(int *alpha)
{
	*alpha += *alpha;
}


int32_t main()
{
	int32_t a = 25;

	printf("Value before: %d\n", a);
	doubler(&a);
	printf("Value after: %d\n", a);

	return EXIT_SUCCESS;
}

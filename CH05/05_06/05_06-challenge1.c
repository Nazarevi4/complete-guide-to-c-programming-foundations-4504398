#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


int32_t roll(void);


int32_t main() {
	int32_t dice1, dice2, dice3;

	/* seed the randomizer */
	srand((unsigned)time(NULL));
	
	puts("Roll them bones!");
	dice1 = roll();
	dice2 = roll();
	dice3 = roll();
	printf("You rolled %d - %d - %d\n", dice1, dice2, dice3);

	return EXIT_SUCCESS;
}


int32_t roll(void) {
	return (rand() % 6 + 1);
}

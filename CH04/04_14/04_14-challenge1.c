#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define FALSE 0
#define TRUE 1


int32_t main() {
	// variable declarations
	uint8_t done;
	char command;

	/* main program loop */
	done = FALSE;

	while(!done) {
		// prompt for input
		printf("Command: ");
		command = getchar();

		// process input
		switch(command) {
			// if R is input, output "move right"
			case 'R':
			case 'r':
				puts("Move rigth");
				break;
			// if L is input, output "move left"
			case 'L':
			case 'l':
				puts("Move left");
				break;
			// if B is input, output "move back"
			case 'B':
			case 'b':
				puts("Move back");
				break;
			// if Q is input, break the loop
			case 'Q':
			case 'q':
			  done = TRUE;
				puts("Goodbye!");
				break;
			// if H or ? is input, output valid commands
			case 'H':
			case 'h':
			case '?':
				puts(" You may go (R)igth, (L)eft, or (B)ack");
				puts(" Or you can (Q)uit");
				break;
			// identify invalid input
			default:
			  puts("I don't know that command");
		}
		while(( command = getchar() ) != '\n');
}

	return EXIT_SUCCESS;
}

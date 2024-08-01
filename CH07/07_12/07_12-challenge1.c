#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>


#define SIZE  32


/* main program */
int32_t main()
{
	// variable declaration
	char input_command[SIZE];

	while(1)
	{
		printf("Command: ");
		// fetch input
		fgets(input_command, SIZE, stdin);

		// remove newline
		for(uint32_t k = 0; input_command[k] != '\0'; k++)
		{
			if(input_command[k] == '\n') { input_command[k] = '\0'; }

			if( isalpha(input_command) )
			{ // convert to uppercase
			    input_command[k] = toupper(input_command[k]);
			}
		}

		// output "Processing command 'cmd'"
		printf("Processing command %s\n", input_command);

		// break the loop on `QUIT`
		if(strcmp(input_command, "QUIT") == 0) { break; }
	}

	return EXIT_SUCCESS;
}

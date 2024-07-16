#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


char *myname(void) {
	char me[] = "Dan Gookin";

	return me;
}


int32_t main() {
	printf("This course's author is %s\n", myname());

	return EXIT_SUCCESS;
}

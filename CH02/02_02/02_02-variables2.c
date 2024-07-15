#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int32_t main() {
	/* valid variable names */
	int32_t i123456789;			/* must start with a letter */
	int32_t looping_value;		/* can include underscores, not spaces */
	int32_t modemOnlineDetect;	/* camel case */
	
	/* naughty variable names */
	char return;			/* 'return' is a keyword */
	int32_t puts = 0;				/* 'puts' is a function name */
	float new = 0.0;				/* 'new' is a C++ reserved word */

	return EXIT_SUCCESS;
}

#include <stdio.h>

/**
 * somefunction - Prints a line
 */
void somefunction(void) __attribute__ ((constructor));
void somefunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

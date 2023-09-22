#include <stdio.h>
#include <stdlib.h>

/**
 * turbo - run before main
 *
 */
void __attribute__ ((constructor)) turbo()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

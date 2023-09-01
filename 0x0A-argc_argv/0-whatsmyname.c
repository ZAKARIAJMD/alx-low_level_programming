#include <stdio.h>

/*
 * main - main function
 * RETURN: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	int x = argc;

	x++;
	printf("%s\n", argv[0]);
	return (0);
}

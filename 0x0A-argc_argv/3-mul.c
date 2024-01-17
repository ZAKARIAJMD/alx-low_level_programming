#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: input
 *@argv: pointer
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	int x = argc;

	if (x - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

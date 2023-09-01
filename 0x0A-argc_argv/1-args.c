#include <stdio.h>

/**
 * main - Entry point
 *@argc: input
 *@argv: pointer
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	char x[100];

	strcpy(x, *argv);
	printf("%d\n", argc - 1);
	return (0);
}

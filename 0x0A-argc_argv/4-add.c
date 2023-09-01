#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	int i;

	int sum = 0;

	int j;

	if (x - 1 == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < x; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	return (0);
}

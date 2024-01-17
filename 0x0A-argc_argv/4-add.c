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
	int i, j, sum = 0, x = argc;

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
	printf("%d\n", sum);
	return (0);
}

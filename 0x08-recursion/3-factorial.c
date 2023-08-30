#include "main.h"

/**
 * factorial - prints a string in reverse
 * @n: int to calculate its factoriel
 * Return: lenght
 *
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
	{
		return (1);
	}
	return (-1);
}

#include "main.h"

/**
 * is_prime_number - prints a string in reverse
 * @n: int to calculate its factoriel
 * 
 * Return: puissance
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_pr(n,2));
}

/**
 * _pr - try
 *
 * @n: number
 * @c: number
 * Return: prime
 *
 */

int _pr(int n, int c)
{
	if (c >= n)
	{
		return (1);
	}
	if ((n % c) == 0 )
	{
		return (0);
	}
	return (_pr(n, c + 1));
}

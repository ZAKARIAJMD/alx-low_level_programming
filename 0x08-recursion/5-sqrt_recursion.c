#include "main.h"

/**
 * _sqrt_recursion - returns square root of n
 *
 * @n:Number
 * Return: ssuare
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_two(n, 1));
}

/**
 * _sqrt_two - returns square root of n
 *
 * @n: nusmber
 * @c: number
 * Return: square root
 *
 */

int _sqrt_two(int n, int c)
{
	if (c * c ==n)
	{
		return (c);
	}
	if (c * c > n)	
	{
		return (-1);
	}
	return (_sqrt_two(n, c + 1));
}

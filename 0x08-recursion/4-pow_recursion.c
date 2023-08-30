#include "main.h"

/**
 * _pow_recursion - prints a string in reverse
 * @x: int to calculate its factoriel
 * @y: int
 * Return: puissance
 *
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y == 0)
	{
		return (1);
	}
	return (-1);
}

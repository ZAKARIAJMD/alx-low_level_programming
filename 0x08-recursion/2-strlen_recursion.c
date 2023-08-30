#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: string to print
 * Return: nothing
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0 ;

	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
}

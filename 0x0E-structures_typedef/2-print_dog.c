#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print
 *@d: dog
 *
 * Return : nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		break;
	}
	printf("Name: %s\n", ((d)->name == NULL ? "(nil)" : (d)->name));
	printf("Age: %f\n", ((*d).age == NULL ? "(nil)" : (*d).age));
	printf("Owner: %s\n", ((d)->owner == NULL ? "(nil)" : (d)->owner));
}

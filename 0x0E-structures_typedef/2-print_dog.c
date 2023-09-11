#include "dog.h"
#include <string.h>

/**
 * print_dog - print
 *@d: dog
 *
 * Return : nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d)->name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (d)->owner);
}

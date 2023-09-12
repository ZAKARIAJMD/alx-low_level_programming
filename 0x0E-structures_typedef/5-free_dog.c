#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free
 *@d: dog
 *
 * Return : nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
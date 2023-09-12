#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
}

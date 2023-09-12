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
	if (d == 0)
		return;
	if (d->name != 0)
		free(d->name);
	if (d->name != 0)
		free(d->owner);
	free(d);
}

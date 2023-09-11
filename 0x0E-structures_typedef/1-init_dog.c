#include "dog.h"
#include <string.h>

/**
 * init_dog - init
 *@d: dog
 *@name: name
 *@age: age
 *@owner: owner
 *
 * Return : nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(d)->name = name;
	(*d).age = age;
	(d)->owner = owner;
}

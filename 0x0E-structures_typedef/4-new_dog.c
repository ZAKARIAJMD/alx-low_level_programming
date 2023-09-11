#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new dog
 *@name: name
 *@age: age
 *@owner: owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL)
		return (NULL);
	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));
	if (d->name == 0)
	{
		free(d->name);
		return (NULL);
	}
	if (d->owner == 0)
	{
		free(d->owner);
		return (NULL);
	}
	d->name = name;
	(*d).age = age;
	d->owner = owner;
	return (d);
}

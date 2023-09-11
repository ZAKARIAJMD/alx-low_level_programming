#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	if (name != NULL && owner != NULL)
	{
	d->name = name;
	*d.age = age;
	d->owner = owner;
	return (d);
	}
	return (NULL);
}

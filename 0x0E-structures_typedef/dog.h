#ifndef RRHE_H__
#define RRHE_H__
/**
 * struct dog - structure
 *@name: name
 *@age: age
 *@owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif

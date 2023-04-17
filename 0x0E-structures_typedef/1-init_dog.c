#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing the variable of type struct dog
 * @d: The pointer to struct dog
 * @name: The name
 * @age: The age
 * @owner: The owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
}

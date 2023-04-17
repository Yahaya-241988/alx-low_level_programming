#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog memory
 * @d: memory to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
{
		free(d->name);
		free(d->owner);
		free(d);
}
}

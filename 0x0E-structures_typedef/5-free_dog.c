#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory spaces for dogs
 * @d: dog struct
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

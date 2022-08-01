#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the dog structure
 * @d: the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}

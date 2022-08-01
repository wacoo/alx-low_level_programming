#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to newd
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd = malloc(sizeof(dog_t));
	if (newd == NULL)
	{
		return (NULL);
	}
	newd->name = name;
	newd->age = age;
	newd->owner = owner;
	return (newd);
}

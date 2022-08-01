#include "dog.h"
#include <stdlib.h>
/**
 * _cp - copy string
 * @str: string given
 *
 * Return: pointer to new string
 */

char *_cp(char *str)
{
	int i, len = 0;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

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
	char *nname, *nowner;

	if (newd == NULL)
	{
		return (NULL);
	}
	else if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	nname = _cp(name);
	nowner = _cp(owner);
	newd->name = nname;
	newd->age = age;
	newd->owner = nowner;
	return (newd);
}

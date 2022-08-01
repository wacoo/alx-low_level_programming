#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the sturct dog
 * @d: dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n",  d->age);
		printf("Owner: %s\n", d->owner);
	}
}

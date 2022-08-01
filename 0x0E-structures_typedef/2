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
		return;
	}
	else if (d->name == 0)
	{
		printf("Name: (nil)\n");
		printf("Age: %.6f\n",  d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (d->age == 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
	else if (d->owner == 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n",  d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n",  d->age);
		printf("Owner: %s\n", d->owner);
	}
}

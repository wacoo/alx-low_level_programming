#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the sturct dog
 * @d: dog
 *
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.6f\nOwner:%s\n", d->name, d->age, d->owner);
}

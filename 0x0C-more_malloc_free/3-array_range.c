#include "main.h"
#include <stdlib.h>

/**
 * array_range - given range, creates an array from value min to max
 * @min: the minimun value
 * @max: the maximum value
 *
 * Return: pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int i, n, *na;

	n = max - min;
	na = malloc(n * sizeof(int));
	if (na == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		if (min <= max)
		{
			na[i] = min;
			min++;
		}
	}
	return (na);
}

#include "stdio.h"

/**
 * print_array - n elements of an array
 * @a: the array
 * @n: the length of array tobe printed
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an int array
 * @a: array
 * @n: array size
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int *t = a + (n * sizeof(int));

	while (i < n)
	{
		*t = a[i];
		i++;
		t++;
	}
	i = 0;
	t--;
	while (i < n)
	{
		a[i] = *t;
		i++;
		t--;
	}
}

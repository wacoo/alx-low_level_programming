#include "main.h"

/**
 * swap_int - swaps two integers given
 * @a: an integer given
 * @b: an integer given
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

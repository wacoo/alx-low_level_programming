#include "main.h"

/**
 * print_triangle - prints a triangle made of # based on size given
 * @size: size give
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 1;
	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
			k = 1;
			while (k < i + 1)
			{
				_putchar('#');
				k++;

			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

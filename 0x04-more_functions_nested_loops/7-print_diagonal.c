#include "main.h"

/**
 * print_diagonal - prints \ in diagonal n times
 * @n: number of times
 */

void print_diagonal(int n)
{
	int i, temp = 0;

	i = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			while (temp > 0)
			{
				_putchar(' ');
				temp--;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			temp = i;
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}

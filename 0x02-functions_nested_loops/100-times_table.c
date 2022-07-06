#include "main.h"
/**
 * times_table - prints the nine times table
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int rep;

	if (n < 15 || n < 0)
	{
		while (i < (n+1))
		{
			j = 0;
			while (j < (n+1))
			{ 
				rep = i * j;
				if (j == 0)
					_putchar('0' + rep);
				else if (rep < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + rep);
				}
				else if (rep < 100)
				{
					_putchar(' ');
					_putchar('0' + rep / 10);
					_putchar('0' + rep % 10);
				}
				else
				{
					_putchar('0' + rep / 100);
					_putchar('0' + (rep - 100) / 10);
					_putchar('0' + rep % 10);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

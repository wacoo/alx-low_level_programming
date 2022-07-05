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
	int mv;

	if (n < 15 || n < 0)
	{
		while (i < (n+1))
		{
			j = 0;
			while (j < (n+1))
			{
				mv = j * i;
				if (j == 0)
				{
					_putchar(mv + '0');
				}
				else if (mv >= (n+1))
				{
					_putchar(' ');
					_putchar(mv / 10 + '0');
					_putchar(mv % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mv + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

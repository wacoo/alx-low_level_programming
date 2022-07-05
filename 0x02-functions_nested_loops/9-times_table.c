#include "main.h"
/**
 * times_table - prints the nine times table
 *
 * Return: 0
 */

void times_table(void)
{
	int i = 0;
	int j;
	int mv;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mv = j * i;
			if (j == 0)
			{
				_putchar(mv + '0');
			}
			else if (mv >= 10)
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
			if (j != 9)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

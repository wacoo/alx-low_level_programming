#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i  == 2 + '0' || i == 4 + '0')
		{
			
		}
		else
		{
			_putchar(i);
		}

		i++;
	}
	_putchar('\n');
}

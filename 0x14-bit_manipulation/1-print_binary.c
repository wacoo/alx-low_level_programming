#include "main.h"

/**
 * print_binary - prints binary of a number
 * @n: number given
 *
 */
void print_binary(unsigned long int n)
{
	int r[100], i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		r[i] = n % 2;
		n = n / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(r[i] + '0');
		i--;
	}

}

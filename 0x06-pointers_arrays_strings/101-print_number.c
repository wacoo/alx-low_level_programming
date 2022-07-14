#include "main.h"
#include <stdio.h>
/**
 * print_number - prints integer
 * @n: integer given
 *
 */

void print_number(int n)
{
	int t[20], i = 0;
	
	if (n < 0)
	{
		n *= -1;
		while (n != 0)
		{
			t[i] = n % 10;
			n /= 10;
			i++;
		}
		_putchar('-');
		while (i > 0)
		{
			i--;
			_putchar(t[i] + '0');
                }
	}
	else if(n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n != 0)
		{
			t[i] = n % 10;
			n /= 10;
			i++;
		}
		while (i > 0)
		{
			i--;
			_putchar(t[i] + '0');
		}
	}
}

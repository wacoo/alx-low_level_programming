#include "main.h"

/**
 * puts_half - prints half of a srting
 * @str: given string
 */

void puts_half(char *str)
{
	int c, half;
	char *str2;

	c = 0, half = 0;
	str2 = str;
	while (*str != '\0')
	{
		str += sizeof(char);
		c++;
	}
	if (c % 2 == 0)
	{
		half = c / 2;
	}
	else
	{
		half = (c - 1) / 2;
	}
	c = 0;
	while (*str2 != '\0')
	{
		if (c >= half)
		{
			_putchar(*str2);
		}
		str2 += sizeof(char);
		c++;
	}
	_putchar('\n');
}

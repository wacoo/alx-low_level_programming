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
	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
	{
		half = c / 2;
	}
	else if (c % 2)
	{
		half = (c - 1) / 2;
	}
	c = half;
	while (str2[c] != '\0')
	{
		_putchar(str2[c]);
		c++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_rev - print string in reverse
 * @str: string given
 *
 */

void print_rev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(str[i - 1]);
		i--;
	}
	_putchar('\n');
}

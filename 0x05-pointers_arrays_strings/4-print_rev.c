#include "main.h"

/**
 * print_rev - print string in reverse
 * @str: string given
 *
 */

void print_rev(char *str)
{
	char *firstCharPos = str;

	while (*str != '\0')
	{
		str += sizeof(char);
	}
	while (str != (firstCharPos - sizeof(char)))
	{
		_putchar(*str);
		str -= sizeof(char);
	}
	_putchar('\n');
}

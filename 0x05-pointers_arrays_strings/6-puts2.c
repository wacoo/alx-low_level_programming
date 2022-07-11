#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string given
 */
void puts2(char *str)
{
	int c = 0, f = 0;

	while (*str != '\0')
	{
		if (f == 0)
		{
			_putchar(*str);
			f = 1;
		}
		else if (f == 1)
		{
			f = 0;
		}
		str += sizeof(char);
		c++;
	}
	_putchar('\n');

}

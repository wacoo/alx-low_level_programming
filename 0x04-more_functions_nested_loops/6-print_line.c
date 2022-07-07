#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: number suggesting the length of the line
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

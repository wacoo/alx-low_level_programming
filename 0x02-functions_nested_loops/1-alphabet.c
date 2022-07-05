#include "main.h"
/**
 * print_alphabet - Prints alphabets from a to z in small letters
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

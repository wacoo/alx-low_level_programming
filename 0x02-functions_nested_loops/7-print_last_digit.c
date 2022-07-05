#include "main.h"
/**
 * print_last_digit - prints the last digit of agiven number
 * @n: the given number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}

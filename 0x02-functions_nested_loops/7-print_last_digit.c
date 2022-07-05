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

	if (n < 0)
		n = (-1) * n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

#include "main.h"
/**
 * find_sqr - returns the square root
 * @n: given number
 * @i: iterator
 *
 * Return: square root of n or -1
 */

int find_sqr(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if ((i * i) < n)
	{
		return (find_sqr(i + 1, n));
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number given
 *
 * Return: squeare root of n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqr(i, n));
	}
}

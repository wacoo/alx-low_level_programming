#include "main.h"

/**
 * factorial - returns the fuctorial of n
 * @n: given number
 *
 * Return: factorial of n
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * is_prime-number - indentifies prime numbers
 * @n: the number give
 * @i: devisor
 *
 * Return: 0 or 1
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (i == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, i + 1));
}
/**
 * is_prime_number - identifies prime numbers
 * @n: given number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int i = 2;
	
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, i));
}

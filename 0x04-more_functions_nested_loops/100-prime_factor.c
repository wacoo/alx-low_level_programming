#include <stdio.h>

/**
 * main - identifies the largest prime factor of a given number
 * Return: 0
 */

int main(void)
{
	long int i, n = 612852475143;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		i++;
	}
	printf("%ld\n", i);
	return (0);
}

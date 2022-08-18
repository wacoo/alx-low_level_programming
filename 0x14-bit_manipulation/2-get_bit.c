#include "main.h"

/**
 * get_bit - returns bits at given index
 * @n: number given
 * @index: index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int r[100], i = 0;
	unsigned int j = 0;

	if (n == 0)
	{
		return (0);
	}
	while (n > 0)
	{
		r[i] = n % 2;
		n = n / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (j == index)
		{
			return (r[j]);
		}
		j++;
		i--;
	}
	return (-1);

}

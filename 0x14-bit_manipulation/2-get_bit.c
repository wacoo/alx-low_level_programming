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
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

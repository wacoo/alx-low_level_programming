#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned
 * @b: pointer to binary chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	const char *t = b;
	int i = 1, num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*t != '\0')
	{
		t++;
	}
	while (t > b)
	{
		if (*t == '1')
		{
			num = num + (1 * 2 ^ i);
		}
		else
		{
			num = num + (0 * 2 ^ i);
		}
		i++;
		t--;
	}
	return (num);

}

#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area tobe filled
 * @b: the constant bytes
 * @n: first n bytes to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int j = 0;

	for (i = 0; i != '\0'; i++)
	{
		if (j < n)
		{
			s[i] = b;
			j++;
		}

	}
	return (s);
}

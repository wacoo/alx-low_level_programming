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
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

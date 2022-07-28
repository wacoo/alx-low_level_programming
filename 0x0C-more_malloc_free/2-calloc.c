#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with given character
 * @b: pointer to the memory space
 * @c: character to be filled
 * @len: length of the space to be filled
 *
 * Return: pointer to the memory space
 *
 */
void *_memset(void *b, int c, int len)
{
	unsigned char *p = b;

	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}
/**
 * _calloc - counts no of chars in a string
 * @nmemb: number of array elements
 * @size: size in bytes
 *
 * Return: pointer to new memory space
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *na;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	na = malloc(nmemb * size);
	if (na == NULL)
	{
		return (NULL);
	}
	_memset(na, 0, nmemb);
	return (na);
}

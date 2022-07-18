#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (j < n)
		{
			dest[i] = src[i];
			j++;
		}
	}
	return (dest);
}

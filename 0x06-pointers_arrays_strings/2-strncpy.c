#include "main.h"
/**
 * _strncpy - copies from source to destination
 * @dest: destination
 * @src: source
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *bsrc = src, *bdest = dest;
	int count = 0;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	if ((count + 1) < n)
	{
		*dest = '\n';
	}
	src = bsrc;
	dest = bdest;
	return (dest);
}

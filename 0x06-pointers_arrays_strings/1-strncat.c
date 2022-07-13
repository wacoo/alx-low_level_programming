#include "main.h"

/**
 * _strncat - concatinates n bytes from src to dest
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes
 *
 * Return: destination string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *begin = dest;
	char *sbegin = src;
	int count = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	if ((count + 1) < n)
	{
		*dest = '\0';
	}
	dest = begin;
	src = sbegin;
	return (dest);
}

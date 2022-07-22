#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to concatinated destination string
 */
char *_strcat(char *dest, char *src)
{
	char *destBegin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest += *src;
		src++;
		dest++;
	}
	*dest += '\0';
	dest = destBegin;
	return (dest);
}

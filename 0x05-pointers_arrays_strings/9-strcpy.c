#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		src += sizeof(char);
		i++;
	}
	return (dest);
}

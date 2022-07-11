#include "main.h"
/**
 * _strlen - return length of a string;
 * @s: returns the length of a sring.
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s += sizeof(char);
		i++;
	}
	return (i);
}

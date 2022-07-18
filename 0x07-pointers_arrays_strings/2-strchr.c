#include "main.h"

/**
 * _strchr - locates a given string in a string
 * @s: given string
 * @c: given character to be searched
 *
 * Return: first occurrence of the char c or null
 */

char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	return ((char*)0);
}

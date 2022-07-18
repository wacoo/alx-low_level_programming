#include "main.h"

/**
 * _strpbrk - searches for any of set bytes
 * @s: string give
 * @accept: list of chars to be searched
 *
 * Return: a pointer to the first char that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&(s[i]));
			}
			j++;
		}
	}
	return ((char *)0);
}

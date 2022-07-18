#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string given
 * @accept: the chars to be compared
 * Return: unsinged int
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				count++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (count);

}

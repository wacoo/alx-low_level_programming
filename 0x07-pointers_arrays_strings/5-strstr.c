#include "main.h"

/**
 * _strstr - finds similar string
 * @haystack: string given
 * @needle: the string to be found
 *
 * Return: pointer to the beginning of the located string or null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, ii, jj;
	char *p;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			ii = i;
			jj = j;
			if (haystack[i] == needle[j])
			{
				while (haystack[ii] == needle[jj])
				{
					if (needle[jj] != '\0')
					{
						ii++;
						jj++;
					}
					else
					{
						p = &(haystack[i]);
						return (p);
					}
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

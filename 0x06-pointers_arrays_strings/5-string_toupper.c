#include "main.h"

/**
 * string_toupper - changes small chars to big in string
 * @n: string
 * *
 * Return: changed string
 *
 */
char *string_toupper(char *n)
{
	int i = 0, j;
	char lower[26], upper[26];

	for (i = 0; i < 26; i++)
	{
		lower[i] = i + 97;
		upper[i] = i + 65;
	}
	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] < 123 && n[i] > 96)
		{
			j = 0;
			while (j < 26)
			{
				if (n[i] == lower[j])
				{
					n[i] = upper[j];
				}
				j++;
			}
		}
		i++;
	}
	return (n);
}

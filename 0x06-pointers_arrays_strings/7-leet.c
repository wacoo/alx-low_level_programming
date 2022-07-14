#include "main.h"

/**
 * leet - replaces some char in a string numbers
 * @s: string given
 *
 * Return: changed string
 */
char *leet(char *s)
{
	int j, i = 0;
	char lchar[] = {'a', 'e', 'o', 't', 'l'};
	char uchar[] = {'A', 'E', 'O', 'T', 'L'};
	char rep[] = {'4', '3', '0', '7', '1'};
	char *t = s;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if ((s[i] == lchar[j]) || (s[i] == uchar[j]))
			{
				s[i] = rep[j];
			}
			j++;
		}
		i++;
	}
	return (t);
}

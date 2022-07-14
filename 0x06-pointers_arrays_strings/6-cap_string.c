#include "main.h"
/**
 * isWord - checks if char is start of a word
 * @c: character
 *
 * Return: 0 or 1
 */
int isWord(char c)
{
	switch (c)
	{
		case '\n':
		case '.':
		case ',':
		case '\'':
		case '\"':
		case '\t':
		case ' ':
		case '!':
		case '?':
		case '{':
		case '}':
		case '(':
		case ')':
		case ';':
			return (1);
		default:
			return (0);
	}
}
/**
 * cap_string - capitalized the first letter of a word in string.
 * @s: string
 *
 * Return: changed string.
 *
 */

char *cap_string(char *s)
{
	int j, i = 0;
	char lower[26], upper[26];
	unsigned char c = 0;

	for (i = 0; i < 26; i++)
	{
		lower[i] = i + 97;
		upper[i] = i + 65;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (i > 0)
		{
			c = i - 1;

		}

		if (isWord((char) s[c]) && (s[i] < 123 && s[i] > 96))
		{
			j = 0;
			while (j < 26)
			{

				if (s[i] == lower[j])
				{
					s[i] = upper[j];
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * rot13 - enccrypts to rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char uc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == uc[j])
			{
				s[i] = cc[j];
				break;
			}
		}
	}
	return (s);
}

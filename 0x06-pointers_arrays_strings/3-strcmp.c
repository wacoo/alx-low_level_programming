#include "main.h"

/**
 * _strcmp - compares two strings given
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0, >0 or <0
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-15);
		}
		else if (*s1 > *s2)
		{
			return (15);
		}
		s1++;
		s2++;
	}
	return (0);
}

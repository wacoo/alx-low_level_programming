#include "main.h"

/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: null or new location
 *
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0, j = 0;
	char * new;

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	new = malloc((sizeof(char) * size1) + (sizeof(char) * size2));
	while (i < size1)
	{	
		new[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	if (s1 ==  0 || s2 == 0)
	{
		return ('\0');
	}
	else
	{
		return (new);
	}
}

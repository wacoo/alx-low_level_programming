#include "main.h"
#include <stdlib.h>
/**
 * _strlen - counts no of chars in a string
 * @str: the string to be counted
 *
 * Return: count
 *
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatinates two strings
 * @s1: the first string
 * @s2: second string
 * @n: number of bytes to be concatinated to s1
 *
 * Return: NULL or pointer to concatinated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = _strlen(s1) + 1;
	char *ns = malloc(((len) * sizeof(char)) + (n + sizeof(char)));

	if (ns == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < len; i++)
	{
		ns[i] = s1[i];
	}
	i--;
	for (j = 0; j < n; j++)
	{
		ns[i] = s2[j];
		i++;
	}
	return (ns);


}

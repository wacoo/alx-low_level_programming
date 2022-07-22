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
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}

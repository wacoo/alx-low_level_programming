#include "main.h"

/**
 * _strlen_recursion - reurns the length of a given string
 * @s: given string
 *
 * Return: int
 *
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

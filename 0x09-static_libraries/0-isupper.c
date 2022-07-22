#include "main.h"

/**
 * _isupper - Checks if a character is upper case or lower
 * @c: the character to be checked
 *
 * Return: 1 if it is and 0 if it is not
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


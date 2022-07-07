#include "main.h"

/**
 * _isdigit - checks if a given number is adigit
 * @c: the given number
 *
 * Return: 1 if a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

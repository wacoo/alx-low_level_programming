#include "main.h"
/**
 * _islower - Checks if a char is lowecase
 * @c: gets character as a parameter
 *
 * Return: 0 or 1 depending on the result
 */
int _islower(char c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}

#include <unistd.h>

/**
 * _putchar - prints characters one at a time
 * @ c - character given
 *
 * Return: integer
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

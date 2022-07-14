#include <unistd.h>

/**
 * _putchar - prints characters given
 * @c: character
 *
 * Return: number
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

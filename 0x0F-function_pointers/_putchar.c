#include <unistd.h>
/**
 * _putchar - print character
 * @c: character
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

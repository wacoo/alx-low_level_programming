#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: the caracter to be printed
 *
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


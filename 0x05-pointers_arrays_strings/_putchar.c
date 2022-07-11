#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: the caracter to be printed
 *
 * Retrun: 0
 */
int _putchar(char c)
{
	write(1, c, 1);
	return 0;
}


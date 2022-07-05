#ifndef _PUTCHAR
#define _PUTCHAR
#include <unistd.h>
/**
 * _putchar - returns a character to screen
 * @c: character input
 * Return: char
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
#endif

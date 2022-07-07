#include "main.h"

/**
 * main - prints a character given
 * @c: the character to be printed
 *
 * Return: 1 if success 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>
/**
 * _putchar - prints a string character at a time
 *
 * Return: returns an integer
 *
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

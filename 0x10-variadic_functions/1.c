#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: used to separate printed arguments
 * @n: number of int arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	i = 0;
	va_start(li, n);
	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d%s", va_arg(li, int), separator);
		}
		else
		{
			printf("%d\n", va_arg(li, int));
		}
		i++;
	}
	va_end(li);
}

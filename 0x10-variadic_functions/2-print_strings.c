#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints variable string arguments
 * @separator: separates strings
 * @n: number of string arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list va;

	if (separator != NULL)
	{
		va_start(va, n);
		for (i = 0; i < n; i++)
		{
			temp = (char *) va_arg(va, char *);
			if (temp == NULL)
			{
				if (i != n - 1)
				{
					printf("(nil)%s", separator);
				}
				else
				{
					printf("(nil)\n");
				}
			}
			else
			{
				if (i != n - 1)
				{
					printf("%s%s", temp, separator);
				}
				else
				{
					printf("%s\n", temp);
				}
			}
		}
	}

}

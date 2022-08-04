#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_txt - prints text
 * @c: character
 * @ap: va_list
 */

void print_txt(char c, va_list ap)
{
	switch (c)
	{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			printf("%s", va_arg(ap, char *));
			break;
		default:
			break;
	}
}

/**
 * print_all - prints anything
 * @format: types of arguments
 *
 */

void print_all(const char * const format, ...)
{
	int i, j, len;
	va_list ap;
	char fmt[] = {'c', 'i', 'f', 's'};

	len = strlen(format);
	va_start(ap, format);
	i = 0;
	while (i < len)
	{
		print_txt(format[i], ap);
		j = 0;
		while (j < 4)
		{
			if (i != len - 1 && fmt[j] == format[i])
			{
				printf(", ");
			}
			j++;
		}
		if (i == len - 1)
		{
			printf("\n");
		}
		i++;
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strlen - counts no of chars in a string
 * @str: the string to be counted
 *
 * Return: count
 *
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int _isNumber(char s[])
{
	int i;

        for (i = 0; s[i]!= '\0'; i++)
        {
                if (isdigit(s[i]) == 0)
                {
                        return 0;
                }
        }
        return 1;
}

unsigned long int _atoi(char* str)
{
        int i;
	unsigned long int res;

        for (i = 0; str[i] != '\0'; ++i)
        {
                res = res * 10 + str[i] - '0';
        }
        return res;
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: o or 1
 *
 */

int main(int argc, char *argv[])
{
	int l1, l2, *res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
	}
	else if (_isNumber(argv[1]) && _isNumber(argv[2]))
	{
		l1 = _strlen(argv[1]);
		l2 = _strlen(argv[2]);
		res = malloc((l1 + l2) * sizeof(*res));
		if (res == NULL)
		{
			return (1);
		}

		*res = (unsigned long int) argv[1] * (unsigned long int) argv[2];
		printf("%d\n", *res);
	}
	return (*res);

}

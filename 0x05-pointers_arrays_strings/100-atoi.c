#include "main.h"

/**
 * _atoi - extracts numbers from string
 * @s: string
 *
 * Return: extracted number
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (_isdigit(s[i]))
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
		{
			break;
		}
	}
	res = sig * res;
	return (res);
}

#include <stdio.h>
/**
 * main - Entry point, prints base 16
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i < 10)
			putchar(i + 48);
		i++;
	}
	i = 10;
	while (i < 16)
	{
		putchar(i + 87);
		i++;
	}
	putchar('\n');
	return (0);
}

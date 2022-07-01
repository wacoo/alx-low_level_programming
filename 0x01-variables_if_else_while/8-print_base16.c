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
		if (i == 10)
			putchar('a');
		else if (i == 11)
			putchar('b');
		else if (i == 12)
			putchar('c');
		else if (i == 13)
			putchar('d');
		else if (i == 14)
			putchar('e');
		else if (i == 15)
			putchar('f');
		i++;
	}
	putchar('\n');
	return (0);
}

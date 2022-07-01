#include <stdio.h>
/**
 * main - This where the program starts
 * Return: 0
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

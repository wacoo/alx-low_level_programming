#include <stdio.h>
/**
 * main - The program starts here
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			if(i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (!(i == 8 && j == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j=0;
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - the program starts
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				if ((i != j && j != k) && (i < j && j < k))
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}

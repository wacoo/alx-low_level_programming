#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				while (l < 10)
				{
					if (!(i == k && j == l))
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(k + 48);
						putchar(l + 48);
						if (!(i == 9 && j == 9 && k == 9 && l == 8))
						{
							putchar(',');
							putchar(' ');
						}
					}
					l++;
				}
				k++;
				l = 0;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;

	}
	putchar('\n');	
	return (0);
}

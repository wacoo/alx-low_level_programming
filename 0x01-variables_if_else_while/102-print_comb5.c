#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int p = 48, q = 48, y = 48, x = 49;

	while (p < 58)
	{
		while (q < 58)
		{
			while (y < 58)
			{
				while (x < 58)
				{
					putchar(p);
					putchar(q);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (!(p == 57 && q == 56 && y == 57 && x == 57))
					{
						putchar(',');
						putchar(' ');
					}
					x++;
				}
				y++;
				x = 48;
			}
			q++;
			q = p;
			x = q + 1;
		}
		p++;
		q = 48;
		y = p;
		x = q + 1;
	}
	putchar('\n');
	return (0);
}

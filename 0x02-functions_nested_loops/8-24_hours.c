#include "main.h"
/**
 * jack_bauer - prints every minute of 24 hours
 *
 * Returns: 0
 */
void jack_bauer(void)
{
	int i = 0, j, k, l;

	/* Hour*/
	while (i < 3)
	{
		j = 0;
		while (j < 9)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			if ((i == 2 && j < 3) || (i < 2))
				j++;
			else
				break;
		}
		i++;
	}
}

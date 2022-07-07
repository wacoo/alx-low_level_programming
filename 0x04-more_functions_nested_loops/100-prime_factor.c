#include <stdio.h>
#include <math.h>

/**
 * main - identifies the largest prime factor of a given number
 */

int main(void)
{
	unsigned int long n, a;

	n= 612852475143;
	a = (int) sqrt(n);
	while (1)
	{
		if (n % a == 0)
		{
			printf("%lu \n", n / a);
			break;
		}
		a--;
	}
	return (0);
}

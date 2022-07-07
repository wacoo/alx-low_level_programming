#include <stdio.h>

/**
 * main - print 1-100 add fizz for multiples of 3, buzz for multiples of 5
 * and fizbuzz for both
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			if (i >= 100)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d ", i);
			}

		}
	}
	printf("\n");
	return (0);
}

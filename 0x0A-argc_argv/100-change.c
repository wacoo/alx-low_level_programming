#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints amount change
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 or 1
 *
 */

int main(int argc, char **argv)
{
	int n, res = 0, i;
	int a[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			while (n > 0)
			{
				i = 0;
				while (i < 5)
				{
					if (n >= a[i])
					{
						res += n / a[i];
						n = n % a[i];
					}
					i++;
				}
			}
		}
		printf("%d\n", res);

	}
	return (0);
}

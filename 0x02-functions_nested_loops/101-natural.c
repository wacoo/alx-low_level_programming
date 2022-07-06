#include <stdio.h>
/**
 * main - adds all natural nubers multiple of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, sum;

	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

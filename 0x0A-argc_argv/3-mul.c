#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments and prints them
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 or 1
 *
 */

int main(int argc, char *argv[])
{
	int res = 0, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: program's success in int
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

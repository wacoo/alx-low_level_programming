#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - prints the op code of main
 * @c: nuber of arguments
 * @v: arguments
 *
 * Return: int
 */
int main(int c, char **v)
{
	char *ar;
	int i, size;

	if (c != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(v[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (EXIT_SUCCESS);
}

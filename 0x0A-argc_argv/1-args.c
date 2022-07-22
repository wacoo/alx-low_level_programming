#include <stdio.h>

/**
 * main - prints number of aguments passed
 * @argc: the number of array of strings
 * @argv: pointer to parameters
 *
 * Return: success status
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}

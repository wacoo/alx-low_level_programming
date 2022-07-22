#include <stdio.h>

/**
 * main - prints the programs name
 * @argc: the array count
 * @argv: pointer to array of pointers
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}

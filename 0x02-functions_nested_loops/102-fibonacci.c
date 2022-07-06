#include <stdio.h>
/**
 * main - prints the first fibonacci sequences
 *
 * Return: 0
 */
int main(void)
{
	long int i, num1, num2, nextNum;

	num1 = 0;
	num2 = 1;
	i=0;

	nextNum = num1 + num2;
	printf("%ld, %ld, ", num1, num2);
	while (i< 48)
	{
		printf("%ld", nextNum);
		if (i < 47)
			printf(", ");
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;
		i++;
	}
	printf("\n");
	return (0);
}

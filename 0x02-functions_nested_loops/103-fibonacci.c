#include <stdio.h>
/**
 * main - prints the sum of even valued terms in fibanacci sequence.
 *
 * Return: 0
 */
int main(void)
{
	int sum, num1, num2, nextNum;

	num1 = 1;
	num2 = 2;
	sum = 0;
	sum += 2;
	nextNum = num1 + num2;
	while (nextNum < 4000000)
	{
		if (nextNum % 2 == 0)
			sum += nextNum;
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;
	}
	printf("%d\n", sum);
	return (0);
}

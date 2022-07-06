#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - checks is a number is + or -
 * @n: the number to be checked
 * Return: 0
 */
void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}

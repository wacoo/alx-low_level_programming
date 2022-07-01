#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entray point
 * Return: 0
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst = n % 10;
	if (lst > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	else if (lst == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst);
	else if (lst && lst != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	return (0);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs arithmetic operations
 * @c: number of arguments
 * @v: arguments
 *
 * Return: int
 */
int main(int c, char **v)
{
	int o, res, op1, op2;
	int (*ptr)(int, int);

	if (c != 4)
	{
		printf("Error1 %d \n", c);
		exit(98);
	}
	op1 = atoi(v[1]);
	op2 = atoi(v[3]);
	ptr = get_op_func(v[2]);
	if (!ptr)
	{
		printf("Error2 %d\n", c);
		exit(99);
	}
	o = *v[2];
	if ((o == '/' || o == '%') && op2 == 0)
	{
		printf("Error3\n");
		exit(100);
	}
	res = ptr(op1, op2);
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}

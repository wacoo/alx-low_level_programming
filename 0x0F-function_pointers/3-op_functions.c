#include "3-calc.h"

/**
 * op_add - sum
 * @a: op 1
 * @b: op 2
 *
 * Return: sum of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: op 1
 * @b: op 2
 *
 * Return: subtraction b from a
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: op 1
 * @b: op 2
 *
 * Return: result of multiplication
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divition
 * @a: op 1
 * @b: op 2
 *
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: op 1
 * @b: op 2
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}

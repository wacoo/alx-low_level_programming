#ifndef CALC_H
#define CALC_H

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - arithmetic operation
 * @op: operator
 * @f: pointer to function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif

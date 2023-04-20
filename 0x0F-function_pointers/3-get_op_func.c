#include "3-calc.h"

/**
 * get_op_func - To select the correct function to do
 * the operation asked by the user.
 *i @s: Operator type char.
 *
 * Return: Pointer to the function corresponding
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;
	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;

	return (ops[a].f);
}

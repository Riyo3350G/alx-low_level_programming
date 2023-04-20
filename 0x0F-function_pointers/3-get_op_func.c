#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - To select the correct function to do
 * the operation asked by the user.
 * @s: Operator type char.
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

	int a;
	a = 0;
	while (ops[a].op != NULL && s[1] == '\0')
	{
		if (ops[a].op[0] == *s)
			return ((ops[a].f));
		a++;
	}

	return (NULL);

}

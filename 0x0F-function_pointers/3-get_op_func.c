#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation requested by the user.
 * @s: Operator as a string.
 *
 * Return: Pointer to the corresponding function, or NULL
 *         if the operator is invalid.
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

        while (ops[a].op != NULL && s[1] == '\0')
        {
                if (ops[a].op[0] == *s)
                        return (ops[a].f);
                a++;
        }

        return (NULL);
}

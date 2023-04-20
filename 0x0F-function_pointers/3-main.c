#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

#define ARGV(X, S) (argv[X][0] == S)

/**
 * main - Entry Point, perform a calculation based on 2 numbers and
 * the given operator.
 * @argc: Number of arguments
 * @argv: The string value of the arguments.
 *
 * Return: 0 (On Success)
 */
int main(int argc, char *argv[])
{
        int num1, num2;
        char *op;

        if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        op = argv[2];

        if ((ARGV(2, '/') || ARGV(2, '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}

        printf("%d\n", get_op_func(op)(num1, num2));
        return (0);
}

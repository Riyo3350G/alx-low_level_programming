#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	print("%d\n", get_op_func(op)(num1, num2));
	return (0);
}

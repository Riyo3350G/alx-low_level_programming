#include "3-calc.h"

/**
 * op_add - calc the sum of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	int sum = a + b;
	return sum;
}
/**
 * op_sub - Calc the difference of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	int difference = a - b;
	return difference;
}
/**
 * op_mul - Calc the product of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	int product = a * b;
	return product;
}
/**
 * op_div - Calc the division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Division of a by b.
 */
int op_div(int a, int b)
{
	int division = a / b;
	return division;
}
/**
 * op_mod - Calc the remainder of the division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	int modul = a % b;
	return modul;
}

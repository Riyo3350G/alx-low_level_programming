#include "holberton.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: integer.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: integer
 *
 * Return: square root of n. 
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 */
int sqrt(int a, int b)
{
        if (b * b == a)
                return (b);
        else if (b * b > a)
                return (-1);
        return (sqrt(a, b + 1));
}

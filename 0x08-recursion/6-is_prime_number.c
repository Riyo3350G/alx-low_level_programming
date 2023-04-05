#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 *
 * Return: integer.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}

/**
 * prime1 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 */
int prime1(int a, int b)
{
        if (a == b)
                return (1);
        else if (a % b == 0)
                return (0);
        return (prime1(a, b + 1));
}

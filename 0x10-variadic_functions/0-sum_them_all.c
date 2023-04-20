#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all its paramters.
 * @n: Number of paramters passed to the function.
 * @...: Variable number of paramters to calculate the sum of.
 *
 * return: the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int sum = 0;
	int num;
	int i;

	if(n == 0)
	{
		return (0);
	}

	va_start(l, n);
	for(i = 0; i < n ; i++)
	{
		num = va_arg(l, int);
		sum += num;
	}
	return sum;
}

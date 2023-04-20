#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	int num;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(l, int);
		printf("%d", num);

		if (i != n - 1)
		{
			printf("%s ", separator);
		}
	}

	printf("\n");

	va_end(l);
}

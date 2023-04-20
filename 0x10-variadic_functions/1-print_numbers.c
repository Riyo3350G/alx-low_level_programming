#include "variadic_functions.h"

/**
 * print_numbers - Prints number one by one, followed by a new line.
 * @separator: The char to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Return: No return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(l);
}

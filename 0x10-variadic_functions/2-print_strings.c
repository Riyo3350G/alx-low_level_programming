#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);

	for(i = 0; i < n ; i++)
	{
		s = va_arg(l, char *);

		if(s == NULL)
		{
			printf("(nil)");
		}else{
			printf("%s", s);
		}

		if (separator != NULL && i != (n - 1))
		{
            		printf("%s", separator);
		}
	}

	printf("\n");

	va_end(l);
}

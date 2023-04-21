#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: The list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0;
	char *separator = "", *str;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);

					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			separator = ", ";
		}
	}

	va_end(l);

	printf("\n");
}

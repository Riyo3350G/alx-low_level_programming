#include "function_pointers.h"

/**
 * print_name - prints name using a function.
 * @name: Input name.
 * @f: A function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

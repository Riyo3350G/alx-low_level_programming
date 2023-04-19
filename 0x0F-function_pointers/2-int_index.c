#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Input array of integers.
 * @size: Array size.
 * @cmp: Pointer to the function to be used
 * to compare values.
 *
 * Return: Index of the first element for which the cmp
 * function does not return 0. If no elements matche,
 * return -1. If the size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}

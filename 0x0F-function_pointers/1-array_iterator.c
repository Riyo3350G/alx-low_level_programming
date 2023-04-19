#include "function_pointers.h"

/**
 * array_iterator - executes a given function on
 * each element of an array
 * @array: a pointer to the targeted array
 * @size: size of targeted array
 * @action: pointer to the function to be executed
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}

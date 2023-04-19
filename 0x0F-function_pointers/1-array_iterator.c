#include "function_pointers.h"

/**
 * array_iterator - excutes a given function on 
 * each element of array.
 * @array: A pointer to the targeted array.
 * @size: Size of targeted array.
 *
 * Return: no return. 
 * */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;
	if(array && action)
	{
		for(a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}

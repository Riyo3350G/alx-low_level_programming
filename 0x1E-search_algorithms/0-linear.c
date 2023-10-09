#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algo
 * @array: pointer to the first element of the array
 * @size: size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;

	if (!array)
		return (-1);

	for (idx; idx < size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}

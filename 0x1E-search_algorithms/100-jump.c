#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algo
 * @array: pointer to the first element of the array
 * @size: size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t steps, jump, idx;

	steps = sqrt(size);

	if (!array)
		return (-1);

	for (idx = 0, jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		idx = jump;
		jump += steps;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx, jump);

	if (jump >= size)
		jump = size - 1;

	for (; idx <= jump; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}

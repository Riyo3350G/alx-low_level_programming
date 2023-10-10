#include "search_algos.h"
int rec_binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (mid && size % 2 == 0)
	{
		mid--;
	}

	if (value == array[mid])
	{
		if (mid > 0)
			return (rec_binary_search(array, mid + 1, value));
		else
			return (mid);
	}

	if (value < array[mid])
	{
		return (rec_binary_search(array, mid, value));
	}
	else
	{
		return (rec_binary_search(array + mid + 1, size - mid - 1, value) + mid + 1);
	}
}
/**
 * advanced_binary - searches for a value in an array of integers
 * using the Binary search algo
 * @array: pointer to the first element of the array
 * @size: size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = rec_binary_search(array, size, value);
	if (idx >= 0 && array[idx] == value)
		return (idx);
	else
		return (-1);
}

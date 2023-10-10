#include "search_algos.h"

/**
 * _binary_search - searches for a value in an array of integers
 * using the Binary search algo
 * @array: pointer to the first element of the array
 * @l: leftmost index
 * @r: rightmost index
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, idx;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);
			if (idx < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
/**
 * exponential_search - searches for a value in an array of integers
 * using the Exponential search algo
 * @array: pointer to the first element of the array
 * @size: size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, bound;

	if (!array)
		return (-1);

	for (idx = 1; idx < size && array[idx] < value; idx *= 2)
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	bound = idx < size - 1 ? idx : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, bound);

	return (_binary_search(array, idx / 2, bound, value));
}

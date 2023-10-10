#include "search_algos.h"

/**
 * _binary_search - searches for a value in an array of integers
 * using the Binary search algo
 * @array: pointer to the first element of the array
 * @left: left index
 * @right: right index
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (; left <= right;)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			if (idx != right)
			{
				printf("%d, ", array[idx]);
			}
			else
			{
				printf("%d", array[idx]);
			}
			/* printf("%d, ", array[idx]); */
		}
		printf("\n");
		/* printf("%d\n", array[idx]); */
		idx = left + (right - left) / 2;
		if (array[idx] == value)
			return (idx);
		else if (array[idx] < value)
			left = idx + 1;
		else
			right = idx - 1;
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
	size_t idx, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx *= 2)
		{
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		}
	}

	if (idx >= size)
		right = size - 1;
	else
	{
		right = idx;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, right);

	return (_binary_search(array, idx / 2, right, value));
}

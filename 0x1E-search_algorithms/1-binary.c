#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algo
 * @array: pointer to the first element of the array
 * @size: size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
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

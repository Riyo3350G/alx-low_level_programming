#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interpolation search algo
 * @array: pointer to the first element of the array
 * @size: size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, postn;

	if (!array)
		return (-1);

	l = 0;
	h = size - 1;

	while (l <= h && value >= array[l] && value <= array[h])
	{
		if (l == h)
		{
			if (array[l] == value)
				return (l);
			return (-1);
		}

		postn = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", postn, array[postn]);

		if (array[postn] == value)
			return (postn);
		else if (array[postn] < value)
			l = postn + 1;
		else
			h = postn - 1;
	}

	printf("Value checked array[%ld] is out of range\n", postn);
	return (-1);
}

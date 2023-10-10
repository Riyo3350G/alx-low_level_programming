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
	double formula;

	if (!array)
		return (-1);

	l = 0;
	h = size - 1;


	while (size)
	{
		formula = (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		postn = (size_t)(l + formula);

		printf("Value checked array[%d]", (int)postn);

		if (postn >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[postn]);

		if (array[postn] == value)
			return ((int)postn);

		if (array[postn] < value)
			l = postn + 1;
		else
			h = postn - 1;

		if (l == h)
			break;
	}
	return (-1);
}

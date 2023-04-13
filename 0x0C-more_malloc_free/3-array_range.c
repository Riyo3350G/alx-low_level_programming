#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function to creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int a;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		ar[a] = min;

	return (ar);
}

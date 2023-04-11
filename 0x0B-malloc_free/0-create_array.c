#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that's creates an array of chars.
 * @size: The size of the array.
 * @c: The Tstoraged char
 *
 * Return: The pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		cr[a] = c;

	return (cr);
}

#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if error in input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}

		converted <<= 1;
		if (*b == '1')
			converted += 1;

		b++;
	}

	return (converted);
}

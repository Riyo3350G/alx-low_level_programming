#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: The number
 * @index: Index starting from 0, of the bit we want to get
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int keeper;

	if (index > 64)
	{
		return (-1);
	}

	keeper = n >> index;

	return (keeper & 1);
}

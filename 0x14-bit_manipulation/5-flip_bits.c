#include "main.h"

/**
 * flip_bits -  Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ctr = 0;
	unsigned int to_flip = n ^ m;

	while (to_flip)
	{
		ctr += to_flip & 1;
		to_flip >>= 1;
	}

	return (ctr);
}

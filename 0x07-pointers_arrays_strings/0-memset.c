#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: Bytes to be filled.
 *
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

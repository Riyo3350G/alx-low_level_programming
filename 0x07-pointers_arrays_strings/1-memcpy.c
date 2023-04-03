#include "main.h"
/**
 * _memcpy - Copies memory area.
 *
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Bytes to be copied.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; i < n; b++)
		*(dest + b) =  *(src + b);

	return (dest);
}

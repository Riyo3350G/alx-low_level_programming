#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returne.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

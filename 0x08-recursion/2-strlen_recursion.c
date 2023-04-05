#include "main.h"

/**
 * _strlen_recursion - Returns Length of String.
 * @s: string
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return ( _strlen_recursion(s + 1) + 1 );
	}
	return (0);
}

#include <stdio.h>

/**
 * first - Prints a message before main function.
 *
 * Return: no return
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


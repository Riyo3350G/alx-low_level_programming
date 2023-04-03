#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Input pointer.
 * Return: No return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, s = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			s = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - s]);
	}
	_putchar('\n');
}

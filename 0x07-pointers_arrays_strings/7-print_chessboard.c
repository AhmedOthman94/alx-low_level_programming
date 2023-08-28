#include "main.h"

/**
 * print_chessboard
 * @a: array
 *
 * Return: chessboard.
*/

void print_chessboard(char (*a)[8])
{
	int m, n;

	m = 0, n = 0;
	for (m = 0; m <= 7; m++)
	{
		for (n = 0; n <= 7; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_square - prints a square followed by new line
 *
 * @size: int
 *
 * Return always 0 (success)
 */

void print_square(int size)
{
	int l, w;

	for (l = 0; l < size; l++)
	{
		for (w = 1; w <= size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

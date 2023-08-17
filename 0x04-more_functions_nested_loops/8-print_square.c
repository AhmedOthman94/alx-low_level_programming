#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int ro, co;

	for (ro = 1; ro <= size; ro++)
	{
		for (co = 1; co <= size; co++)
			_putchar('#');
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

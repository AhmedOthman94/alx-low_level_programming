#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: input
 *
 * Return: void
*/

int _strlen_recursion(char *s)
{
	int lng = 0;

	if (*s != '\0')
	{
		lng += 1 + _strlen_recursion(s + 1);
	}
	return (lng);
}

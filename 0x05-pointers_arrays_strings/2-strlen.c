#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int cr;

	for (cr = 0; *s != '\0'; s++)
	{
		cr++;
	}
	return (cr);
}

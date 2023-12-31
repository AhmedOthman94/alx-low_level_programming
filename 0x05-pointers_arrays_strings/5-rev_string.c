#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int m, n;
	char tp;

	for (m = 0; s[m] != '\0'; ++m)
		;

	for (n = 0; n < m / 2; n++)
	{
		tp = s[n];
		s[n] = s[m - 1 - n];
		s[m - 1 - n] = tp;
	}

}

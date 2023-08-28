#include "main.h"

/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: input
 * @accept: input
 *
 * Return: new string.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n;

	m = 0, n = 0;
	for (n = 0; *(s + n); n++)
	{
		for (m = 0; *(accept + m); m++)
		{
			if (*(s + n) == *(accept + m))
				break;
		}
	if (*(accept + m) == '\0')
		break;
	}
	return (n);
}

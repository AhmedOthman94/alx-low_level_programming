#include "main.h"

/**
 * leet - change vowels to numbers.
 * @c: analized string.
 *
 * Return: String with all vowels changed.
*/

char *leet(char *c)
{
	char p[] = "aeotlAEOTL";
	char t[] = "4307143071";
	int m = 0;
	int n;

	while (*(c + m) != '\0')
	{
		for (n = 0; n <= 9; n++)
		{
			if (*(c + m) == p[n])
			{
				*(c + m) = t[n];
			}
		}
		m++;
	}
	return (c);
}

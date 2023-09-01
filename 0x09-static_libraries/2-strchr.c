#include "main.h"

/**
 * _strchr - Entry point
 * @s: string source
 * @c: test char
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int m;

	m = 0;
	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}

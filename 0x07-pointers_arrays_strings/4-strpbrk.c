#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: source
 * @accept: search
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
		int i;

		i = 0;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}
	return ('\0');
}

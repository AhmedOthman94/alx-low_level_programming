#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int m, m2;

	m = 0;
	while (dest[m])
	{
		m++;
	}
	for (m2 = 0; src[m2] ; m2++)
	{
		dest[m++] = src[m2];
	}

	return (dest);
}

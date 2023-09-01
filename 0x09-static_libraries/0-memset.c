#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address
 * @b: the contant byte
 * @n: number of bytes to be changed
 *
 * Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (m = 0; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}

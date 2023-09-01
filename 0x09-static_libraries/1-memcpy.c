#include "main.h"

/**
 * _memcpy - fills memory with another buffer.
 * @dest: stored memory
 * @src: copied memory
 * @n: lenght
 * Return: new string.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	m = 0;

	while (m < n)
	{
		*(dest + m) = *(src + m);
		m++;
	}
	return (dest);
}

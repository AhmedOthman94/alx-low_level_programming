#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int o, j, i;

	m = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		n = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (t = 0; t < 10; t++)
		{
			if (t < n)
				printf("%02x", *(b + m + t));
			else
				printf("  ");
			if (t % 2)
			{
				printf(" ");
			}
		}
		for (t = 0; t < n; t++)
		{
			int c = *(b + m + t);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		m += 10;
	}
}

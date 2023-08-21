#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m != (n - 1))
		{
			printf("%d, ", a[m]);
		}
		else
		{
			printf("%d", a[m]);
		}
	}
	printf("\n");
}

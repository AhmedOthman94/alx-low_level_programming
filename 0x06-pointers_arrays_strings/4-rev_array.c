#include "main.h"

/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = 0, c = (n - 1); b < c; b++, c--)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
	}
}

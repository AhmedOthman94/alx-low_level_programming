#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @a: input first parameter
 * @b: input second  parameter
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}

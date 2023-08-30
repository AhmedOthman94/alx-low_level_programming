#include "main.h"

/**
 * sqrt2 - find square root of n
 * @i: same number as n
 * @j: iterator
 *
 * Return: The result
*/

int sqrt2(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sqrt2(i, j + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number
 *
 * Return: The result
*/

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

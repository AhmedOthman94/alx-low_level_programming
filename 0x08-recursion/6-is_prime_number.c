#include "main.h"

int prime1(int n, int j);

/**
 * is_prime_number - Is it a prime n or not
 * @n: number
 *
 * Return: The result
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * prime1 - number is prime recursively
 * @n: number
 * @j: iterator
 *
 * Return: The result
*/

int prime1(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (actual_prime(n, j - 1));
}

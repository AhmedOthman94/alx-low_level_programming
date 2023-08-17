#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @in: input number
 *
 * Return: square root of in
 *
*/

double _st(double in)
{
	float st, tp;

	st = in / 2;
	tp = 0;

	while (st != tp)
	{
		tp = st;
		st = (in / tp + tp) / 2;
	}
	return (st);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (n)
 *
 * @n: number to find
*/

void largest_prime_factor(long int n)
{
	int pn, lt;

	while (n % 2 == 0)
		n = n / 2;

	for (pn = 3; pn <= _st(n); pn += 2)
	{
		while (n % pn == 0)
		{
			n = n / pn;
			lt = pn;
		}
	}


	if (n > 2)
		lt = n;
	printf("%d\n", lt);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}

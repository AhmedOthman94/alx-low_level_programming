#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
*/

void print_number(int n)
{
	int a, b, d, ds, p;
	unsigned int tp, ncr, nr;

	d = 0;
	if (n < 0)
	{
		_putchar('-');
		tp = -n;
	}
	else
	{
		tp = n;
	}

	nr = tp;

	while (nr >= 10)
	{
		nr = nr / 10;
		d++;
	}
	ds = d + 1;
	p = 1;
	a = 1;

	while (a < ds)
	{
		p = p * 10;
		a++;
	}
	b = p;
	while (b >= 1)
	{
		ncr = (tp / b) % 10;
		_putchar(ncr + '0');
		b = b / 10;
	}
}

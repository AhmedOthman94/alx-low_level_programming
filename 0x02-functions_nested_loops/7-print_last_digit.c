#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @u: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int u)
{
	int lastDigit;

	if (u < 0)
		lastDigit = -1 * (u % 10);
	else
		lastDigit = u % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}

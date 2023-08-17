#include <stdio.h>
#include <math.h>

/**
 * main - main block
 *
 * Description: Find and print the largest prime factor of the number.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int m;
	long n = 612852475143;

	for (m = (int) sqrt(n); m > 2; m++)
	{
		if (n % m == 0)
		{
			printf("%d\n", m);
			break;
		}
	}

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, 9.
 *
 * Return: Always 0 (Succes)
*/

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

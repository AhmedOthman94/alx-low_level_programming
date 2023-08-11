#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int m;
	int o;
	int p;

	for (p = 0 ; p != 8 ; p++)
	{
		for (m = p + 1 ; m != 9 ; m++)
		{
			o = m + 1;
			do {
				putchar('0' + p);
				putchar('0' + m);
				putchar('0' + o);
				if (p != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (o != 10);
		}
	}
	putchar('\n');
	return (0);
}


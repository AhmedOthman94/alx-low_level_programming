#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the differences.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int h;
	int n;
	int e;
	int s;

	for (h = 0 ; h < 10 ; h++)
	{
		for (n = 0 ; n <= 10 ; n++)
		{
			for (e = 0 ; e < 10 ; e++)
			{
				for (s = 0 ; s < 10 ; s++)
				{
					putchar('0' + h);
					putchar('0' + n);
					putchar(32);
					putchar('0' + e);
					putchar('0' + s);
					if (!(h == 9 && n == 8))
					{
						putchar(',');
						putchar(32);
					}
					s++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


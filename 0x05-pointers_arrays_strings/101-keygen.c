#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int p[100];
	int l, s, j;

	s = 0;

	srand(time(NULL));

	for (l = 0; l < 100; l++)
	{
		p[l] = rand() % 78;
		s += (p[l] + '0');
		putchar(p[l] + '0');
		if ((2772 - s) - '0' < 78)
		{
			j = 2772 - s - '0';
			s += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}

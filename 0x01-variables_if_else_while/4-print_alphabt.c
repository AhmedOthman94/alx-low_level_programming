#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphapet letters except q and e.
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}

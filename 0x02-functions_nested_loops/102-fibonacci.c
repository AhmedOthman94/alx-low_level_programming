#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	unsigned long fib1 = 0, fib2 = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = fib1 + fib2;
		printf("%lu", s);

		fib1 = fib2;
		fib2 = s;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

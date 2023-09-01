#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Sucess) otherwise failure
*/

int main(int argc, char *argv[])
{
	int m, n, s = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[m]);
	}

	printf("%d\n", s);
	return (0);
}

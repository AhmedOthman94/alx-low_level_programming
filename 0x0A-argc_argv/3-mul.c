#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multi two numbers
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Sucess)
*/

int main(int argc, char *argv[])
{
	int m, s = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (m = 1; m < argc; m++)
	{
		s *= atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}


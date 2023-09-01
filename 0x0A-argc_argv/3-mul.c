#include <stdlib.h>
#include <stdio.h>

/**
 * main - that can multiply the two numbers
 *
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", n);
	}
	return (0);
}

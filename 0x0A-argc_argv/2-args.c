#include <stdio.h>

/**
 * main - that can print all the arguments
 * @argc: number
 * @argv: array
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - that can print the number of arguments
 * @argc: number of commandline arguments
 * @argv: array
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

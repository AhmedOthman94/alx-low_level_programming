#include <stdio.h>
#include "main.h"

/**
 * main - that can print name of a program
 * @argc: number
 * @argv: array
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

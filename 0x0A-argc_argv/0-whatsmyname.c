#include <stdio.h>
#include "main.h"

/**
 * main - that can print program name with a new line
 * @argc: int
 * @argv: list
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

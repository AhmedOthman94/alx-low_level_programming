#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - that can show  minimum number of coins to amke money
 *
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Success) otherwise failure
*/

int main(int argc, char *argv[])
{
	int n, i, rt;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	rt = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= c[i])
		{
			rt++;
			n -= c[i];
		}
	}
	printf("%d\n", rt);
	return (0);
}

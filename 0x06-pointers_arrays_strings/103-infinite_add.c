#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int il = 0, jl = 0, ca = 0, i, j, sm, big;

	while (n1[il] != '\0')
	{
		il++;
	}
	while (n2[jl] != '\0')
	{
		jl++;
	}
	if (il > jl)
		big = il;
	else
		big = jl;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';

	while (big >= 0)
	{
		i = (n1[il - 1] - '0');
		j = (n1[jl - 1] - '0');
		if (il > 0 && jl > 0)
			sm = i + j + ca;
		else if (il < 0 && jl > 0)
			sm = j + ca;
		else if (il > 0 && jl < 0)
			sm = i + ca;
		else
			sm = ca;

		if (sm > 9)
		{
			ca = sm / 10;
			sm = (sm % 10) + '0';
		}
		else
		{
			ca = 0;
			sm = sm + '0';
		}
		r[big] = sm;
		il--;
		jl--;
		big--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}

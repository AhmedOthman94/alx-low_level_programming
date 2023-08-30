#include "main.h"

/**
 * palind_0 - gets length of a
 * @c: input string
 * @i: counter
 *
 * Return: The result
*/

int palind_0(char *c, int i)
{
	if (*c == 0)
		return (i - 1);
	return (palind_0(c + 1, i + 1));
}
/**
 * palind_1 - string vs string reverse
 * @c: input string
 * @i: length
 *
 * Return: The result
*/

int palind_1(char *c, int i)
{
	if (*c != *(c + i))
		return (0);
	else if (*c == 0)
		return (1);
	return (palind_1(c + 1, i - 2));
}
/**
 * is_palindrome - Is string a palindrome
 * @s: string
 *
 * Return: The result
*/

int is_palindrome(char *s)
{
	int n;

	n = palind_0(s, 0);
	return (palind_1(s, n));
}

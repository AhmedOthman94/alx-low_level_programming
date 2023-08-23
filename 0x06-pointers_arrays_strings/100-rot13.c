#include "main.h"

/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
*/

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int m = 0;
	int n;

	while (*(s + m) != '\0')
	{
		for (n = 0; n <= 51; n++)
		{
			if (*(s + m) == a[n])
			{
				*(s + m) = r[n];
				break;
			}
		}
		m++;
	}
	return (s);
}

#include "main.h"

/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @str: pointer to char input array
 *
 * Return: @str
*/

char *cap_string(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (str[m] >= 97 && str[m] <= 122)
		{
			if (m == 0)
			{
				str[m] -= 32;
			}
			if (str[m - 1] == 32 || str[m - 1] == 9 || str[m - 1] == 10 ||
				str[m - 1] == 44 || str[m - 1] == 59 || str[m - 1] == 46 ||
				str[m - 1] == 33 || str[m - 1] == 63 || str[m - 1] == 34 ||
				str[m - 1] == 40 || str[m - 1] == 41 || str[m - 1] == 123 ||
				str[m - 1] == 124)
			{
				str[m] -= 32;
			}
		}
		m++;
	}
	return (str);
}

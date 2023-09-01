#include"main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @u: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int u)
{
	if (u < 0)
		u = (-1) * u;
	return (u);
}

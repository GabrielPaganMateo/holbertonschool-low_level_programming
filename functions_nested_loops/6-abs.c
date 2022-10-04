#include "main.h"
/**
 * _abs: Compute absolute value
 * int: Integer
 *
 * Return: Absolute value of int
 */
int _abs(int n)
{
	int n, x, y;

	x = (n * (-1));
	y = n;

	if (n < 0)
	{
		return (x);
	}
	else
	{
		return (y);
	}
}

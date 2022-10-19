#include "main.h"
/**
 * _abs- Compute absolute value
 * @n: Integer
 *
 * Return: Absolute value of int
 */
int _abs(int n)
{
	int x, y;

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

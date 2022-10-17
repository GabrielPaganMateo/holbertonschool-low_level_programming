#include "main.h"
/**
 *_sqrt_recursion - Returns the natural square root of a number
 *@n: number
 *Return: integer
 */
int square_root(int r2, int n);
int _sqrt_recursion(int n)
{
	return (square_root(0, n));
}
/**
 * square_root - finds the square root
 * @r2: root of the square
 * @n: given number
 */
int square_root(int r2, int n)
{
	int perfect_square = r2 * r2;

	if (perfect_square < n)
	{
		return (square_root(r2 + 1, n));
	}
	else if (perfect_square > n)
	{
		return (-1);
	}
	else
	{
		return (r2);
	}
}

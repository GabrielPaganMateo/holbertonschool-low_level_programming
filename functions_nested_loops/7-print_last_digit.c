#include "main.h"
/**
 * print_last_digit- Prints last digit of a number
 * @n: number that is given
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = x * (-1);
	}
	_putchar('0' + x);
	return (x);
}

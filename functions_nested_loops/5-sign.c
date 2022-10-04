#include "main.h"
/**
 * print_sign- Prints the sign of a number
 *
 * Return: 1 if n is greater than zero, 0 if zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else 
	{
		return (-1);
		_putchar('-');
	}
}

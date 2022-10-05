#include "main.h"
/**
 * print_last_digit- Prints last digit of a number
 * @n: last digit of number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x;

		
	x = n % 10;
	
	if (x < 0)
	{
		x = n * (-1);
		_putchar(x + x);
		_putchar(' ');
	}
	else if (x > 0)
	{
		_putchar(x + x);
		_putchar(' ');
	}
	else
	{
		_putchar(x + x);
		_putchar(' ');
	}

	return (x + x);
}

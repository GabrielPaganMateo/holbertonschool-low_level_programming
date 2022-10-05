#include "main.h"
/**
 * print_last_digit- Prints last digit of a number
 * @n: last digit of number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = n % (-10);
	}
	else if (n > 0)
	{
		x = n % (10);
	}
	else
	{	
		x = n % (10);
		_putchar ('0' + x);
	}
		return (x);
}

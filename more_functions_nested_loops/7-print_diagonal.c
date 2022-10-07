#include "main.h"
/**
 * print_diagonal- Draw diagonal line on terminal
 * @n: Number of times the character \' will be printed
 * Return: \ a number of n times
 */
void print_diagonal(int n)
{
	int space;

	for (space = 1 ; space < n ; space++)
	{
		if (n > 0)
		{
			_putchar(32);
		}
	}
	if (n > 0)
	{
		_putchar(92);
	}
	_putchar ('\n');
}

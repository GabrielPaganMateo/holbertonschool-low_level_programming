#include "main.h"
/**
 * print_diagonal- Draw diagonal line on terminal
 * @n: Number of times the character \' will be printed
 * Return: \ a number of n times
 */
void print_diagonal(int n)
{
	int rep, space;

if (n <= 0)
{

}
else
for (rep = 0 ; rep < n ; rep++)
{
	for (space = 0 ; space < rep ; space++)
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
}

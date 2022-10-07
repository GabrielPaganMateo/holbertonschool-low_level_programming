#include "main.h"
/**
 * print_line- Draw a straight line in terminal
 * @n: Number of times _ is drawn
 * Return: underscores equal to the amount of n
 */
void print_line(int n)
{
	int rep;

	if (n > 0)
	{
		for (rep = 0 ; rep <= n ; rep++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_triangle- Prints a triangle
 * @size: size of triangle
 * Return: # in size of triangle
 */
void print_triangle(int size)
{
	int rep, space, size2, bloc;

	size2 = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (rep = 0 ; rep < size ; rep++)
		{
			for (space = 1; space < size2 ; space++)
			{
				_putchar(' ');
			}
			if (rep < size)
			{
				size2--;
			}
			for (bloc = 0; bloc <= rep ; bloc++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

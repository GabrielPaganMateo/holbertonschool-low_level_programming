#include "main.h"
/**
 * print_square- Prints a square
 * @size: size of the square
 * Return: # in form of square
 */
void print_square(int size)
{
	int width, length;

	if (size > 0)
	{
		for (width = 0 ; width < size ; width++)
		{
			for (length = 0 ; length < size ; length++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

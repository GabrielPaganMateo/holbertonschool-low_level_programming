#include "main.h"
/**
 * print_triangle- Prints a triangle
 * @size: size of triangle
 * Return: # in size of triangle
 */
void print_triangle(int size)
{
	int rep, space; 

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (rep = 0 ; rep < size ; rep++)
		{
			for (space = 10 ; space < size ; space--)
			{
				_putchar('#');
			}
		}
}						

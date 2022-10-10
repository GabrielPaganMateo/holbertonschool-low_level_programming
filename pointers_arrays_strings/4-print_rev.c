#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string
 * Return: gnirts = string
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (*(s + j) != '\0')
	{
		_putchar(*(s + j));
		j++;
	}

	j = j - 1;

	for (i = j ; i > j ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}	

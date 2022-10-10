#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string
 * Return: gnirts = string
 */
void print_rev(char *s)
{
	int i, j, length;

	j = 0;

	while (*(s + j) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	for (i = j ; i <= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}	

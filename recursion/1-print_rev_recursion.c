#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: string
 * Return: characters
 */
void _print_rev_recursion(char *s)
{	
	int i;

	if (*s != '\0')
	{
		_print_rev_recursion(s);
		s++;
	}
	_putchar('\n');
	return;
}

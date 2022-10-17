#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: string
 * Return: characters
 */
void _print_rev_recursion(char *s)
{
	if (s[i] != '\0')
	{
		reverse(s, i+1);
	}
	_putchar('\n');
	return;
}

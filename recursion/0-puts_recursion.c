#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: characters
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	_putchar(s[i]);
	i++;
	_puts_recursion(s[i]);
}

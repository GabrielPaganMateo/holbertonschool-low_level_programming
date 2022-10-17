#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: characters
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else 
	{
		_putchar('\n');
	}
}

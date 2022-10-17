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

	if (s[i] != '\0' && s[i] != s[0])
	{
		i++;

		_putchar(s[i]);
	}

	if (s[i] != '\0')
	{
		_puts_recursion(s);
	}
}

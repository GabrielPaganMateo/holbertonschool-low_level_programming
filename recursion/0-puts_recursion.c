#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: characters
 */
void _puts_recursion(char *s);
{
	int i;

	for (i = 0; s != '\0' ; i++)
	{
		_putchar(s[i]);
	}
}

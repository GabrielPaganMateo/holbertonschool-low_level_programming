#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: characters
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	
	s++;
	
	_puts_recursion(s);
}

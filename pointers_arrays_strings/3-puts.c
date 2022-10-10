#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; *str != '\0' ; i++)
	{
		_putchar(*(str + i));
	}
}

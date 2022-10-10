#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		_putchar(*(str + i));
		i++;

		if (_putchar(*(str + i)) == '\0')
		{
			break;
		}
	}
}

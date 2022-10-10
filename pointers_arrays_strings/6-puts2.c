#include "main.h"
/**
 * puts2 - Prints every character of a string
 * @str : string
 * Return : characters of string
 */
void puts2(char *str)
{
	int length, i;

	while (*str != '\0')
	{
		length++;
	}
	
	for (i = 0 ; i <= length ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

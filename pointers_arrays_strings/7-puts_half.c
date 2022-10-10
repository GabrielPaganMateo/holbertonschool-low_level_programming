#include "main.h"
/**
 * puts_half - Prints second half of a string
 * @str : string
 * Return : string characters
 */
void puts_half(char *str)
{
	int length, i, l;

	length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}

	l = length + 1;

	if (length % 2 == 0)
	{
		l = length / 2;
	}
	else
	{
		l = (length - 1) / 2;
	}

	for (i = l ; l <= '\0' ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

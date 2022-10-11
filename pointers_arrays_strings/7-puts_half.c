#include "main.h"
/**
 * puts_half - Prints second half of a string
 * @str : string
 * Return : string characters
 */
void puts_half(char *str)
{
	int length, i, l, odd, even;

	length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}

	l = length;
	
	if (length % 2 == 0)
	{
		for (even = length/2 ; str[even] != '\0'; even++)
		{
			_putchar(str[even]);
		}
	}
	else
	{
		for (odd = (length - 1)/2; odd < length-1; odd++)
		{
			_putchar(str[odd+1]);
		}
	}
	_putchar('\n');
}

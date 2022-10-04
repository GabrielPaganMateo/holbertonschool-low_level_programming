#include "main.h"
/**
 * isalpha- Checks for alphabetic character
 * @c: alphabetic character that is lowercase or uppercase
 *
 * Return: 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

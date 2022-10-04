#include "main.h"
/**
 * _islower - Check for lowercase character
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{	
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

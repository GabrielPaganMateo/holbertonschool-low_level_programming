#include "main.h"
/**
 * _isupper- Check for uppercase character
 * @c: Character to be checked
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

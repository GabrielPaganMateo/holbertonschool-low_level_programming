#include "main.h"
/**
 * _strspn - Returns the number of bytes from initial segment of string
 * @s: initial segment
 * @accept: the bytes of s consist only of bytes from this parameter
 * Return: Thr number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	do {
		if (*s == *accept)
		{
			return (sizeof(*s));
		}
	} while (*s++);
	return (0);
}

#include "main.h"
/**
 * _strspn - Returns the number of bytes from initial segment of string
 * @s: initial segment
 * @accept: the bytes of s consist only of bytes from this parameter
 * Return: Thr number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (i);
}

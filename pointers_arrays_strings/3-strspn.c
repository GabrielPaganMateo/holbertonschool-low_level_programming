#include "main.h"
/**
 * _strspn - Returns the number of bytes from initial segment of string
 * @s: initial segment
 * @accept: the bytes of s consist only of bytes from this parameter
 * Return: Thr number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;
	
	len = 0;

	for (i = 0; s[i] != ',' ; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
			if (accept[j] == "")
			{
				return(0);
			}	
		}
	}
	return (len);
}

#include "main.h"
#include <stddef.h>
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to beginnig of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, hlen, nlen;
	hlen = 0;
	nlen = 0;

	while (haystack[hlen] != '\0')
	{
		hlen++;
	}
	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	
	if (nlen == 0)
	{
		return (NULL);
	}

	for (i = 0 ; i < hlen ; i++)
	{
		if (i == needle[0])
		{
			for (j = 0 ; j < nlen ; j++)
			{
				if (haystack[i + j] == needle[i])
				{
					if(j == nlen - 1)
					{
						return (haystack + i);
					}
				}
			}
		}
	}
	return (NULL);
}

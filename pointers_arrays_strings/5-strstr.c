#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to beginnig of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	i = 0;
	j = 0;

	for ( ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] == needle[j])
		{
			for ( ; needle[j] != '\0' ; j++)
			{
				if (haystack[i] == needle[j])
				{
					return (needle);
				}
			}
		}
		else
		{
			j++;
		}
	}
	return (0);
}

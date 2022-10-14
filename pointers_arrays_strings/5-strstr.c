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

	j = 0;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] == needle[j])
		{
			for (j = 0 ; needle[j] != '\0' ; j++)
			{
				if (haystack[i] == needle[j])
				{
					return (needle);
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			return (haystack)
		}
	}
	return (0);
}

#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to beginnig of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	do { 
		for (i = 0 ; haystack[i] != '\0' ; i++)
		{	
			if (*needle == *haystack)
			{	
				return (needle);
			}
		}
	} while (haystack++);
	return (0);
}

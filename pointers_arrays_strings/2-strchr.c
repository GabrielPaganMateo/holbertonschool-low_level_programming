#include "main.h"
/**
 * _strchr - Returns a pointer when specific character occurs in string s,
 * or NULL if character is not found
 * @s: string
 * @c: character
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s != '\0' ; i++)
	{
		s[i];
		
		if (s[i] == c)
		{
			return (*s[i]);
		}
		else
		{
			return (NULL);
		}
	}
}

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
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}

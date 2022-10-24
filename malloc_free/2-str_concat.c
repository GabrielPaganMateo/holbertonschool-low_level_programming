#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
int checkNULL(char *s);
/**
 * str_concat - Function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to allocated memory with contents of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int totalLength, length1, length2, i;
	char *concatenated;

	length1 = checkNULL(s1);
	length2 = checkNULL(s2);
	totalLength = length1 + length2;

	concatenated = malloc((totalLength + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1 ; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; i < length2 ; i++)
	{
		concatenated[length1 + i] = s2[i];
	}
	concatenated[length1 + i] = '\0';

	return (concatenated);
}
/**
 * checkNULL - checks if string is NULL, if true return 0, else return strlen
 * @s: string
 * Return: return int
 */
int checkNULL(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	return (strlen(s));
}

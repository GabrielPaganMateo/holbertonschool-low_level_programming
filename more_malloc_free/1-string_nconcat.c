#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: total bytes of s2
 * Return: string of characters
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length1, length2;
	char *concat;

	if (s1 == NULL)
	{
		length1 = 0;
	}
	else
	{
		length1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		length2 = 0;
	}
	else
	{
		length2 = strlen(s2);
	}

	if (n >= length2)
	{
		n = length2;
	}

	concat = malloc(sizeof(char) * (n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < (n + 1); i++)
	{
		concat[length1 + i] = s2[i];
	}
	concat[length1 + i] = '\0';
	
	return (concat);
}


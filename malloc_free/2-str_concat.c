#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
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

	if (s2 != NULL)
	{
		length1 = strlen(s1);
	}
	else
	{
		length1 = 0;
	}
	if (s1 != NULL)
	{
		length2 = strlen(s2);
	}
	else
	{
		length2 = 0;
	}

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

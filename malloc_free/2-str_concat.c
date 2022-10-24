#include "main.h"
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
	int length1, length2, i;
	char *concatenated;

	if (s1 == NULL)
	{
		s1[0] = ' ';
		s1[1] = '\0';
	}
	if (s2 == NULL)
	{
		s2[0] = ' ';
		s2[1] = '\0';
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	concatenated = malloc((length1 + length2 + 1) * sizeof(char));
	
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1 ; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		concatenated[length1 + i] = s2[i];
	}
	concatenated[length1 + i] = '\0';

	return (concatenated);
}

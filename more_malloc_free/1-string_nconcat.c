#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: total bytes of s2
 * @s: parameter relevant on checkNULL function
 * Return: string of characters
 */
int checkNULL(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length1, length2;
	char *concat;

	length1 = checkNULL(s1);
	length2 = checkNULL(s2);

	if (n >= length2)
	{
		n = length2;
	}

	concat = malloc(sizeof(char) * (n + length1 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		concat[length1 + i] = s2[i];
	}
	concat[length1 + i] = '\0';

	return (concat);
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

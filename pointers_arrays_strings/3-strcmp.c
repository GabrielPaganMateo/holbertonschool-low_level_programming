#include "main.h"
/**
 * _strcmp - Compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, less or greater than 0 if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while(s1[i] == s2[i] && s1[i] == '\0')
	{
		i++
	}

	if (s1[i] < s2[i])
	{
		return (-1);
	}
	else if (s1[i] > s2[i])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

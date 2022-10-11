#include "main.h"
/**
 * _strcmp - Compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, less or greater than 0 if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, length;
	char *comp1, *comp2;

	while (s1[length] != '\0')
	{
		length++;
	}

	for (i = 0; ; i++)
	{
		comp1[i] = s1[i];
		comp2[i] = s2[i];
	
		if (comp1[i] != comp2[i])
		{
			if (comp1[i] < comp2[i])
			{
				return (-1);
			}
			if (comp1[i] > comp2[i])
			{
				return (1);
			}
		}
	}
	return (0);
}

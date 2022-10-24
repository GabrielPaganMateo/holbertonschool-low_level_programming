#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: given string
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	char *string;
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	string = malloc((length + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (length + 1); i++)
	{
		string[i] = str[i];
	}

	return (string);
}

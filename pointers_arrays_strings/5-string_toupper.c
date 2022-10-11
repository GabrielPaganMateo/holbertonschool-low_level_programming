#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters of string to uppercase
 * @str: string
 * Return: uppercase characters
 */
char *string_toupper(char *str)
{
	int i, length;

	while (*(str + length) != '\0')
	{
		length++;
	}

	for (i = 0 ; i <= length ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

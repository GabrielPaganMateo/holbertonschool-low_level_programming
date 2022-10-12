#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string
 * @str: String
 * Return: String
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (i == '"' || i == ' ' || i == '.' || i == '\n' || i == '!'
			|| i == '-' || i == '\t' || i == ';')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str - 32;
			}
			continue;
		}
	}
	return (str);
}


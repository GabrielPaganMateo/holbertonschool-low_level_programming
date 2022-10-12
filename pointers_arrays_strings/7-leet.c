#include "main.h"
/**
 * *leet - Encode a string into 1337
 * @str: string
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;

	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '\0'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}

#include "main.h"
/**
 * *_strpbrk - locate ocurrence of string s in any byte of string accept
 * @s: string evaluated
 * @accept: string with desired characters
 * Return: Characters
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if(s[i] == accept[j])
			{
				return (s);
			}
		}
		if (s[i] != accept[j])
		{
			return (s);
		}	
	}
	return (s);
}

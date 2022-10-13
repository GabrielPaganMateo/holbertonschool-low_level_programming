#include "main.h"
/**
 * *_strpbrk - locate ocurrence of string s in any byte of string accept
 * @s: string evaluated
 * @accept: string with desired characters
 * Return: Characters
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
        {	
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (*s == accept[i])
                	{
                        	return (s);
                	}
		}
		s++;
        }
        return (0);
}

#include "main.h"
/**
 * *_strcpy - Copies and pastes a string
 * @dest : destination of string
 * @src : string
 * Return : the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; ;i++)
	{
		dest[i] = src[i];

		if (dest[i] == '\0')
		{
			return (dest);
		}
	}
}

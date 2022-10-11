#include "main.h"
/**
 * *_strcat - Concatenates two string
 * @src: first string
 * @dest: second string
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	int dlen, i;

	dlen = 0;

	while (*(dest + dlen) != '\0')
	{
		dlen++;
	}

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[dlen + i] = src[i];
		dest[dlen + i] = '\0';
	}
	return (dest);
}

#include "main.h"
/**
 * *_strcat - Concatenates two string
 * @src: first string
 * @dest: second string
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	int dlength, slength, i;

	dlength = 0;

	while (*(dest + dlength) != '\0')
	{
		dlength++;
	}
	while (*(src + slength) != '\0')
	{
		slength++;
	}

	for (i = 0 ; i < slength && src[i] != '\0' ; i++)
	{
		dest[dlength + i] = src[i];
	}
	dest[dlength + i] = '\0';
	return (dest);
}

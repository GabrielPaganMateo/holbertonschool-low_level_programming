#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: number of elements from second string
 * Return: string of characters
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlength, i;

	dlength = 0;

	while (dest[dlength] != '\0')
	{
		dlength++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlength + i] = src[i];
	}
	dest[dlength + i] = '\0';
	return (dest);
}

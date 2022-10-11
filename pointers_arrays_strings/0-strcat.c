#include "main.h"
/**
 * *_strcat - Concatenates two string
 * @src: first string
 * @dest: second string
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	int length1, length2, i, j;

	length1 = 0;
	length2 = 0;

	while (*(dest + length1) != '0')
	{
		length1++
	}
	while (*(src + length2) != '0')
	{
		length2++
	}

	for (i = 0 , j = length1; i < (length1 + length2) ; i++ , j++)
	{
		*(dest + i) = *(src + j)
	}
}

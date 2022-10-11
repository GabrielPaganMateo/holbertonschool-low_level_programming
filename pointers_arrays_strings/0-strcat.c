#include "main.h"
/**
 * *_strcat - Concatenates two string
 * @src: first string
 * @dest: second string
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	while (*(++dest));
	while (*(dest++) = *(src++));
	return (dest);
}

#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s : string 
 * Return: value of string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0') 
	{
		count++;
	}

	return (count);
}

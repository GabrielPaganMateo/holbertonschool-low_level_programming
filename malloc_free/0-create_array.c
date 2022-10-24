#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the allocated array
 * @c: specified character
 * Return: A block that has been partially allocated by characters
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	array = malloc((size) * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	
	return (array);
}

#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: n amount of elements
 * @size: amount of bytes for each element
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *intalloc, i;
	char *charalloc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (size == sizeof(char))
	{
		charalloc = malloc(nmemb * size);
		if (charalloc == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb ; i++)
		{
			charalloc[i] = '0';
		}
		return (charalloc);
	}
	else
	{
	intalloc = malloc(nmemb * size);

	if (intalloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		intalloc[i] = 0;
	}
	}
	return (intalloc);
}

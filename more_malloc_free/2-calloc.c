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
	unsigned int *kalloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	kalloc = malloc(nmemb * size);
	if (kalloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		kalloc[i] = 0;
	}
	
	return (kalloc);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: amount of bytes to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *alloc;

	alloc = malloc(sizeof(char) * b);

	if (alloc == NULL)
	{
		exit(98);
	}
	else
	{
		return (alloc);
	}
}

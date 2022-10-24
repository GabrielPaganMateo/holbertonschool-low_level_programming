#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: array columns
 * @height: array rows
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	int *grid;

	grid = calloc((width * height), sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}
	return (grid);
}

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
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*int));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (grid);
}

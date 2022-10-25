#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: array columns
 * @height: array rows
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
		}
	}

	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

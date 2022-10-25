#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional array previously created
 * @grid: two dimensional grid
 * @height: amount of rows of array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

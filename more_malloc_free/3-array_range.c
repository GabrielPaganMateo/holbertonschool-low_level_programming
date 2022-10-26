#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: Array of integers
 */
int *array_range(int min, int max)
{
	int *array, i, j, range;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min;
	
	if (range == 0)
	{
		range = 1;
	}

	array = malloc(sizeof(int) * range);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = min, j = 0; j < range; i++, j++)
	{
		array[j] = i;
	}

	return (array);
}

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
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = min; i < (max - min); i++)
	{
		array[i] = i;
	}

	return (array);
}

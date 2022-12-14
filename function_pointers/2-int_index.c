#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function that compares values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*fptr)(int);

	if (array == NULL)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	fptr = cmp;

	for (i = 0; i < size; i++)
	{
		(*fptr)(array[i]);

		if ((*fptr)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}


#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*fptr)(int);

	fptr = action;

	size_t i;

	for (i = 0; i < size; i++)
	{
		(*fptr)(array[i]);
	}
}

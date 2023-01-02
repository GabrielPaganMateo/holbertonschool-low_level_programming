#include "search_algos.h"
/**
 * binary_search - searches for value in array of integers, binary algorithm
 * @array: pointer to first element of array
 * @size: size of array
 * @value: integer to be searched
 * Return: index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);


	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (value == array[mid])
		{
			return (mid);
		}

		if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}



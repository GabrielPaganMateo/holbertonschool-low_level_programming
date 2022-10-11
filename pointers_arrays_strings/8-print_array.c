#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a : array
 * @n : quantity of elements
 * Return : array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (i == n)
		printf("%i", *(a + i));
		else
		printf("%i, ", *(a + i));
	}
}

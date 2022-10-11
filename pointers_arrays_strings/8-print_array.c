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

	for (i = 1 ; i < n ; ++i)
	{
		printf("%d", *a);
		
		a++;

		if ( i < (n - 1) )
		{
			printf(", ");
		}
	}

}

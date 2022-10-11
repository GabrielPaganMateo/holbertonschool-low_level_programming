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

	if (n == 0 || n == (-1))
	{
		n = 1;
		for (i = 0 ; i < n ; ++i)
		{
			printf("\n");
		}
	}
	else
	{

		for (i = 0 ; i < n ; ++i)
		{
			printf("%d", *a);
			++a;

			if (i < (n - 1))
			{
				printf(", ");
			}
			else if (i == (n - 1))
			{
				printf("\n");
			}
		}
	}
}

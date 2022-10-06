#include "main.h"
#include <stdio.h>
/**
 * print_to_98- Print natural numbers from n to 98
 * @n: Number to be printed
 *
 * Return: All Natural number between n & 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
			n--;
		}
	}
}

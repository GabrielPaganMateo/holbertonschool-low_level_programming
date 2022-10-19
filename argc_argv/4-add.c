#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, sum, zero;
	sum = 0;
	zero = 0;

	if (argc == 1)
	{
		printf("%d\n", zero);
		return (0);
	}

	for (i = 0 ; argv[i] != NULL ; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

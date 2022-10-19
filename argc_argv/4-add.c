#include "main.h"
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char argv[])
{
	int i, j, zero;

	zero = 0;

	for (i = 0 ; i < argc ; i++)
	{
		num = atoi(argv[i]);
		zero += num;
	}
	printf("%d", zero);
	return (0);
}

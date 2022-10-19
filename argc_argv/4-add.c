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
	int i, sum, zero, num;
	char Error[] = "Error";
	sum = 0;
	zero = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 0 ; i < argc ; i++)
	{
		if (isdigit(argv[i]) != 0)
		{
			num = atoi(argv[i]);
			zero += num;
		}	
		else
		{
			printf("%s\n", Error);
			return (1);
		}
	}
	printf("%d\n", zero);
	return (0);
}
